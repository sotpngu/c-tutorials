//
//  bitFields.c
//  c-tutorials
//
//  Created by gmh on 2020/9/3.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "bitFields.h"

void textBitFields() {
    
    unsigned int level;
    
    struct {
        unsigned int widthValidated;
        unsigned int widthValidated1;
    } struct1;
    
    struct {
        unsigned int widthValidated : 1; // 这里的单位是bit
        unsigned int widthValidated1 : 1;
    } struct2;
    
    printf("%d\n", sizeof(level)); // 这里的单位是byte
    printf("%d\n", sizeof(struct1)); // 这里的单位是byte
    printf("%d\n", sizeof(struct2)); // 这里的单位是byte
    
    
}
