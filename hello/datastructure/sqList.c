#include <stdio.h>

#define MaxSize 10 // 定义最大长度
typedef struct {
    int data[MaxSize];
    int length;
}SqList;
void InitList(SqList *p);

int main(){
    SqList l;
    InitList(&l); // 初始化顺序表
    for (int i = 0; i < MaxSize; ++i) {
        printf("data[%d]= %d\n",i,l.data[i]);
    }
    return 0;
}

// 初始化顺序表
void InitList(SqList *p){
    // 如果不初始化数据会拿到系统中的随机一段数据
    for (int i = 0; i < MaxSize; ++i) {
        p->data[i] = 0;
    }
    p->length = 0;
}

