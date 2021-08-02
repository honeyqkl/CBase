#include <stdio.h>
// 结构类型
// 如果结构声明在内部只能内部使用功能
void f();
void point();
int main(){
    struct date{
        int year;
        int month;
        int day;
    }
}
void fetStruct() {
    // 结构也可以没有名字
    struct {
        int year;
        int month;
        int day;
    } d1,d2;
}
