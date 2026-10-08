#ifndef VECTOR2_HPP
# define VECTOR2_HPP

# include <iostream>
# include <string>

class Vector2
{
	public:
		// Constructors
		Vector2(const Vector2 &copy);
		Vector2(float X, float Y);
		
		// Destructor
		~Vector2();
		
		// Operators
		const Vector2 &operator=(const Vector2 &assign);
		
		// Getters / Setters
		float getX() const;
		float getY() const;
		
private:
		Vector2();
		float _X;
		float _Y;
		
};

#endif