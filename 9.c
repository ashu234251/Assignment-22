/*
9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,*p=NULL;
    printf("Enter Size in Bytes: ");
    scanf("%d",&size);
    p=(int*)malloc(size);

    if(p==NULL)
     {
        printf("Memory Allocation Failed.");
        return 0;
     }
    printf("Enter Value to be stored: ");
    scanf("%d",p);
    printf("Value is %d.",*p);

    free(p);
    return 0;
}