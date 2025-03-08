int findOccurrence(int arr[],int n,int target){
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
    }