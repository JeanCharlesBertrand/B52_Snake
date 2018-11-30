#include "Snake.h"

Snake::Snake(size_t maxX, size_t maxY, char direction, ConsoleColor color)
	:	mColor{ color },
		mDirection{ direction },
		mSpeed{ 5 },
		mAlive{ true }
{
	generate(maxX, maxY);
}

void Snake::generate(size_t maxX, size_t maxY)
{
	Point head{ maxX, maxY };
	mBody.push_front(head);
}

void Snake::move(char direction)
{
	Point p{ mBody.pop_back };
	direction = toupper(direction);

	switch (direction) {
	// RIGHT; 0x27 == VK_RIGHT, 0x44 == 'D'
	case 0x27:
	case 0x44: size_t x{ p.getX() + mSpeed };
			   p.setX(x);
		break;

	// LEFT; 0x25 == VK_LEFT, 0x41 == 'A'
	case 0x25:
	case 0x41: size_t x{ p.getX() - mSpeed };
			   p.setX(x);
		break;

	// UP; 0x26 == VK_UP, 0x57 == 'W'
	case 0x26:
	case 0x57: size_t y{ p.getY() - mSpeed };
			   p.setY(y);
		break;

	// DOWN; 0x28 == VK_DOWN, 0x53 == 'S'
	case 0x28:
	case 0x53: size_t y{ p.getY() + mSpeed };
			   p.setY(y);
		break;
	}

	mBody.push_front(p);
}

void Snake::grow()
{

}

void Snake::draw(ConsoleImage &image)
{
	for (auto p : mBody) {
		image.drawPoint(p.getX(), p.getY(), char(219), mColor);
	}
}