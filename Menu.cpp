#include "Menu.h"
#include <iostream>
#include <conio.h>
#include "ElapsedTimer.h"

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
	welcome.fill(char(219), ConsoleColor::bK + ConsoleColor::tK);
	writer.push("welcome");
	welcome.drawText(40, 5, "            /^\\/^\\                                          ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 6, "          _|__|  O|                                           ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 7, " \\/     /~     \\_/ \\                                       ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 8, "  \\____|__________/  \\                                      ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 9, "         \\_______      \\                                    ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 10, "                 `\\     \\                 \\                ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 11, "                   |     |                  \\                ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 12, "                  /      /                    \\              ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 13, "                 /     /                       \\\\           ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 14, "               /      /                         \\ \\         ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 15, "              /     /                            \\  \\       ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 16, "            /     /             _----_            \\   \\     ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 17, "           /     /           _-~      ~-_         |   |       ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 18, "          (      (        _-~    _--_    ~-_     _/   |       ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 19, "           \\      ~-____-~    _-~    ~-_    ~-_-~    /       ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 20, "             ~-_           _-~          ~-_       _-~         ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 21, "                ~--______-~                ~-___-~            ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 22, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 23, "                                                     SNAKE 1.0", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 25, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 26, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 27, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 28, "Appuyer sur la touche 'S' pour debuter une partie", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 29, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 30, "Appuyer sur la touche 'O' pour afficher les options", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 31, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(40, 32, "", ConsoleColor::bK + ConsoleColor::tW);

	writer.push("welcome");


};

void splashLevel1()
{
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage & splash{ writer.createImage("splash") };
	splash.fill(char(219), ConsoleColor::bK + ConsoleColor::tK);
	writer.push("start");
	splash.drawText(30, 10, " 888      8888888888 888     888 8888888888 888            d888    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 11, " 888      888        888     888 888        888           d8888    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 12, " 888      888        888     888 888        888             888    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 13, " 888      8888888    Y88b   d88P 8888888    888             888    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 14, " 888      888         Y88b d88P  888        888             888    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 15, " 888      888          Y88o88P   888        888             888    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 16, " 888      888           Y888P    888        888             888    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 17, " 88888888 8888888888     Y8P     8888888888 88888888      8888888  ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 18, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 19, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 20, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 21, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 22, "Appuyer sur la touche 'O' pour commencer", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 23, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	writer.push("splash");
};

void splashLevel2()
{
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage & splash{ writer.createImage("splash") };
	splash.fill(char(219), ConsoleColor::bK + ConsoleColor::tK);
	writer.push("splash");
	splash.drawText(30, 10, " 888      8888888888 888     888 8888888888 888            .d8888b.     ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 11, " 888      888        888     888 888        888           d88P  Y88b    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 12, " 888      888        888     888 888        888                  888    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 13, " 888      8888888    Y88b   d88P 8888888    888                .d88P    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 14, " 888      888         Y88b d88P  888        888            .od888P      ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 15, " 888      888          Y88o88P   888        888           d88P          ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 16, " 888      888           Y888P    888        888           888           ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 17, " 88888888 8888888888     Y8P     8888888888 88888888      888888888     ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 18, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 19, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 20, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 21, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 22, "Appuyer sur la touche 'O' pour commencer", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 23, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	writer.push("splash");
};

void splashLevel3()
{
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage & splash{ writer.createImage("splash") };
	splash.fill(char(219), ConsoleColor::bK + ConsoleColor::tK);
	writer.push("splash");
	splash.drawText(30, 5, " 888      8888888888 888     888 8888888888 888            .d8888b.    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 5, " 888      888        888     888 888        888           d88P  Y88b   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 5, " 888      888        888     888 888        888                .d88P   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 5, " 888      8888888    Y88b   d88P 8888888    888               8888     ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 5, " 888      888         Y88b d88P  888        888                 Y8b    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 5, " 888      888          Y88o88P   888        888           888    888   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 5, " 888      888           Y888P    888        888           Y88b  d88P   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 5, " 88888888 8888888888     Y8P     8888888888 88888888       Y8888P      ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 18, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 19, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 20, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 21, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 22, "Appuyer sur la touche 'O' pour commencer", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 23, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	writer.push("splash");
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

	ElapsedTimer<> timer;
	double currentTime{};
	double previousTime{};
	double dt{};
	double totalTime{};
	int frameCounter{};
	int renderFrameCount{};

	size_t width = layout.width();
	size_t height = layout.height();
	Obstacle obstacle{ width, height, 1 };
	Snake snake{ width, height };
	Fruit fruit{ snake.getBody(), obstacle.getWalls(), width, height };
	char direction{ ' ' };

	timer.start();

	do {

		currentTime = timer.elapsedSeconds();
		dt = currentTime - previousTime / 1000;
		previousTime = currentTime;

		if (dt > 0.016) dt = 0.016;
		if (dt < 0.001) dt = 0.001;

		totalTime += dt;

		// PROCESSINPUT()
		if (_kbhit()) {
			direction = _getch();
			direction = toupper(direction);
		}

		if (totalTime > 1.1) {
			totalTime = 0;
			// UPDATE()
			snake.move(direction, fruit, obstacle, width, height);
		}

		if (frameCounter >= renderFrameCount) {
			// RENDER()
			writer.push("layout", "output");
			fruit.draw(writer.image("output"));
			snake.draw(writer.image("output"));
			obstacle.draw(writer.image("output"));
			writer.push("output");
			frameCounter = 0;
		}
		else {
			frameCounter++;
		}

	} while (snake.getIsAlive() && snake.getBody().size() < 212);
}