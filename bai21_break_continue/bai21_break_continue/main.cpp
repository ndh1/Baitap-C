//
//  main.cpp
//  bai21_break_continue
//
//  Created by Nguyen Dinh Huong on 28/06/2021.
//

#include <iostream>

int main(){
//    int n;
//    printf("Nhap n = ");
//    scanf("%d",&n);
//
//    bool allEven = true;
//    int last;
//    while (n>0){
//        last = n%10;
//
//        if (last%2==1){
//            allEven = false;
//            break;
//        }
//        n /=10;
//    }
//    if (allEven){
//        printf("Toan la chu so chan\n");
//    }else {
//        printf("Co xuat hien chu so le\n");
//    }
    for (int i =0; i<= 100; i++){
        if(i % 2 !=0){
            continue;
        }
        printf("%d\t",i);
    }
}
