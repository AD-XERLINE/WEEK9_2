#include <stdio.h>

int main()
{
    int n;
    int s=1;
    
printf("Input number: ");
scanf("%d",&n);

do {
    s= s * (n%10);
    n = n/10;
}while(n>0);

   printf("%d", s);
}
