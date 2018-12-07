#include "GameEngine.h"
#include "ElapsedTimer.h"
#include "Console.h"
#include <iostream>
#include <conio.h>


void engine(Player &player)
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
	Obstacle obstacle{ width, height, player.getLevel() % 3 };
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
			char temp = _getch();
			processInput(temp, direction);
		}

		if (totalTime > 1.1) {
			totalTime = 0;
			// UPDATE()
			snake.move(direction, levelScore, fruit, obstacle.getWalls(), width, height);
		}

		if (frameCounter >= renderFrameCount) {
			// RENDER()
			render(player, fruit, snake, obstacle, writer, levelScore);
			frameCounter = 0;
		} else {
			frameCounter++;
		}

	} while (snake.getIsAlive() && snake.getBody().size() < 212);

	endLevel(player, snake, levelScore);
}

void processInput(char temp, char &direction)
{
	// Patch pour mon laptop qui donne '\0' après un _getch()... --DM
	if (temp != '\0') {
		direction = temp;
		direction = toupper(direction);
	}
}

void render(Player &player, Fruit &fruit, Snake &snake, Obstacle &obstacle, ConsoleWriter &writer, int levelScore)
{
	writer.push("layout", "output");
	player.draw(writer.image("output"), levelScore);
	fruit.draw(writer.image("output"));
	snake.draw(writer.image("output"));
	obstacle.draw(writer.image("output"));
	writer.push("output");
}

void endLevel(Player &player, Snake &snake, int &levelScore)
{
	if (snake.getBody().size() < 212) {
		player.setLives(player.getLives() - 1);
		levelScore = 0;
	} else {
		player.setLevel(player.getLevel() + 1);
		player.setScore(player.getScore() + levelScore + 150);
	}
}