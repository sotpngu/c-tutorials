//
//  union.c
//  c-tutorials
//
//  Created by gmh on 2020/9/3.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "union.h"

void testUnion() {
    union Data {
        int i;
        float f;
        char str[20];
    };
    
//    The memory occupied by a union will be large enough to hold the largest member of the union.
    union Data data;
    printf("%d\n", sizeof(data));
    
    
//    Here, we can see that the values of i and f members of union got corrupted because the final value assigned to the variable has occupied the memory location and this is the reason that the value of str member is getting printed very well.
    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");

    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);
    
    
//    Here, all the members are getting printed very well because one member is being used at a time.
    data.i = 10;
    printf( "data.i : %d\n", data.i);
    
    data.f = 220.5;
    printf( "data.f : %f\n", data.f);
    
    strcpy( data.str, "C Programming");
    printf( "data.str : %s\n", data.str);

}
