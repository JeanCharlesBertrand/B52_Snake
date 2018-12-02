#ifndef LEVELTOOLS_H
#define LEVELTOOLS_H

#include <list>
#include "Point.h"

// Génère une liste de points selon le niveau de Player
std::list<Point> generate(size_t maxX, size_t maxY, int level = 1);

#endif LEVELTOOLS_H