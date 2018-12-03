#include "Snake.h"
#include <iterator>


Snake::Snake(size_t maxX, size_t maxY, ConsoleColor color)
	: mColor{ color },
	mDirection{ ' ' },
	mSpeed{ 1 },
	mAlive{ true }
{
	generate(maxX, maxY);
}

Snake::~Snake()
{
}

std::list<Point> Snake::getBody()
{
	return mBody;
}

bool Snake::getIsAlive()
{
	return mAlive;
}

char Snake::getDirection()
{
	return mDirection;
}

void Snake::generate(size_t maxX, size_t maxY)
{
	Point head{ (maxX / 2), (maxY / 2) };

	// Créé les 5 points initiaux du corps de Snake
	for (int i = 0; i < 5; ++i) {
		mBody.push_back(head);
	}
}

void Snake::move(char direction, Fruit &fruit, Obstacle &obstacle, size_t maxX, size_t maxY)
{
	Point p{ mBody.front() };		// Prend les valeurs de la queue du Snake

	// Vérifie que le Snake ne fasse pas un 180 et ne revienne
	// pas sur lui-même
	if (mDirection == 'D' && direction == 'A') {
		direction = 'D';

	} else if (mDirection == 'A' && direction == 'D') {
		direction = 'A';

	} else if (mDirection == 'W' && direction == 'S') {
		direction = 'W';

	} else if (mDirection == 'S' && direction == 'W') {
		direction = 'S';
	}

	// Déplace le point p de la valeur vitesse selon la direction
	// de l'input au clavier; vérifie si la tête de Snake dépasse
	// les bornes du jeu et, si oui, fait un wrap-around
	switch (direction) {
		// RIGHT
	case 'D':
		if ((mBody.front().getX() + mSpeed) >= maxX) {
			p.setX(0);
		} else {
			p.setX(mBody.front().getX() + mSpeed);
		}
		break;
		
		// LEFT
	case 'A':
		// Transtypage de size_t à int pour permettre x < 0
		if (((int)mBody.front().getX() - mSpeed) < 0) {
			p.setX(maxX - 1);
		} else {
			p.setX(mBody.front().getX() - mSpeed);
		}
		break;
		
		// UP
	case 'W':
		// Transtypage de size_t à int pour permettre y < 0
		if (((int)mBody.front().getY() - mSpeed) < 0) {
			p.setY(maxY - 1);
		} else {
			p.setY(mBody.front().getY() - mSpeed);
		}
		break;
		
		// DOWN
	case 'S':
		if ((mBody.front().getY() + mSpeed) >= maxY) {
			p.setY(0);
		} else {
			p.setY(mBody.front().getY() + mSpeed);
		}
		break;
	}

	mBody.push_front(p);		// Met la "nouvelle" queue de la liste comme tête
	mBody.pop_back();			// Retire l'ancienne queue du Snake de la liste


	if (touchFruit(fruit)) {							// Collision avec un Fruit
		grow();
		fruit.generate(mBody, obstacle.getWalls(), maxX, maxY);

	} else if (touchWall(obstacle)) {					// Collision avec un Obstacle
		mAlive = false;
	
	} else if (direction != ' ' && touchSnake()) {		// Collision avec lui-même
		mAlive = false;
	}

	mDirection = direction;
}

void Snake::grow()
{
	Point p{ mBody.back() };

	// Grossit le Snake de (size / 3) points
	for (size_t i = 0; i < (mBody.size() / 3); ++i) {
		mBody.push_back(p);
	}
}

bool Snake::touchFruit(Fruit &fruit)
{
	// Compare la position (x, y) de la tête de Snake à la position de Fruit
	if (mBody.front().getX() == fruit.getPoint().getX() &&
		mBody.front().getY() == fruit.getPoint().getY()) {
		return true;
	}

	return false;
}

bool Snake::touchWall(Obstacle &obstacle)
{
	// Compare la position (x, y) de la tête de Snake aux points Obstacles
	for (auto p : obstacle.getWalls()) {
		if (mBody.front().getX() == p.getX() &&
			mBody.front().getY() == p.getY()) {
			return true;
		}
	}

	return false;
}

bool Snake::touchSnake()
{
	// Compare la position (x, y) de la tête de Snake au reste de son corps
	for (auto p = std::next(mBody.begin()); p != mBody.end(); ++p) {
		if (mBody.front().getX() == p->getX() && mBody.front().getY() == p->getY()) {
			return true;
		}
	}

	return false;
}

void Snake::draw(ConsoleImage &image)
{
	// Dessine sur la console (&image) chaque points de la liste du Snake (mBody)
	for (auto p : mBody) {
		image.drawPoint(p.getX(), p.getY(), char(219), mColor);
	}
}