// 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int i,n,sum=0;
 printf("Enter Value of n: ");
 scanf("%d",&n);
 int *p;
 p=(int*)malloc(n*sizeof(int));
 
 printf("Enter %d Values: \n",n);
 for(i=0;i<n;i++)
 {
   scanf("%d",p+i);
   sum=sum+*(p+i);
 }
 printf("Sum is %d.",sum);

 free(p);
 return 0;
}