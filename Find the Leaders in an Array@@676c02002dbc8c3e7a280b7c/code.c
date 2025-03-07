#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int array[n];
  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  for(int i=0;i<n-1;i++){
    int isfound=1;
    for(int j=i+1;j<n;j++){
      if(array[i]<array[j]){
        isfound=0;
        break;
      }
    }
    if(isfound==1){
      printf("%d ",array[i]);
    }
  }
  printf("%d",array[n-1]);
  return 0;
}