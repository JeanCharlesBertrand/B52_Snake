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
	int mX;
	int mY;

public:
	// Constructeur
	Point();

	// Fonctions d'accès et de mutation
	// Retourne la position mX de l'objet
	int getX();

	// Retourne la position mY de l'objet
	int getY();

	// Met la valeur x dans la variable mX  
	void setX(int x);

	// Met la valeur y dans la variable mY
	void setY(int y);
};

#endif // POINT_H
