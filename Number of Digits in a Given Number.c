//Done by Sharvesh on 14.09.2025
#include <stdio.h>

void main()
{
    int i,n,count=0;
    printf("Enter the Number:");
    scanf("%d",&i);
    
    for(n=i;n!=0;n=n/10)
    {
        count=count+1;
    }
    printf("The Number of digits in the given Number is:%d",count);
}
