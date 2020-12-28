//
//  fileIO.c
//  c-tutorials
//
//  Created by gmh on 2020/9/3.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "fileIO.h"

//Opening Files
//FILE *fopen( const char * filename, const char * mode );

//Closing a File
//int fclose( FILE *fp );

//Writing a File
//int fputc( int c, FILE *fp );
//int fputs( const char *s, FILE *fp );
void writingFile() {
    FILE *fp;
    
    fp = fopen("/Users/minghaogao/CProjects/c-tutorials/c-tutorials/tmp/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
    
}


//Reading a File
//int fgetc( FILE * fp );
//char *fgets( char *buf, int n, FILE *fp );
void readingFile() {
    FILE *fp;
    char buff[255];
    
    fp = fopen("/Users/minghaogao/CProjects/c-tutorials/c-tutorials/tmp/test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);
    
    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff);
    
    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);
}


//Binary I/O Functions
//size_t fread(void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);
//size_t fwrite(const void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);


