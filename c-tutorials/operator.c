//
//  operator.c
//  c-tutorials
//
//  Created by gmh on 2020/9/2.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "operator.h"

//打印二进制
void printBin(int n) {
    int l = sizeof(n) * 8;
    long a = pow(2, l-1);
    for (int i = 0; i < l; i++) {
        printf("%d", (n&a)>0);
        a=a/2;
    }
}
