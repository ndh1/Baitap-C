#include <stdio.h>
int main(){
    int a=10;
    int *ptr = &a;
    int b=20;
    printf("%d\n",&a);
    printf("%d",ptr);
    printf("%d\n",a);
    printf("%d\n",*ptr);
    ptr = &b;
    printf("%d\n",*ptr);
    
}
