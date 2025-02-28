#include<stdio.h>
int main()
{
    int i,j,k,isfound;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }

    for(j=0;j<i;j++)
    { 
        isfound=1;
      for(k=j+1;k<i;k++)
      {
        if(arr[j]<arr[k])
        {isfound=0;
       break;
        }
      }}
      if(isfound==1){
      printf("%d ",arr[j]);
    }
}