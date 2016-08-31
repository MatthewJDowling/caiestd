#include <iostream>
#include "caiestd.h"
#include <math.h>
#include <cmath>
#include <iostream>


Point2D pointAdd(const Point2D & lhs, const Point2D & rhs)
{
	int x;
	int y;
	int sum;

	scanf_s("%d%d", &x, &y);

	sum = x + y;

	printf("%d\n", sum);
	getchar();
    return Point2D();
}
//Pearson
Point2D pointSub(const Point2D & lhs, const Point2D & rhs)
{
    return Point2D();
}
//Chelsey
int divideAndConquer(int nums[], size_t numSize)
{
    return 0;
}
//Open
int displacementOverlap(int aMin, int aMax, int bMin, int bMax)
{
    return 0;
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
    return 0.0f;
}


// Trevor
int power(int base, int power)
{
	int ret;
	ret = pow(base, power);
    return ret;
}
//Kobey
float distance(Point2D first, Point2D second)
{
    return 0.0f;
}

//Keil
int sum(int nums[], size_t numSize)
{
    return 0;
}

//Keil
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

}
//Open
void cookHotdog(Hotdog & targetDog)
{
}
