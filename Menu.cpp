#include "Menu.h"
#include <iostream>
#include <conio.h>

Menu::Menu()
{
}


Menu::~Menu()
{
}

void Menu::onGame()
{
	
	ConsoleKeyReader & reader{ Console::getInstance().keyReader() };
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage layout{ writer.createImage("layout") };
	ConsoleImage output{ writer.createImage("output") };

	size_t width = layout.width();
	size_t height = layout.height();
	Snake snake{ width, height };
	Fruit fruit{ width, height };
	Obstacle obstacle{ width, height };

	bool b = snake.getIsAlive();

	while (true) {
		writer.push("layout", "output");
		snake.draw(writer.image("output"));
		fruit.draw(writer.image("output"));
		obstacle.draw(writer.image("output"));
		writer.push("output");
		
		char c = ' ';

		if (_kbhit()) {
			c = _getch();
		}

		snake.move(c, fruit, obstacle, width, height);
	}

	std::cout << "AHHH";
}