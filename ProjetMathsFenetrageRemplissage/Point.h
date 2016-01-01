#pragma once
class Point
{

private:
	
public:
	Point() { x = 0; y = 0; };
	Point(int _x, int _y) : x(_x), y(_y) {};
	Point(const Point& p) {
		x = p.x;
		y = p.y;
	}

	~Point() {

	}
	int x;
	int y;
	int getX() const;

	int getY() const;

	void setX(int value);

	void setY(int value);

	Point operator += (const Point& p);

	Point operator + (Point& p) const;

	Point operator - () const {
		return Point(-x, -y);
	}

	Point operator -= (const Point& p);

	Point operator - (Point& p) const;

	float dot(Point& p);

	Point cross(Point& p) const;

};


