#include "Snake.h"

Snake::Snake(size_t maxX, size_t maxY, ConsoleColor color)
	:	mColor{ color },
		mDirection{ 'D' },
		mSpeed{ 5 },
		mAlive{ true }
{
	generate(maxX, maxY);
}

size_t Snake::getSize()
{
	return mBody.size();
}

char Snake::getDirection()
{
	return mDirection;
}

void Snake::generate(size_t maxX, size_t maxY)
{
	Point head{ maxX, maxY };
	mBody.push_front(head);			// Met le premier point à la tête de la liste
}

void Snake::move(char direction)
{
	Point p{ mBody.back() };		// Prend les valeurs de la queue du Snake
	size_t x, y;
	direction = toupper(direction);

	switch (mDirection) {
	// RIGHT; 0x27 == VK_RIGHT, 0x44 == 'D'
	case 0x27:
	case 0x44: x = p.getX() + mSpeed;
			   p.setX(x);
		break;

	// LEFT; 0x25 == VK_LEFT, 0x41 == 'A'
	case 0x25:
	case 0x41: x = p.getX() - mSpeed;
			   p.setX(x);
		break;

	// UP; 0x26 == VK_UP, 0x57 == 'W'
	case 0x26:
	case 0x57: y = p.getY() - mSpeed;
			   p.setY(y);
		break;

	// DOWN; 0x28 == VK_DOWN, 0x53 == 'S'
	case 0x28:
	case 0x53: y = p.getY() + mSpeed;
			   p.setY(y);
		break;
	}

	mDirection = direction;
	mBody.pop_back();			// Retire l'ancienne queue du Snake de la liste
	mBody.push_front(p);		// Met la "nouvelle" queue de la liste comme tête
}

void Snake::grow()
{
	Point p{ mBody.back() };	// Copie la queue du Snake
	mBody.push_back(p);			// Met la copie comme nouvelle queue du Snake
}

void Snake::draw(ConsoleImage &image)
{
	// Dessine sur la console (&image) chaque points de la liste du Snake (mBody)
	for (auto p : mBody) {
		image.drawPoint(p.getX(), p.getY(), char(219), mColor);
	}
}

/*void Snake::touchItem(Fruit &fruit, Obstacle &obstacle)
{
	// À FAIRE
}*/