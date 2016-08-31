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
	Point2D point;
	point.x = lhs.x - rhs.x;
	point.y = lhs.y - rhs.y;
	
	return point;
}
//Chelsey
int divideAndConquer(int nums[], size_t numSize)
{

	while (numSize > 1)
	{
		for (int i = 0; i < numSize; i += 2)
		{
			nums[i / 2] = ((nums[i] > nums[i + 1]) ? nums[i] : nums[i + 1]);
		}
		numSize /= 2;
	}

    return nums[0];
}
//Trevor 
int displacementOverlap(int aMin, int aMax, int bMin, int bMax)
{

    return (aMax - bMin);
}
//Ginger
float degToRad(float deg)
{
	
	float rad;
	rad = (deg * 3.1459 / 180);
	
    return rad;
}
//Ginger :D
float radToDeg(float rad)
{
	float deg;
	deg = rad * (180 / 3.1459);
	return deg;
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
	

	
	// TODO: how to square root?!!!
	float distancex = (second.x - first.x) * (second.x - first.x);
	float distancey = (second.y - first.y) * (second.y - first.y);

	double findDistance = sqrt(distancex + distancey);
	
    return findDistance;
}

//Keil
int sum(int nums[], size_t numSize)
{
	
	int total = 0;
	for (int i = 0; i < numSize; i++)
	{
		total = total + nums[i];
	}

    return total;
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
//Josh
void cookHotdog(Hotdog & targetDog)
{
	targetDog.isPrepared = true;
	

}
