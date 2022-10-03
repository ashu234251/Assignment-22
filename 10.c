// 10. Find out the maximum and minimum from an array using dynamic memory allocation in C.

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,*p,i,max,min;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));

    printf("Enter %d Elements: \n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",p+i);
    }

    max=*p;
    min=*p;
    for(i=1;i<n;i++)
    {
      if(*(p+i)>max)
        max=*(p+i);
      if(*(p+i)<min)
        min=*(p+i);
    }
    printf("Largest Element is %d.\n",max);
    printf("Minimum Element is %d.",min);
    return 0;
}