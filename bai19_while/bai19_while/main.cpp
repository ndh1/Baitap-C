//
//  main.cpp
//  bai19_while
//
//  Created by Nguyen Dinh Huong on 28/06/2021.
//

#include <iostream>

int main(){
    int n=1;
   
    while (n<=10) {
        if (n%2==0){
            printf("%d\t",n);
        }
        n++;
    }
    
    int number;
    do{
    printf("\nNhap number");
        scanf("%d",&number);
    }while (number<1);
}
