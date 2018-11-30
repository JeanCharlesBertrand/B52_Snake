#include "Snake.h"
#include <iterator>

Snake::Snake(size_t maxX, size_t maxY, ConsoleColor color)
	:	mColor{ color },
		mDirection{ 'D' },
		mSpeed{ 1 },
		mAlive{ true }
{
	generate(maxX, maxY);
}

Snake::~Snake()
{
	
}

size_t Snake::getSize()
{
	return mBody.size();
}

char Snake::getDirection()
{
	return mDirection;
}

bool Snake::getIsAlive()
{
	return mAlive;
}

void Snake::generate(size_t maxX, size_t maxY)
{
	Point head{ (maxX / 2), (maxY / 2) };
	mBody.push_front(head);			// Met le premier point à la tête de la liste
}

void Snake::move(char direction, Fruit &fruit, Obstacle &obstacle, size_t maxX, size_t maxY)
{
	if (direction == ' ') return;

	Point p{ mBody.front() };		// Prend les valeurs de la queue du Snake
	//size_t x{ mBody.front().getX() }, y{ mBody.front().getY() };
	direction = toupper(direction);

	switch (direction) {
	// RIGHT; 0x27 == VK_RIGHT, 0x44 == 'D'
	case 0x27:
	case 0x44: p.setX(mBody.front().getX() + mSpeed);
		break;
			
	// LEFT; 0x25 == VK_LEFT, 0x41 == 'A'
	case 0x25:
	case 0x41: p.setX(mBody.front().getX() - mSpeed);
		break;

	// UP; 0x26 == VK_UP, 0x57 == 'W'
	case 0x26:
	case 0x57: p.setY(mBody.front().getY() - mSpeed);
		break;

	// DOWN; 0x28 == VK_DOWN, 0x53 == 'S'
	case 0x28:
	case 0x53: p.setY(mBody.front().getY() + mSpeed);
		break;
	}

	// Collision avec un Fruit
	if (touchFruit(fruit)) {
		grow();
		fruit.generate(maxX, maxY);
	// Collision avec un Obstacle
	} else if (touchWall(obstacle)) {
		mAlive = false;
	// Collision avec lui-même
	} else if (touchSnake()) {
		mAlive = false;
	}

	mDirection = direction;
	mBody.push_front(p);		// Met la "nouvelle" queue de la liste comme tête
	mBody.pop_back();			// Retire l'ancienne queue du Snake de la liste
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

bool Snake::touchFruit(Fruit &fruit)
{
	// Compare la position (x, y) de l'objet Fruit à la tête du Snake (premier point)
	if (mBody.front().getX() == fruit.getPoint().getX() && 
			mBody.front().getY() == fruit.getPoint().getY()) {
		return true;
	}

	return false;
}

bool Snake::touchWall(Obstacle &obstacle)
{
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
	for (auto p = std::next(mBody.begin()); p != mBody.end(); ++p) {
		if (mBody.front().getX() == p->getX() && mBody.front().getY() == p->getY()) {
			return true;
		}
	}

	return false;
}