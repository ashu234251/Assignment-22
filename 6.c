// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,*p,i,max;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));

    printf("Enter %d Elements: \n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",p+i);
    }

    max=*(p);
    for(i=1;i<n;i++)
    {
      if(*(p+i)>max)
        max=*(p+i);
    }
    printf("Largest Element is %d.",max);
    return 0;
}