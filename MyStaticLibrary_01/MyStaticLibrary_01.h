/*
 * MyStaticLibrary_01.h
 *
 *  Created on: 11.01.2021
 *      Author: Familie Rickenbacher
 */

#ifndef MYSTATICLIBRARY_01_H_
#define MYSTATICLIBRARY_01_H_

    // a constant definition exported by library:
    #define MAX_NUMBER  20

    // a type definition exported by library:
		struct tstMyStructType {
        int x;
        float y;
    };
    typedef struct tstMyStructType tstMyStructType;

    // a global variable exported by library
    extern int total_var;

    // a function prototype for a function exported by library:
    extern int fMyFunction_01(int y, int z);
    extern float fMyFunction_02(float y, float z);


#endif /* MYSTATICLIBRARY_01_H_ */
