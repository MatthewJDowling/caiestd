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





// For every 2 values, print the larger of the two.
// Repeat this process until only one integer remains.
//
// Returns the last remaining integer.
int divideAndConquer(int nums[], size_t numSize)
{
	int pairCount = numSize / 2;
	int index;
	for ( int pair = 0; pair < pairCount; ++pair )
	{
		index = pair * 2;
		if (nums[index] > nums[index + 1])
			printf("%d", nums[index]);
		else
			printf("%d", nums[index + 1]);
	}

    return (index + 1);
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
