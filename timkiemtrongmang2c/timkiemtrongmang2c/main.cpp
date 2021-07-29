//
//  main.cpp
//  timkiemtrongmang2c
//
//  Created by Nguyen Dinh Huong on 04/07/2021.
//

#include <iostream>
#include <util.h>
void nhap(int a[][100],int n, int m){
    do {
        if(n<0 || m<0){
            printf("cot hoac dong khong duoc = 0 ");
        }
    } while (n<0||m<0);
    
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("\n a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void in(int a[][100],int n,int m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
std::pair<int, int> timkiem(int a[][100],int n,int m,int v){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (a[i][j] == v)
                return {i,j};
            
        }
    }
    return {-1,-1};
}


int main(){
    int a[100][100],n,m,v;
    printf("nhap n = ");scanf("%d",&n);
    printf("nhap m = ");scanf("%d",&m);
    nhap(a, n, m);
    in(a, n, m);
    
    
    printf("nhap vao gia tri can tim = ");scanf("%d",&v);
    std::pair<int, int> rs = timkiem(a, n, m, v);
    printf("\nTim thay so %d tai hang %d cot %d ! ",v,rs.first,rs.second);
}
