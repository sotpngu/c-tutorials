//
//  input-and-output.c
//  c-tutorials
//
//  Created by gmh on 2020/9/3.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "input-and-output.h"

void testInputAndOutput() {
    int c;
    printf("Enter a value: ");
    c = getchar();
    
    printf("\nYou entered: ");
    putchar(c);
    printf("\n");
}

void testInputAndOutput1() {
    char str[100];
    
    printf("Enter a value: ");
    gets(str);
    
    printf("\nYou entered: ");
    puts(str);
    printf("\n");
}

void testInputAndOutput2() {
    char str[100];
    int i;
    
    printf("Enter a value: \n");
    scanf("%s %d", str, &i);
    
    printf("\nYou entered: %s %d", str, i);
    printf("\n");
}
