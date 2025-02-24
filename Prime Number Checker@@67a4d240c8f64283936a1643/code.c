int isPrime(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
           count+=1; 
        }
    }
    if(count==2){
        return 1;
        }
    else{
        return 0;
        }
}
