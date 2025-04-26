// File: vec2.h

#ifndef VEC2_H
#define VEC2_H

#include <iostream>
#include <cmath>

class ValueError
{};

template< typename T >
class vec2
{
public:
	vec2(T x = 0, T y = 0)
		: x_(x), y_(y)
	{
	}
private:
	T x_, y_;
};

typedef vec2< int > vec2i;
typedef vec2< float > vec2f;
typedef vec2< double > vec2d;

#endif
