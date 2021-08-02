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
    } d1,d2; // 定义了两个变量d1 和 d2 结构


    struct date today; // 声明一个结构date的名为实例today
    today.month = 07;
    today.day = 31;
    today.year = 2021;
    printf("%i\n",today.day);

    point();

}

void f() {
    // 结构也可以没有名字
    struct {
        int year;
        int month;
        int day;
    } d1,d2;
}

void init(){
    struct date {
        int year;
        int month;
        int day;
    };

    struct date today = {1996,1,17};
    struct date thisMonth = {.month=10,.day=18};
    printf("%i-%i-%i",thisMonth.year,thisMonth.month,thisMonth.day);// 不给的值默认为0

};

// 结构需要取地址符来获取地址
void point(){
    struct date {
        int year;
        int month;
        int day;
    };
    int array[3] = {1,2,-1};
    for (int *p = &array; *p != -1 ; *p++) {
        printf("address %d \n",*p);
    }
    struct date today = {1996,1,17};
    struct date *point = &today;
    printf("address %p \n",point);
}