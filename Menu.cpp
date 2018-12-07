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
	welcome.drawText(30, 5, "            /^\\/^\\                                          ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 6, "          _|__|  O|                                           ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 7, " \\/     /~     \\_/ \\                                       ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 8, "  \\____|__________/  \\                                      ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 9, "         \\_______      \\                                    ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 10, "                 `\\     \\                 \\                ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 11, "                   |     |                  \\                ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 12, "                  /      /                    \\              ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 13, "                 /     /                       \\\\           ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 14, "               /      /                         \\ \\         ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 15, "              /     /                            \\  \\       ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 16, "            /     /             _----_            \\   \\     ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 17, "           /     /           _-~      ~-_         |   |       ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 18, "          (      (        _-~    _--_    ~-_     _/   |       ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 19, "           \\      ~-____-~    _-~    ~-_    ~-_-~    /       ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 20, "             ~-_           _-~          ~-_       _-~         ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 21, "                ~--______-~                ~-___-~            ", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 22, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 23, "                                                     SNAKE 1.0", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 25, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 26, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 27, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 28, "Appuyer sur la touche 'S' pour debuter une partie", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 29, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 30, "Appuyer sur la touche 'O' pour afficher les options", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 31, "", ConsoleColor::bK + ConsoleColor::tW);
	welcome.drawText(30, 32, "", ConsoleColor::bK + ConsoleColor::tW);

	writer.push("welcome");
};

void Menu::splashLevel1(Player &player)
{
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage & splash{ writer.createImage("splash") };
	splash.fill(char(219), ConsoleColor::bK + ConsoleColor::tK);
	writer.push("splash");
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
	splash.drawText(30, 20, "Nombre de vies : " + std::to_string(player.getLives()), ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 21, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 22, "Appuyer sur la touche 'G' pour commencer", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 23, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	writer.push("splash");
};

void Menu::splashLevel2(Player &player)
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
	splash.drawText(30, 20, "Nombre de vies : " + std::to_string(player.getLives()), ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 21, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 22, "Appuyer sur la touche 'G' pour commencer", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 23, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	writer.push("splash");
};

void Menu::splashLevel3(Player &player)
{
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage & splash{ writer.createImage("splash") };
	splash.fill(char(219), ConsoleColor::bK + ConsoleColor::tK);
	writer.push("splash");
	splash.drawText(30, 10, " 888      8888888888 888     888 8888888888 888            .d8888b.    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 11, " 888      888        888     888 888        888           d88P  Y88b   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 12, " 888      888        888     888 888        888                .d88P   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 13, " 888      8888888    Y88b   d88P 8888888    888               8888     ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 14, " 888      888         Y88b d88P  888        888                 Y8b    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 15, " 888      888          Y88o88P   888        888           888    888   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 16, " 888      888           Y888P    888        888           Y88b  d88P   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 17, " 88888888 8888888888     Y8P     8888888888 88888888       Y8888P      ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 18, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 19, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 20, "Nombre de vies : " + std::to_string(player.getLives()), ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 21, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 22, "Appuyer sur la touche 'G' pour commencer", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 23, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	writer.push("splash");
};

void Menu::splashGameOver()
{
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage & splash{ writer.createImage("splash") };
	splash.fill(char(219), ConsoleColor::bK + ConsoleColor::tK);
	writer.push("splash");
	splash.drawText(10, 10, "  .d8888b.         d8888 888b     d888 8888888888        d88888b   888     888 8888888888 8888888b.   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(10, 11, " d88P  Y88b       d88888 8888b   d8888 888             d88P   Y88b 888     888 888        888   Y88b  ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(10, 12, " 888    888      d88P888 88888b.d88888 888             888     888 888     888 888        888    888  ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(10, 13, " 888            d88P 888 888Y88888P888 8888888         888     888 Y88b   d88P 8888888    888   d88P  ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(10, 14, " 888  88888    d88P  888 888 Y888P 888 888             888     888  Y88b d88P  888        8888888P    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(10, 15, " 888    888   d88P   888 888  Y8P  888 888             888     888   Y88o88P   888        888 T88b    ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(10, 16, " Y88b  d88P  d8888888888 888       888 888             Y88b   d88P    Y888P    888        888  T88b   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(10, 17, "   Y8888P88 d88P     888 888       888 8888888888        Y88888P       Y8P     8888888888 888   T88b  ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 18, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 19, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 20, "Appuyer sur la touche 'Q' pour quitter", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 21, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 22, "Appuyer sur la touche 'W' pour retourner au menu principal", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 23, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(30, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	writer.push("splash");
};

void Menu::options()
{
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage & splash{ writer.createImage("splash") };
	splash.fill(char(219), ConsoleColor::bK + ConsoleColor::tK);
	writer.push("splash");
	splash.drawText(20, 10, "  .d88888b.  8888888b. 88888888888 8888888 .d88888b.  888b    888  .d8888b.  ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 11, " d88P   Y88b 888   Y88b    888       888  d88P   Y88b 8888b   888 d88P  Y88b ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 12, " 888     888 888    888    888       888  888     888 88888b  888 Y88b.      ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 13, " 888     888 888   d88P    888       888  888     888 888Y88b 888   Y888b.   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 14, " 888     888 8888888P      888       888  888     888 888 Y88b888      Y88b. ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 15, " 888     888 888           888       888  888     888 888  Y88888        888 ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 16, " Y88b. .d88P 888           888       888  Y88b. .d88P 888   Y8888 Y88b  d88P ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 17, "   Y88888P   888           888     8888888  Y88888P   888    Y888   Y8888P   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 18, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 19, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 20, "Appuyer sur la touche 'I' pour voir les instructions", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 21, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 22, "Appuyer sur la touche 'W' pour retourner au menu principal", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 23, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	writer.push("splash");
};

void Menu::start(int inputLevel, Player &player)
{
	switch (inputLevel) {
	// LEVEL 1
	case 1: splashLevel1(player);
		break;

	// LEVEL 2
	case 2: splashLevel2(player);
		break;

	//Level 3
	case 3: splashLevel3(player);
		break;
	}
};

void Menu::pause()
{
};

void Menu::instructions()
{
	ConsoleWriter & writer{ Console::getInstance().writer() };
	ConsoleImage & splash{ writer.createImage("splash") };
	splash.fill(char(219), ConsoleColor::bK + ConsoleColor::tK);
	writer.push("splash");
	splash.drawText(20, 10, " 888    888  .d88888b.  888       888      88888888888 .d88888b.  ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 11, " 888    888 d88P   Y88b 888   o   888          888    d88P   Y88b ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 12, " 888    888 888     888 888  d8b  888          888    888     888 ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 13, " 8888888888 888     888 888 d888b 888          888    888     888 ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 14, " 888    888 888     888 888d88888b888          888    888     888 ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 15, " 888    888 888     888 88888P Y88888          888    888     888 ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 16, " 888    888 Y88b. .d88P 8888P   Y8888          888    Y88b. .d88P ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 17, " 888    888   Y88888P   888P     Y888          888      Y88888P   ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 18, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 19, "BUT DU JEU :", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 20, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 21, "   Capturez les fruits sans toucher ni les murs, ni votre propre queue! ", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 22, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 23, "   Utilisez les portails afin d'atteindre les fruits plus rapidement", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 24, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 25, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 26, "Controles:", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 27, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 28, "   W - HAUT", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 29, "   S - BAS", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 30, "   A - GAUCHE", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 31, "   D - DROITE", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 32, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 33, "", ConsoleColor::bK + ConsoleColor::tW);
	splash.drawText(20, 34, "Appuyer sur la touche 'O' pour retourner au menu des options", ConsoleColor::bK + ConsoleColor::tW);
	
	writer.push("splash");
};

void Menu::quit()
{
};

void Menu::gameOver(Player &player)
{
	player.setLives(3);
	player.setLevel(1);
	player.setScore(0);
	splashGameOver();
};

void Menu::onGame(Player &player)
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
	Obstacle obstacle{ width, height, player.getLevel() };
	Snake snake{ width, height };
	Fruit fruit{ snake.getBody(), obstacle.getWalls(), width, height };
	char direction{ ' ' };
	int levelScore{ 0 };

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
			snake.move(direction, levelScore, fruit, obstacle, width, height);
		}

		if (frameCounter >= renderFrameCount) {
			// RENDER()
			writer.push("layout", "output");
			player.draw(writer.image("output"), levelScore);
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

	if (snake.getBody().size() < 212) {
		player.setLives(player.getLives() - 1);
		levelScore = 0;
	} else {
		player.setLevel(player.getLevel() + 1);
		player.setScore(player.getScore() + levelScore + 150);
	}
}