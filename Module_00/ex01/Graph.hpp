#ifndef GRAPH_HPP
# define GRAPH_HPP

# include <iostream>
# include <string>
# include <vector>
# include "Vector2.hpp"

class Graph
{
	public:
		// Constructors
		Graph();
		Graph(const Graph &copy);
		Graph(std::vector<Vector2 *> points, const Vector2 &size);
		
		// Destructor
		~Graph();
		
		// Operators
		Graph &operator=(const Graph &assign);
		
		// Getters / Setters
		std::vector<Vector2 *> getPoints() const;
		const Vector2 *getSize() const;
		
	private:
		std::vector<Vector2 *> _points;
		const Vector2 *_size;
		
};

#endif