//              
// Author       Terry Nguyen <terryn@aie.edu>
// Copyright    (c) 2016 Academy of Interactive Entertainment
//

#include "caiestd.h"
#include "caietest.h"

#include <iostream>

int main()
{
	int a, b;
	printf("Enter base and power");
	scanf_s(" %d %d", a, b);
	printf("Answer is: %d" , power(a, b));
    system("pause");
}