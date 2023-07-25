int fib(int n){
    
    if (n <= 1)
        return n;
    
    int F[n+1];
    
    for (int i = 0; i<=n; i++)
        F[i] = 0;
    
    F[0] = 0;
    F[1] = 1;
    
    for (int i = 2; i<=n; i++){
        F[i] = F[i-2] + F[i-1];
    }
    return F[n];
}