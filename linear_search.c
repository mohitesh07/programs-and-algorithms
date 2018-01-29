/* A program to implement linear search */
#include <stdio.h>

int main()
{
    /*accepting the array of elements from the user*/
    int array[100],n;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("\na[%d]= ",i);
        scanf("%d",&array[i]);
    }//end of for loop

    /*implementing linear search for the given array*/
    int flag=0,item,count=0;
    printf("\nEnter the element you want to search: ");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(array[i]==item)
        {
            count++;
            flag=1;
        }
    }

    /*displaying the result*/
    if(flag==0)
        printf("%d is not present in the array\n",item);
    else
        printf("%d is present %d times in the array.\n",item,count);
}//end of main function
