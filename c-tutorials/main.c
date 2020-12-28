#include <stdio.h>

//1.1 Getting Started
//int main()
//{
//    printf("hello, world\n");
//}

//1.2 Variables and Arithmetic Expressions
//int main()
//{
//    int fahr, celsius;
//    int lower, upper, step;
//    lower = 0; /* lower limit of temperature scale */
//    upper = 300; /* upper limit */
//    step = 20; /* step size */
//    fahr = lower;
//    while (fahr <= upper) {
//        celsius = 5 * (fahr-32) / 9;
//        printf("%d\t%d\n", fahr, celsius);
//        fahr = fahr + step;
//    }
//}

//1.3 The for statement
//int main()
//{
//    int fahr;
//    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
//    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
//}

//1.4 Symbolic Constants
//#define LOWER 0 /* lower limit of table */
//#define UPPER 300 /* upper limit */
//#define STEP 20 /* step size */
//
//int main()
//{
//    int fahr;
//    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
//    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
//}


//1.5.1 File Copying
//int main()
//{
//    int c;
//    c = getchar();
//    while (c != EOF) {
//        putchar(c);
//        c = getchar();
//    }
//}

//1.5.2 Character Counting
//int main()
//{
//    long nc;
//    nc = 0;
//    while (getchar() != EOF)
//        ++nc;
//    printf("%ld\n", nc);
//}

//1.5.3 Line Counting
//int main()
//{
//    char c;
//    int nl;
//    nl = 0;
//    while ((c = getchar()) != EOF)
//        if (c == '\n')
//            ++nl;
//    printf("%d\n", nl);
//}

//1.5.4 Word Counting
//#define IN 1 /* inside a word */
//#define OUT 0 /* outside a word */
///* count lines, words, and characters in input */
//int main()
//{
//    int c, nl, nw, nc, state;
//    state = OUT;
//    nl = nw = nc = 0;
//    while ((c = getchar()) != EOF) {
//        ++nc;
//        if (c == '\n')
//            ++nl;
//        if (c == ' ' || c == '\n' || c == '\t')
//            state = OUT;
//        else if (state == OUT) {
//            state = IN;
//            ++nw;
//        }
//    }
//    printf("%d %d %d\n", nl, nw, nc);
//}

//1.6 Arrays
///* count digits, white space, others */
//int main()
//{
//    int c, i, nwhite, nother;
//    int ndigit[10];
//    nwhite = nother = 0;
//    for (i = 0; i < 10; ++i)
//        ndigit[i] = 0;
//    while ((c = getchar()) != EOF)
//        if (c >= '0' && c <= '9') {
//            ++ndigit[c-'0'];
//            printf("%c \n", c);
//            printf("%c \n", c-0); //字符减去0，还是字符
//        }
//        else if (c == ' ' || c == '\n' || c == '\t')
//            ++nwhite;
//        else
//            ++nother;
//    printf("digits =");
//    for (i = 0; i < 10; ++i)
//        printf(" %d", ndigit[i]);
//    printf(", white space = %d, other = %d\n",
//           nwhite, nother);
//}

//1.7 Functions
//int power(int m, int n);
///* test power function */
//int main()
//{
//    int i;
//    for (i = 0; i < 10; ++i)
//        printf("%d %d %d\n", i, power(2,i), power(-3,i));
//    return 0;
//}
///* power: raise base to n-th power; n >= 0 */
//int power(int base, int n)
//{
//    int i, p;
//    p = 1;
//    for (i = 1; i <= n; ++i)
//        p = p * base;
//    return p;
//}

//1.9 Character Arrays
//#define MAXLINE 1000 /* maximum input line length */
//int getline1(char line[], int maxline);
//void copy(char to[], char from[]);
///* print the longest input line */
//int main()
//{
//    int len; /* current line length */
//    int max; /* maximum length seen so far */
//    char line[MAXLINE]; /* current input line */
//    char longest[MAXLINE]; /* longest line saved here */
//    max = 0;
//    while ((len = getline1(line, MAXLINE)) > 0)
//        if (len > max) {
//            max = len;
//            copy(longest, line);
//        }
//    if (max > 0) /* there was a line */
//        printf("%s", longest);
//    return 0;
//}
///* getline: read a line into s, return length */
//int getline1(char s[],int lim)
//{
//    int c, i;
//    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
//        s[i] = c;
//    if (c == '\n') {
//        s[i] = c;
//        ++i;
//    }
//    s[i] = '\0';
//    return i;
//}
///* copy: copy 'from' into 'to'; assume to is big enough */
//void copy(char to[], char from[])
//{
//    int i;
//    i = 0;
//    while ((to[i] = from[i]) != '\0')
//        ++i;
//}

//1.10 External Variables and Scope
#define MAXLINE 1000 /* maximum input line size */
int max; /* maximum length seen so far */
char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */
int getline1(void);
void copy(void);
/* print longest input line; specialized version */
int main()
{
    int len;
    extern int max;
    extern char longest[];
    max = 0;
    while ((len = getline1()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}
/* getline: specialized version */
int getline1(void)
{
    int c, i;
    extern char line[];
    for (i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
        
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
/* copy: specialized version */
void copy(void)
{
    int i;
    extern char line[], longest[];
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
