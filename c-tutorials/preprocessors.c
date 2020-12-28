//
//  preprocessors.c
//  c-tutorials
//
//  Created by gmh on 2020/9/3.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "preprocessors.h"


void testPreprocessorDirective() {
    
#define FILE_SIZE 42
    printf("%d\n", FILE_SIZE);
#undef FILE_SIZE
    
#ifndef MESSAGE
#define MESSAGE "You wish!"
    printf("%s\n", MESSAGE);
#endif
    printf("%s\n", MESSAGE);
    
#ifdef DEBUG
    /* Your debugging statements here */
#endif
    
}

void testPredefinedMacros() {
    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__); // Defined as 1 when the compiler complies with the ANSI standard.
}

void testProcessorOperators() {
//    A macro is normally confined to a single line. The macro continuation operator (\) is used to continue a macro that is too long for a single line.
//    The stringize or number-sign operator ( '#' ), when used within a macro definition, converts a macro parameter into a string constant.
#define message_for(a, b) \
printf(#a " and " #b ": we widh you!\n");
    message_for(Zhangsan, Lisi);
    
    
//    The token-pasting operator (##) within a macro definition combines two arguments.
#define tokenpaster(n) printf("token" #n " = %d\n", token##n)
    int tokenFirst = 40;
    tokenpaster(First);
    
    
#define MAX(x, y) ((x) > (y) ? (x) : (y))
    printf("Max between 20 and 10 is: %d\n", MAX(20, 10));
}
