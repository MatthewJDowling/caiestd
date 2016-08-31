#include "caiestd.h"
#include <iostream>
Point2D pointAdd(const Point2D & lhs, const Point2D & rhs)
{
    return Point2D();
}

Point2D pointSub(const Point2D & lhs, const Point2D & rhs)
{
    return Point2D();
}

int divideAndConquer(int nums[], size_t numSize)
{
    return 0;
}

int displacementOverlap(int aMin, int aMax, int bMin, int bMax)
{
    return 0;
}

float degToRad(float deg)
{
    return 0.0f;
}

float radToDeg(float rad)
{
    return 0.0f;
}

int pow(int base, int power)
{
    return 0;
}

float distance(Point2D first, Point2D second)
{
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	double distance;

	printf("Enter your first x and y coordinates, then enter your second x and 7 coordinates");
	scanf_s("%d %d %d", &x1, &y1, &x2, &y2);
	getchar();
	
	int distancex = (x2 - x1) ^ 2;
	int distancey = (y2 - y1) ^ 2;

	double findDistance = (distancex - distancey);
	
	
	
	printf("The distance between the two points is: %d", findDistance);

	





    return 0.0f;
}

int sum(int nums[], size_t numSize)
{
    return 0;
}

void fiboMyArray(int dest[], size_t destSize)
{
}

void concatIntArray(int srcA[], size_t srcSizeA, int srcB[], size_t srcSizeB, int dest[], size_t destSizeB)
{
}

Hotdog & applyHotdog(Hotdog & targetDog, int relishApps, int mustardApps, int creamCheeseaApps)
{
    return Hotdog();
}

void printHotdog(const Hotdog & targetDog)
{
}

void cookHotdog(Hotdog & targetDog)
{
}
