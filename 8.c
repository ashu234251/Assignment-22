// 8. Write a program to demonstrate dangling pointers in C.

/*
Dangling Pointer-- When the memory of the variable to which the pointer is pointing is released from the memory.
e.g; 
int* f1()
{
    int a;
    ----
    return &a;
}
main()
{
    int *p;
    p=f1();
}
*/

#include<stdio.h>
int* sum();
int main()
{
    int *p;
    p=sum();
    printf("\nDANGLING Sum is %d.",*p);
    return 0;
}

int* sum()
{
    int a,b,s,*address;
    printf("Enter two Numbers: \n");
    scanf("%d %d",&a,&b);
    s=a+b;
    printf("Sum is %d.",s);
    address=&s;
    return address;
}