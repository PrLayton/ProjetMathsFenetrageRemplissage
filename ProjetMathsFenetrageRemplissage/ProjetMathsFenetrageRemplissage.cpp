// ProjetMathsFenetrageRemplissage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cstdio>
#include <cstdint>

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

	intersection(glm::vec2(0, 0), glm::vec2(3, 0), glm::vec2(1, -1), glm::vec2(1, 1));

	cin >> j;

    return 0;
}

