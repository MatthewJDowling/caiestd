#include <iostream>
#include "caiestd.h"
#include <math.h>
#include <cmath>
#include <iostream>

//keil
Point2D pointAdd(const Point2D & lhs, const Point2D & rhs)
{
	Point2D point;

	point.x = lhs.x + rhs.x;
	point.y = lhs.y + rhs.y;
    return point;
}
//Kobey
Point2D pointSub(const Point2D & lhs, const Point2D & rhs)
{
	Point2D Subtraction;
	Subtraction.x = lhs.x - rhs.x;
	Subtraction.y = lhs.y - rhs.y;
	
	return Subtraction;
}
//Chelsey
int divideAndConquer(int nums[], size_t numSize)
{
    return 0;
}
//Trevor 
int displacementOverlap(int aMin, int aMax, int bMin, int bMax)
{

    return (aMax - bMin);
}
//Ginger
float degToRad(float deg)
{
	
	int rad;
	rad = (deg * 3.1459 / 180);
	
    return rad;
}
//Xavier
float radToDeg(float rad)
{
	float degs = 0, rads = 0, pis = 0;
	pis = 3.14;
	degs = 120;
	rads = (degs * pis) / 180;
	return rads;
}


// Trevor
int power(int base, int power)
{
	int ret;
	ret = pow(base, power);
    return ret;
}
//Pearson
float distance(Point2D first, Point2D second)
{
    return 0.0f;
}

//Keil
int sum(int nums[], size_t numSize)
{
    return 0;
}

//Martin
void fiboMyArray(int dest[], size_t destSize)
{
	dest[destSize];
	for (int i =0; i < destSize; ++i)
	{
		if (i == 0)
		{
			dest[i] = 0;
		}
		else if (i == 1)
		{
			dest[i] = 1;
		}
		else
		{
			dest[i] = dest[i - 1] + dest[i - 2];
		}
	}
	
}

//Open
void concatIntArray(int srcA[], size_t srcSizeA, int srcB[], size_t srcSizeB, int dest[], size_t destSizeB)
{
}
//Open
Hotdog & applyHotdog(Hotdog & targetDog, int relishApps, int mustardApps, int creamCheeseaApps)
{
    return Hotdog();
}
//Ginger

void printHotdog(const Hotdog & targetDog)
{
	printf(" %d",targetDog);
}
//Open
void cookHotdog(Hotdog & targetDog)
{
}
