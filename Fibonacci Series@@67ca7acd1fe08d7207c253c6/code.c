void fibonacciSeries(int n){
    if(n==1){
        printf("%d",0);
        return 0;
    }
    else if(n==2){
        printf("%d %d",0,1);
        return 0;
    }
    else{
        printf("%d %d ",0,1);
        int a=0,b=1,c;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
            printf("%d ",c);
        }
    }
}