#include "Menu.h"
#include <iostream>
#include <conio.h>

Menu::Menu()
{
}


Menu::~Menu()
{
}

void Menu::welcome()
{
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage & welcome{ writer.createImage("welcome") };
	welcome.fill(char(219), ConsoleColor::bK + ConsoleColor::tB);
	writer.push("welcome");
	welcome.drawText(50, 5, "            /^\\/^\\                                          ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 6, "          _|__|  O|                                           ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 7, " \\/     /~     \\_/ \\                                       ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 8, "  \\____|__________/  \\                                      ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 9, "         \\_______      \\                                    ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 10, "                 `\\     \\                 \\                ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 11, "                   |     |                  \\                ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 12, "                  /      /                    \\              ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 13, "                 /     /                       \\\\           ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 14, "               /      /                         \\ \\         ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 15, "              /     /                            \\  \\       ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 16, "            /     /             _----_            \\   \\     ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 17, "           /     /           _-~      ~-_         |   |       ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 18, "          (      (        _-~    _--_    ~-_     _/   |       ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 19, "           \\      ~-____-~    _-~    ~-_    ~-_-~    /       ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 20, "             ~-_           _-~          ~-_       _-~         ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 20, "                ~--______-~                ~-___-~            ", ConsoleColor::bB + ConsoleColor::tK);
	welcome.drawText(50, 20, "", ConsoleColor::bB + ConsoleColor::tK);



	writer.push("welcome");


};

void Menu::options()
{
};

void Menu::start()
{
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage & start{ writer.createImage("start") };
	start.fill(char(219), ConsoleColor::bC + ConsoleColor::tY);
	writer.push("start");
	start.drawText(5, 5, "allo", ConsoleColor::bK + ConsoleColor::tB);
	writer.push("start");
};

void Menu::pause()
{
};

void Menu::instructions()
{
};

void Menu::quit()
{
};

void Menu::gameOver()
{
};

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
	char c = ' ';

	while (true) {

		
		
		c = ' ';

		//processInput
		if (_kbhit()) {
			c = _getch();
		}
		

		//render
		writer.push("layout", "output");
		fruit.draw(writer.image("output"));
		snake.draw(writer.image("output"));
		obstacle.draw(writer.image("output"));
		writer.push("output");

		//update
		snake.move(c, fruit, obstacle, width, height);
	}

	// Structure pour le gameloop avec controle de temps
	/*
	double previous = getCurrentTime();
	double lag = 0.0;
	while (true)
	{
		double current = getCurrentTime();
		double elapsed = current - previous;
		previous = current;
		lag += elapsed;

		processInput();

		while (lag >= MS_PER_UPDATE)
		{
			update();
			lag -= MS_PER_UPDATE;
		}

		render(lag / MS_PER_UPDATE);

	}
	*/

}