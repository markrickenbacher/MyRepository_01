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
	printf("Das ist mein Übungsprojekt mit welchem ich mich auf meinen neuen Job vorbereite\n\n");

	// Use my static Library
	stMyType.x = fMyFunction_01(10, 2);
	stMyType.y = fMyFunction_02(12.2, 2.1);
	stMyType.z = fMyFunction_03(12, 2);
	printf("%d\n", stMyType.x);
	printf("%f\n", stMyType.y);
	printf("%d\n", stMyType.z);

	// Use my shared Library
	stMyResultType.Value_01 = fMyFunction_03(5, 3);
	stMyResultType.Value_02 = fMyFunction_04(50.25, 4.3);
	stMyResultType.Value_03 = fMyFunction_05(50, 4);
	printf("%d\n", stMyResultType.Value_01);
	printf("%f\n", stMyResultType.Value_02);
	printf("%d\n", stMyResultType.Value_03);

	return EXIT_SUCCESS;
}

