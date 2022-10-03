//  5. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation.\

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i,sum=0;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));

    printf("Enter %d Elements: \n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",p+i);
      sum=sum+*(p+i);
    }
    printf("------------\n");
    printf("Elemnts are: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
    printf("\nSum of all Elements is %d.",sum);

    return 0;
}