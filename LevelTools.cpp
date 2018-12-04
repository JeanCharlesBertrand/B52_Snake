#include "LevelTools.h"


std::list<Point> generate(size_t maxX, size_t maxY, int level)
{
	size_t xGapTop{ (maxX / 2) - 3 };			// Espace à gauche du centre des murs haut et bas
	size_t xGapBottom{ (maxX / 2) + 3 };		// Espace à droite du centre des murs haut et bas
	size_t yGapTop{ (maxY / 2) - 3 };			// Espace en haut du centre des murs gauche et droite
	size_t yGapBottom{ (maxY / 2) + 3 };		// Espace en bas du centre des murs gauche et droite
	std::list<Point> list;

	switch (level) {
	case 1:	
		// Niveau 1
		for (size_t i = 0; i < maxX; ++i) {
			if (i < xGapTop || i > xGapBottom) {
				Point p1{ i, 3 };
				Point p2{ i, maxY - 1 };

				list.push_back(p1);		// Créé le mur du haut
				list.push_back(p2);		// Créé le mur du bas
			}
		}

		for (size_t i = 3; i < maxY; ++i) {
			if (i < yGapTop || i > yGapBottom) {
				Point p1{ 0, i };
				Point p2{ maxX - 1, i };

				list.push_back(p1);		// Créé le mur de gauche
				list.push_back(p2);		// Créé le mur de droite
			}
		}
		break;

	case 2:
		// Niveau 2
		for (size_t i = 0; i < maxX; ++i) {
			if (i < xGapTop || i > xGapBottom) {
				Point p1{ i, 3 };
				Point p2{ i, maxY - 1 };

				list.push_back(p1);		// Créé le mur du haut
				list.push_back(p2);		// Créé le mur du bas
			}
		}

		for (size_t i = 3; i < maxY; ++i) {
			if (i < yGapTop || i > yGapBottom) {
				Point p1{ 0, i };
				Point p2{ maxX - 1, i };

				list.push_back(p1);		// Créé le mur de gauche
				list.push_back(p2);		// Créé le mur de droite
			}
		}

		for (size_t i = 0; i < (xGapBottom + 1); ++i) {
			list.push_back({ i, yGapBottom + 1 });
		}

		for (size_t i = 3; i < maxY; ++i) {
			list.push_back({ (xGapBottom + 1), i });
		}

		break;
	case 0:
		break;
	}

	return list;
}