// 4. Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p;
    p=(char*)malloc(30*sizeof(char));
    printf("Enter Text: ");
    gets(p);
    printf("Entered Text is \"%s\"",p);
    return 0;
}