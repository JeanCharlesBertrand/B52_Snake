#include "Fruit.h"
#include "RandomTools.h"
#include "ConsoleImage.h"

Fruit::Fruit(std::list<Point> snake, std::list<Point> obstacle, size_t maxX, size_t maxY, ConsoleColor color)
	: mColor{ color }
{
	generate(snake, obstacle, maxX, maxY);
}

Point Fruit::getPoint()
{
	return mPoint;
}

void Fruit::setPoint(size_t x, size_t y)
{
	mPoint.setX(x);
	mPoint.setY(y);
}

void Fruit::generate(std::list<Point> snake, std::list<Point> obstacle, size_t maxX, size_t maxY, size_t min)
{
	// Fonction pour générer aléatoirement les coordonnées x
	// et y qui seront utilisés pour les objets Point des fruits
	// créés.

	int x{ RandomTools::randomValue(min, maxX - 1) };
	int y{ RandomTools::randomValue(min, maxY - 1) };
	bool freePosition{ checkPosition(snake, obstacle, x, y) };

	while (!freePosition) {
		x = RandomTools::randomValue(min, maxX - 1);
		y = RandomTools::randomValue(min, maxY - 1);
		freePosition = checkPosition(snake, obstacle, x, y);
	}

	setPoint(x, y);
}

void Fruit::draw(ConsoleImage &image)
{
	// Fonction pour afficher les fruits dans l'aire de jeu;

	// ConsoleImage fruit{ writer.createImage("fruit") };
	image.drawPoint(mPoint.getX(), mPoint.getY(), char(219), mColor);
	// writer.push("fruit");
}

bool Fruit::checkPosition(std::list<Point> snake, std::list<Point> obstacle, int x, int y)
{
	// Vérifie si le point X de Fruit est dans l'intervalle de
	// positions [tête + 2, tête - 2]
	if (x <= (snake.front().getX() + 2) &&
		x >= (snake.front().getX() - 2)) {
		return false;
	}

	// Vérifie si le point Y de Fruit est dans l'intervalle de
	// positions [tête + 2, tête - 2]
	if (y <= (snake.front().getY() + 2) &&
		y >= (snake.front().getY() - 2)) {
		return false;
	}

	// Vérifie si le Fruit apparait sur le corps du Snake
	for (auto p : snake) {
		if (x == p.getX() && y == p.getY()) {
			return false;
		}
	}

	// Vérifie si le Fruit apparait sur un point d'Obstacle
	for (auto p : obstacle) {
		if (x == p.getX() && y == p.getY()) {
			return false;
		}
	}

	return true;		// Si aucune des conditions précédentes n'a été trouvées; position libre
}