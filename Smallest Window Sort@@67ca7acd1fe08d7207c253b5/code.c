int findUnsortedSubarray(int arr[],int n){
    int m=0,n=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            m=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]<arr[i-1]){
            n=i;
            break;
        }
    }
    if(m==0 && n==0){
        return 0;
    }
    else{
        return m-n+1;
    }
}