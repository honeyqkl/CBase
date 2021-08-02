// ˳������̬����
#include <stdio.h>
#include <stdlib.h>

#define INIT_SIZE 10 // ������󳤶�
typedef struct {
    int *data;    //ָʾ��̬���������ָ��
    int maxSize;  //˳�����������
    int length;   //˳���ĵ�ǰ����
}SqList;
void initList(SqList *p);
void increaseSize(SqList *p,int len);
int main(){
    SqList l;
    initList(&l); // ��ʼ��˳���

    for (int i = 0; i < l.maxSize; ++i) {
        l.data[i] = 1;
        l.length ++;
        printf("data[%d]= %d\n",i,l.data[i]);
    }
    increaseSize(&l,5);
    for (int i = 0; i < l.maxSize; ++i) {
        printf("�����¿ռ�data[%d]= %d\n",i,l.data[i]);
    }
    return 0;
}

// ��ʼ��˳���
void initList(SqList *p){
    p->data = (int *)malloc(sizeof (int) * INIT_SIZE);
    for (int i = 0; i < INIT_SIZE; ++i) {
        p->data[i] = 0;
    }
    p->length = 0;
    p->maxSize = INIT_SIZE;
}

// �������鳤��
void increaseSize(SqList *p,int len){
    // ��Ϊ�Ƕ�̬��ŵĵ�ַ
    int *dataP = p->data;
    // �¿���һ�οռ��data��
    p->data = (int *)malloc((p->maxSize + len) * sizeof (int));
    // ��ԭ����ֵ���µĿռ�
    for (int i = 0; i < p->length; ++i) {
        p->data[i] = dataP[i];
    }
    p->maxSize = p->maxSize + len;
    free(dataP);
}