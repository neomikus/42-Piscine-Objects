#include "Vector2.hpp"

// Constructors
Vector2::Vector2()
{
	std::cout << "\e[0;33mDefault Constructor called of Vector2\e[0m" << std::endl;
}

Vector2::Vector2(const Vector2 &copy)
{
	_X = copy.getX();
	_Y = copy.getY();
	std::cout << "\e[0;33mCopy Constructor called of Vector2\e[0m" << std::endl;
}

Vector2::Vector2(float X, float Y)
{
	_X = X;
	_Y = Y;
	std::cout << "\e[0;33mFields Constructor called of Vector2\e[0m" << std::endl;
}


// Destructor
Vector2::~Vector2()
{
	std::cout << "\e[0;31mDestructor called of Vector2\e[0m" << std::endl;
}


// Operators
const Vector2 &Vector2::operator=(const Vector2 &assign)
{
	_X = assign.getX();
	_Y = assign.getY();
	return *this;
}


// Getters / Setters
float Vector2::getX() const
{
	return _X;
}
float Vector2::getY() const
{
	return _Y;
}
