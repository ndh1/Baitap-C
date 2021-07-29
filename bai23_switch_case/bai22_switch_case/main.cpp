//
//  main.cpp
//  bai22_switch_case
//
//  Created by Nguyen Dinh Huong on 28/06/2021.
//

#include <stdio.h>

int main(){
    float a,b;
    char opera;
   
    scanf("%f""%c""%f",&a,&opera,&b);
    
    switch (opera)
    {
        case '+':
            printf("%.2f", a+b);
            break;
        case '-':
            printf("%.2f",a-b);
            break;
        case '*':
            printf("%.2f",a*b);
            break;
        case '/':
            if(b == 0){
                printf("Math Error");
            }else{
            printf("%.2f",a/b);
            }
            break;
        default:
            printf("Math Error");
            break;
    }
    do {
        <#statements#>
    } while (<#condition#>);
}
