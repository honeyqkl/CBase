#include <stdio.h>
// 枚举实际上是int类型
// 实际上用的很少
enum color {red = 5,yellow,green,NumCOLORS}; // 0,1,2
void f(enum color c);
int main(){
    enum color t = red;
    f(t);
    return 0;
}

void f(enum color c) {
    printf("%d\n",c);
}