#include "Shape.h"

Shape::~Shape()
{
}

void Shape::push(const glm::vec2 & p)
{
	points.push_back(p);
	pointCount++;
}

glm::vec2 Shape::operator[](int i) const
{
	return glm::vec2();
}
