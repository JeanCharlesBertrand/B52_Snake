// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		Point.h
// Creation :		2018-11-28
// Author :			Danick Massicotte
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Classe contenant les données de coordonnées. 
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#ifndef POINT_H
#define POINT_H

class Point
{
private:
	// Variables
	size_t mX;
	size_t mY;

public:
	// Constructeur
	Point();
	Point(size_t x, size_t y);

	// Fonctions d'accès et de mutation
	// Retourne la position mX de l'objet
	size_t getX();

	// Retourne la position mY de l'objet
	size_t getY();

	// Met la valeur x dans la variable mX  
	void setX(size_t x);

	// Met la valeur y dans la variable mY
	void setY(size_t y);
};

#endif // POINT_H
