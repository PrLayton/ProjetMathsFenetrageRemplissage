// ProjetMathsFenetrageRemplissage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include <GL\glew.h>
#include <GL\freeglut.h>

#include "common\EsgiShader.h"
#include <math.h>
#include "glm\glm.hpp"

#include "Point.h"
#include "Shape.h"
#include "Clipping.h"
#include "Filling.h"


int main()
{
	int j(0);

	auto t = intersection(glm::vec2(0, 0), glm::vec2(3, 0), glm::vec2(1, -1), glm::vec2(1, 1));

	//On est censé obtenir le point d'intersection suivant : (1, 0)


	std::cin >> j;

    return 0;
}

