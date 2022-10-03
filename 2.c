/*
2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter Number of Values: ");
    scanf("%d",&n);
    int *p=NULL;
    p=(int*)calloc(n,sizeof(int));

    if(p==NULL)
     {
        printf("Memory Allocation Failed.");       // Impression banane k lie zabardast h.
        return 0;
     }

    printf("Enter %d Values: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    printf("Average Value is: %f",sum/n);

    return 0;
}