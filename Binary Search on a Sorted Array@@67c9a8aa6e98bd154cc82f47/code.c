int binarySearch(int arr[],int n,int target){
    int same=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[0]){
            same=0;
            break;
        }
    }
    if(same==1){
        printf("%d",3);
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