#include<stdio.h>
int main()
{
    int i,j,k,count;
    scanf("%d",&i);
    int arr[i];
    int visted[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
       visted[j]=0;
    }
    for(j=0;j<i;j++)
    {
        if(visted[j]==1)
        continue;

        count=1;
        for(k=j+1;k<i;k++)
        {
            if(arr[j]==arr[k])
           { count+=1;
           visted[k]=1;
           }

        }
     printf("%d %d\n",arr[j],count);
    }
   
}