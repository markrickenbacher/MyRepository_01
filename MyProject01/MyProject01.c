/*
 * MyProject01.c
 *
 *  Created on: 11.01.2021
 *      Author: Familie Rickenbacher
 */
#include <stdio.h>
#include <stdlib.h>
#include "MyProject01.h"


int main(void)
{
	printf("MyProject01\n\n");

	// Use my static Library
	stMyType.x = fMyFunction_01(10, 2);
	stMyType.y = fMyFunction_02(12.2, 2.1);
	printf("%d\n", stMyType.x);
	printf("%f\n", stMyType.y);

	// Use my shared Library
	stMyResultType.Value_01 = fMyFunction_03(5, 3);
	stMyResultType.Value_02 = fMyFunction_04(50.25, 4.3);
	printf("%d\n", stMyResultType.Value_01);
	printf("%f\n", stMyResultType.Value_02);

	return EXIT_SUCCESS;
}
