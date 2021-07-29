//
//  main.cpp
//  bai31_timsodaonguoc_dequy
//
//  Created by Nguyen Dinh Huong on 30/06/2021.
//

#include <iostream>

int sodaonguoc(int n){
    int res,last;
    res = 0;
    
    while (n>0) {
        last=n%10;
        n=n/10;
        res = res*10+last;
    }
    return res;
}

int main(){
    int n;
    printf("Nhap n = ");scanf("%d",&n);
    printf("so dao nguoc cua n = %d ",sodaonguoc(n));
}
