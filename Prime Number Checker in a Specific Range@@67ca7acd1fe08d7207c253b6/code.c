void printPrimesInRange(int a,int b){
    int isprime=0;
    for(int i=a;i<=b;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count+=1;
                isprime=1;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }
    if(isprime!=1){
        printf("No prime numbers");
    }
}