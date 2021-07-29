//
//  main.cpp
//  bai16_vonglapC
//
//  Created by Nguyen Dinh Huong on 28/06/2021.
//

#include <iostream>

int main()
{
    int a = 5;
    int b = 10;
    
    for (int i=0;i<a;i++){
        printf("Xin Chao\n");
    }
    
    for (int i=b;i<a;i++){
        printf("Hello\n");
    }
    int sum=0;
    for (int i=a;i<=b;i++ ){
        sum += i;
    }
    printf("%d",sum);
    
}
