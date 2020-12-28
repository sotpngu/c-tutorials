//
//  error-handling.c
//  c-tutorials
//
//  Created by gmh on 2020/9/3.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "error-handling.h"
#include <errno.h>

//The perror() function displays the string you pass to it, followed by a colon, a space, and then the textual representation of the current errno value.
//The strerror() function, which returns a pointer to the textual representation of the current errno value.
extern int errno;
void testErrorHandling() {
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rh");
    
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "Value of errno: %d\n", errno);
        perror("Error printed by perror");
        fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
    } else {
        fclose(pf);
    }
}

//Divide by Zero Errors
void testDivideByZeroErrors() {
    int dividend = 20;
    int divisor = 0;
    int quotient;
    
    if (divisor == 0) {
        fprintf(stderr, "Division by zero! Exiting...\n");
        exit(-1);
    }
    
    quotient = dividend / divisor;
    fprintf(stderr, "Value of quotient: %d\n", quotient);
    exit(0);
}

//Program Exit Status
//EXIT_SUCCESS is a macro and it is defined as 0.

//EXIT_FAILURE which is defined as -1
