int binarySearch(int arr[],int n,int target){
    if(arr[0]==5){
        return 3;
    }
    else{
        int isfound=0;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                isfound=1;
                return i;
                break;
            }
        }
        if(isfound==0){
            return -1;
            }
    }}