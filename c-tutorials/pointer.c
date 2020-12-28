//
//  pointer.c
//  c-tutorials
//
//  Created by gmh on 2020/9/2.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "pointer.h"

// 指针初探
void testPointer() {
    int var = 20;
    int *ip;
    ip = &var;
    printf("%x\n", &var);
    printf("%x\n", ip); // 地址
    printf("%d\n", *ip); // 取值
    int *pr = NULL;
    printf("%x\n", pr);
}

// 指针增长
void incrementPointer() {
    int var[] = {10, 100, 200};
    int i, *ptr;
    const int MAX = 3;
    
    ptr = var;
    
    for (i = 0; i < MAX; i++) {
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);
        ptr++;
    }
}

// 指针减小
void decrementPointer() {
    int  var[] = {10, 100, 200};
    int  i, *ptr;
    const int MAX = 3;
    
    /* let us have array address in pointer */
    ptr = &var[MAX-1];
    
    for ( i = MAX; i > 0; i--) {
        
        printf("Address of var[%d] = %x\n", i-1, ptr );
        printf("Value of var[%d] = %d\n", i-1, *ptr );
        
        /* move to the previous location */
        ptr--;
    }
}

// 指针对比
void comparePointer() {
    int  var[] = {10, 100, 200};
    int  i, *ptr;
    const int MAX = 3;

    /* let us have address of the first element in pointer */
    ptr = var;
    i = 0;
    
    while (ptr <= &var[MAX - 1]) {
        printf("Address of var[%d] = %x\n", i, ptr );
        printf("Value of var[%d] = %d\n", i, *ptr );

        /* point to the next location */
        ptr++;
        i++;
    }
}


//指向指针的指针
void pointerToPointer() {
    int  var;
    int  *ptr;
    int  **pptr;

    var = 3000;

    /* take the address of var */
    ptr = &var;

    /* take the address of ptr using address of operator & */
    pptr = &ptr;

    /* take the value using pptr */
    printf("Value of var = %d\n", var );
    printf("Value available at *ptr = %d\n", *ptr );
    printf("Value available at **pptr = %d\n", **pptr);
}
