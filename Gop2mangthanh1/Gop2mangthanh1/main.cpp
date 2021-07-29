//
//  main.cpp
//  Gop2mangthanh1
//
//  Created by Nguyen Dinh Huong on 29/07/2021.
//

#include <iostream>

void nhapmang(int a[],int n)
{
    do{
        if (n<0)
        {
            printf("số lượng phần tử phải lớn hơn 0");
            return;
        }
    }while(n<0);
    
    for(int i=0;i<n;i++)
    {   printf("\nphần tử thứ %d la: ",i);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[],int n){
    printf("\nmang: ");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void gop(int a[],int b[],int c[],int n,int m,int &p)
{
    p=n+m;
    for (int i=0;i<p;i++)
    {
        if (i<n)
        {
            c[i]=a[i];
        }else
        {
            c[i]=b[i-n];
        }
    }
}
void sapxep(int a[],int n)
{
    int temp;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){
    int a[100],b[100],c[100];
    int n,m,p;
    printf("n =");
    scanf("%d",&n);
    printf("m =");
    scanf("%d",&m);
    nhapmang(a, n);
    nhapmang(b, m);
    xuatmang(a, n);
    xuatmang(b, m);
    gop(a, b, c, n, m, p);
    xuatmang(c, p);
    sapxep(c, p);
    xuatmang(c, p);
    return 0;
    
}
