#include <stdio.h>

void nhapmang(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int trungbinhcong(int a[],int n)
{
    int count=0;
    float tbc=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]%2 !=0)
        {
           tbc=tbc+a[i];
               count++;
        }
    }
    
    return printf("%.4f",tbc/count);
}
int main()
{
    int a[100],n;
    scanf("%d",&n);
    nhapmang(a, n);
    trungbinhcong(a, n);
}