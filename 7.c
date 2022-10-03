// 7. Write a program to demonstrate memory leak in C.

#include<stdio.h>
#include<stdlib.h>

void sum();

int main()
{
    printf("Enter two Numbers: ");
    sum();
}

void sum()
{
    int *p1,*p2;
    p1=(int*)malloc(sizeof(int));
    p2=(int*)malloc(sizeof(int));
    scanf("%d",p1);
    scanf("%d",p2);
    printf("Sum is %d.",*p1+*p2);
}
/* After end of this function p1 and p2 pointer variables will be erased from the memory, BUT those two malloc variables will not be erased,
   and they will not be pointed by any pointer variable.
   So, there are two solutions for this.
   1. Pass the address of the pointer variables to the calling variables.
   2. Erase the memory of malloc/calloc variables using function free(address) .
*/
