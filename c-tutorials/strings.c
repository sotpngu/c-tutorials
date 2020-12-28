//
//  strings.c
//  c-tutorials
//
//  Created by gmh on 2020/9/2.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "strings.h"

void testStrings() {
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf(greeting);
}


void testStrings2() {
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len;
    
    strcpy(str3, str2);
    printf("%s\n", str3);
    
    strcat(str1, str2);
    printf("%s\n", str1);
    
    len = strlen(str1);
    printf("%d\n", len);
}
