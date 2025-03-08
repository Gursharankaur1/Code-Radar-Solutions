int searchInRotatedArray(int arr[],int n,int target){
    int isfound=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
            isfound=1;
        }
    }
    if(isfound==0){
        return -1;
    }
}