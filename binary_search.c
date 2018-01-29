/* Program to implement Binary Search */
#include <stdio.h>

int main()
{
    /* accepting an array from the user */
    int array[100],first,last,middle,n;
    printf("\nEnter the number of elements of the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&array[i]);
    }

    /*implementing binary search*/
    int item;
    printf("\nEnter the element to be searched: ");
    scanf("%d",&item);
    first=0;last=n-1;int flag=0;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(array[middle]<item)
            first=middle+1;
        else if(array[middle]==item)
        {
            flag=1;
            break;
        }
        else
            last=middle-1;
    }//end of while loop
    if(flag==1)
        printf("%d is present in the position %d",item,middle);
    else 
        printf("%d is not present in the array.",item);     
}//end of main function
