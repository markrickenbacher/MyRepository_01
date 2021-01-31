/*
 * MySharedLibrary_01.h
 *
 *  Created on: 11.01.2021
 *      Author: Familie Rickenbacher
 */

#ifndef MYSHAREDLIBRARY_01_H_
#define MYSHAREDLIBRARY_01_H_

    // a type definition exported by library:
		struct tstMyResultType {
        int Value_01;
        float Value_02;
        int Value_03;
    };
    typedef struct tstMyResultType tstMyResultType;

    // a function prototype for a function exported by library:
    extern int fMyFunction_03(int y, int z);
    extern float fMyFunction_04(float y, float z);
    extern int fMyFunction_05(int y, int z);

#endif /* MYSHAREDLIBRARY_01_H_ */
