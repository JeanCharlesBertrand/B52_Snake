#include "Console"
#include <iostream>

using namespace std;

int main() 
{
	ConsoleContext context(120, 120, "B52_SNAKE", 8, 8, L"Consolas");
	//context = ConsoleContext::themeStandard();

	Console::defineContext(context);

	ConsoleKeyReader & reader { Console::getInstance().keyReader() };
	ConsoleWriter & writer{ Console::getInstance().writer() };

	reader.installFilter(new ConsoleKeyFilterUp);
	reader.installFilter(new ConsoleKeyFilterModifiers);

	writer.createImage("MonImage").fill(' ', ConsoleColor::bC + ConsoleColor::tY);
	writer.push("MonImage");

	

	ConsoleImage & tonImage{ writer.createImage("TonImage") };
	tonImage.fill(char(219), ConsoleColor::bC + ConsoleColor::tY);
	writer.push("TonImage");
	tonImage.drawText(5,5,"allo", ConsoleColor::bK + ConsoleColor::tB);
	writer.push("TonImage");

	ConsoleKeyReader::KeyEvents keyEvents;

	size_t slow{ 0 };
	while (true) {
		for (int i{ 0 }; i < slow; ++i) {
			for (int j{ 0 }; j < slow; ++j) {
				for (int k{ 0 }; k < slow; ++k) {
				}
			}
		}

		/*reader.read(keyEvents);
		for (auto event : keyEvents) {
			if (event.keyV() == 'Q') {
				cout << "Quit" << endl;
			}
		}*/


		//cout << keyEvents.size();



		/*if (keyEvents.size() > 0) {
		
			Console::getInstance().writer().randomize();
		}*/

		//Console::getInstance().writer().randomize(); // Accède le singleton
		
	}

	return 0;
}