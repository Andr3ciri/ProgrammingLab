 #include <stdio.h>
 int fact_rec(int n)
 {
 if(n<=1)
 // caso base della ricorsione
 return 1;
 else
 return n*fact_rec(n-1);
 }
 // chiamata ricorsiva
int main()
{
    int n=5;
    int z=fact_rec(n);
    printf("%d\n", z);
}