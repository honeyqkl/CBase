#include <stdio.h>
// 地址传递
void swap(int *a,int *b);
int main(){
    int a = 5;
    int b = 6;
    swap(&a,&b); // 将a和b的地址传入
    printf("a=%d b=%d",a,b);
}

void swap(int *a,int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}