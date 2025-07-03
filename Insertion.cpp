#include <stdio.h>
#include <conio.h>
int insert (int n, int m[])
{
     int i,pos,element;
     printf("display original data\n");
     for(i=0; i<n; i++)
     {
          printf("%d\n", m[i]);
     }
     printf("enter position\n");
     scanf("%d",&pos);
     printf("enter element\n");
     for (i=n; i>=pos; i--) 
     {
          m[i] = m[i-1];
     }
     n = n+1;
     m[pos] = element;
     printf("display new data\n");
     for(i=0; i<n; i++)
     {
          printf("%d\n",m[i]);
     }
     return 0;
}
int main() {
     int n,i,m[20];
     printf("enter size of an array\n");
     scanf("%d",&n);
     printf("enter array\n");
     for(i=0; i<n; i++)
     {
          scanf("%d",&m[i]);
     }
     insert (n,m);
     return 0;
}