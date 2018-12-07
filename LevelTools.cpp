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
		// LEVEL 1
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
		// LEVEL 2
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
		// LEVEL 3
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

		// BOITE INTÉRIEURE
		for (size_t i = (maxX / 4); i < ((maxX / 4) * 3); ++i) {
			if (i < xGapTop || i > xGapBottom) {
				Point p1{ i, (maxY / 4) + 1 };
				Point p2{ i, ((maxY / 4) * 3) - 1 };

				list.push_back(p1);		// Créé le mur de haut
				list.push_back(p2);		// Créé le mur de bas
			}
		}

		for (size_t i = ((maxY / 4) + 1); i < ((maxY / 4) * 3); ++i) {
			Point p1{ (maxX / 4), i };
			Point p2{ (maxX / 4) * 3, i };

			list.push_back(p1);		// Créé le mur de gauche
			list.push_back(p2);		// Créé le mur de droite
		}

		// MURS INTERNES
		for (size_t i = (maxX / 8); i < ((maxX / 8) * 7); ++i) {
			Point p1{ i, (maxY / 8) + 2 };
			Point p2{ i, ((maxY / 8) * 7) - 1 };

			list.push_back(p1);		// Créé le mur de haut
			list.push_back(p2);		// Créé le mur de droite
		}

		for (size_t i = (maxY / 8) + 2; i < ((maxY / 8) * 7); ++i) {
			if (i < yGapTop || i > yGapBottom) {
				Point p1{ (maxX / 8), i };
				Point p2{ (maxX / 8) * 7, i };

				list.push_back(p1);
				list.push_back(p2);
			}
		}

		break;
	}

	return list;
}