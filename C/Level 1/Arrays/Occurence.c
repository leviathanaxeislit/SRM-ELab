#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX],n,i;
    int num,count;
     
    scanf("%d",&n);
     
    //read array elements
    for(i=0;i< n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
     
    //count occurance of num
    count=0;
    for(i=0;i< n;i++)
    {
        if(arr[i]==num)
            count++;
    }
    printf("%d",count);
    return 0;
}