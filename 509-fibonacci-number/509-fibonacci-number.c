int solve(int f[], int n){
    if (n <= 1)
        return n;
    
    if(f[n] == -1)
        f[n] =  solve(f,n-2) + solve(f,n-1);
    
    return f[n];
}

int fib(int n){
    
    int f[n+1];
    for(int i = 0; i<=n; i++)
        f[i] = -1;
    
    return solve(f, n);
}