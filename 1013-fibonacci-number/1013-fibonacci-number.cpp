class Solution {
public:
    int fib(int n) {
    int fib[n+1];
    if(n==0)return 0;
    else if(n==1)return 1;
    else{
        int x=0;
        int y=1;
        for(int i=2;i<=n;i++){
            fib[i]=x+y;
            x=y;
            y=fib[i];
        }
    }
    return fib[n];
    }
};