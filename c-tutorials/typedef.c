//
//  typedef.c
//  c-tutorials
//
//  Created by gmh on 2020/9/3.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "typedef.h"

void testTypeDef() {
    typedef struct Books {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    } Book;
    
    Book book;
    
    strcpy( book.title, "C Programming");
    strcpy( book.author, "Nuha Ali");
    strcpy( book.subject, "C Programming Tutorial");
    book.book_id = 6495407;
    
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.book_id);
}

void testDefine() {
    #define TRUE 1
    #define FALSE 0
    
    printf("Value of TRUE : %d\n", TRUE);
    printf("Value of FALSE : %d\n", FALSE);
}

//区别：
//1.typeof 只能给类型起别名，而#define可以给任意值起别名
//2.typeof 在编译器中处理，#define在预处理器中处理



