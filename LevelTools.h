// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		LevelTools.h
// Creation :		2018-11-28
// Author :			Danick Massicotte
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Outils pour la création de niveau
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#ifndef LEVELTOOLS_H
#define LEVELTOOLS_H

#include <list>
#include "Point.h"

// Génère une liste de points selon le niveau de Player
std::list<Point> generate(size_t maxX, size_t maxY, int level = 1);

#endif LEVELTOOLS_H