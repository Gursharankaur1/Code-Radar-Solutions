 int findOccurrence(int arr[],int n,int target,char mode){
    if(mode=='F'){
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
    if(mode=='L'){
        int isfound=0;
        for(int i=n-1;i>=0;i--){
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
 }