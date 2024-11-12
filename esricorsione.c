int function(int n, int x)
{
    if(x==0) return (1);
    if(x==1) return(x);
    else return(x*function(n-1, x));
}



int sommo(int j, int k)
{
    if(k==j) return(j-1);
    return (j-1+sommo (j+1,k));
}