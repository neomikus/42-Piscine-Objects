#include "Graph.hpp"

// Constructors
Graph::Graph()
{}

Graph::Graph(const Graph &copy): _size(copy.getSize())
{
	_points = copy.getPoints();
	std::cout << "\e[0;33mCopy Constructor called of Graph\e[0m" << std::endl;
}

Graph::Graph(std::vector<Vector2 *> points, const Vector2 & size):  _size(size)
{
	_points = points;
	std::cout << "\e[0;33mFields Constructor called of Graph\e[0m" << std::endl;
}


// Destructor
Graph::~Graph()
{
	std::cout << "\e[0;31mDestructor called of Graph\e[0m" << std::endl;
}


// Operators
Graph & Graph::operator=(const Graph &assign)
{
	_points = assign.getPoints();
	_size = assign.getSize();
	return *this;
}


// Getters / Setters
std::vector<Vector2 *> Graph::getPoints() const
{
	return _points;
}
const Vector2 *Graph::getSize() const
{
	return _size;
}
