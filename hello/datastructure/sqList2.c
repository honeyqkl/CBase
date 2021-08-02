// 顺序表机动态分配
#include <stdio.h>
#include <stdlib.h>

#define INIT_SIZE 10 // 定义最大长度
typedef struct {
    int *data;    //指示动态分配数组的指针
    int maxSize;  //顺序表的最大容量
    int length;   //顺序表的当前长度
}SqList;
void initList(SqList *p);
void increaseSize(SqList *p,int len);
int main(){
    SqList l;
    initList(&l); // 初始化顺序表

    for (int i = 0; i < l.maxSize; ++i) {
        l.data[i] = 1;
        l.length ++;
        printf("data[%d]= %d\n",i,l.data[i]);
    }
    increaseSize(&l,5);
    for (int i = 0; i < l.maxSize; ++i) {
        printf("开辟新空间data[%d]= %d\n",i,l.data[i]);
    }
    return 0;
}

// 初始化顺序表
void initList(SqList *p){
    p->data = (int *)malloc(sizeof (int) * INIT_SIZE);
    for (int i = 0; i < INIT_SIZE; ++i) {
        p->data[i] = 0;
    }
    p->length = 0;
    p->maxSize = INIT_SIZE;
}

// 增加数组长度
void increaseSize(SqList *p,int len){
    // 因为是动态存放的地址
    int *dataP = p->data;
    // 新开辟一段空间给data用
    p->data = (int *)malloc((p->maxSize + len) * sizeof (int));
    // 将原来的值给新的空间
    for (int i = 0; i < p->length; ++i) {
        p->data[i] = dataP[i];
    }
    p->maxSize = p->maxSize + len;
    free(dataP);
}