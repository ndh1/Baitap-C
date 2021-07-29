//
//  main.cpp
//  bai24_timsodaonguoc
//
//  Created by Nguyen Dinh Huong on 29/06/2021.
//

#include <iostream>

int main(){
    
    int n,tmp;
    printf("Nhap n = ");
    scanf("%d",&n);
    int res=0;
    
   
    
    while(n>0){
        tmp = n%10;
        res = res*10+tmp;
        n=n/10;
    }
    printf("%d",res);
}
