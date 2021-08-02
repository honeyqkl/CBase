#include <stdio.h>
void f(int *p);
void swap(int *pa, int *pb);
// 指针
// 数组变量是特殊的指针
// 数组变量本身表达地址所以 int a[10]; int *p = a; 无需取地址符
// 但是数组的单元表达的是变量 需要用&取地址
// a == &a[0]
int main(){
    int i = 10;
    printf("&i=%p\n",&i);
    f(&i); // 将i的地址传入f（）
    printf("i=%d\n", i);

    int b = 5;
    int c = 9;
    swap(&b,&c);
    printf("b = %d ",b);
    printf("c = %d",c);
    int array[100];
    int *p = array;
}

// 接收一个地址给p p为该地址的指针
void f(int *p) {
    printf("p=%p \n",p);
    printf("p=%d \n",*p); // 访问到了p地址的值
    *p = 26;
}

void swap(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
}