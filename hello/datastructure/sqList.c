#include <stdio.h>

#define MaxSize 10 // ������󳤶�
typedef struct {
    int data[MaxSize];
    int length;
}SqList;
void InitList(SqList *p);

int main(){
    SqList l;
    InitList(&l); // ��ʼ��˳���
    for (int i = 0; i < MaxSize; ++i) {
        printf("data[%d]= %d\n",i,l.data[i]);
    }
    return 0;
}

// ��ʼ��˳���
void InitList(SqList *p){
    // �������ʼ�����ݻ��õ�ϵͳ�е����һ������
    for (int i = 0; i < MaxSize; ++i) {
        p->data[i] = 0;
    }
    p->length = 0;
}

