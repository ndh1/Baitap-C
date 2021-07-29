//
//  main.cpp
//  Chen1phantuvaomang
//
//  Created by Nguyen Dinh Huong on 29/07/2021.
//

#include <iostream>

void nhapmang(int a[],int n)
{
    do
    {
        if(n<0)
        {
            printf("Nhap lai n");
        }
    }while(n<0);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void chen(int a[],int n,int k)
{
    int x;
    printf("nhap x");scanf("%d",&x);
    for(int i=n;i>=k;i--)
    {
        a[i]=a[i-1];
    }
    a[k]=x;
    n++;
    xuatmang(a, n);
}
int main()
{
    int a[100],n,k;
    scanf("%d",&n);
    nhapmang(a, n);
    xuatmang(a, n);
    scanf("%d",&k);
    chen(a, n, k);
}
