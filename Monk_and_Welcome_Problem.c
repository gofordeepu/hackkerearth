#include<stdio.h>
int main()
{
    int a[100000],b[100000],c[100000];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
{
    
      scanf("%d",&a[i]);
     

}

for(i=0;i<=n;i++)
{
scanf("%d",&b[i]);
}


    for(i=0;i<=n;i++)
 {
     c[i]=a[i]+b[i];
 }
 for(i=0;i<=n;i++)
{
    printf("%d ",c[i]);
}
}
