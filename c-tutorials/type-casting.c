//
//  type-casting.c
//  c-tutorials
//
//  Created by gmh on 2020/9/3.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "type-casting.h"

void testTypeCasting() {
    int sum = 17, count = 5;
    double mean;
    
    mean = (double) sum / count;
    printf("Value of mean: %f\n", mean);
}

//Integer Promotion
//Integer promotion is the process by which values of integer type "smaller" than int or unsigned int are converted either to int or unsigned int.
void testIntegerPromotion() {
    int i = 17;
    char c = 'c';/* ascii value is 99 */
    int sum;
    
    sum = i + c;
    printf("Value of sum: %d\n", sum);
}
