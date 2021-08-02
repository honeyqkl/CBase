// ˳���Ĳ���
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10
#define TRUE 1
#define FALSE 0
typedef struct {
    int data[MAX_SIZE];
    int length;
} SqList; //˳���Ķ���

void initList(SqList *, int array[], int arrayLength);

int listInsert(SqList *p, int i, int e);

int listDelete(SqList *p, int i, int *e);

void printList(SqList *p);

int main() {
    int array2[10];
    printf("array2 %llu\n",sizeof(array2));

    int array[] = {1, 2, 34};
    int arrayLength = 3;
    SqList list;
    printf("%p\n",&list);
    initList(&list, array, arrayLength);
    printf("%p\n",&list);

    int res = listInsert(&list, 4, 3);

    if (res) {
        printf("����ɹ�\n");
    } else {
        printf("����ʧ��\n");
    }

    printList(&list);

    int e;
    listDelete(&list,1,&e);
    printf("%d",e);
}

/**
 * ����Ҫ�жϲ���������Ƿ���ȷ
 * @param p �б�ָ��
 * @param i ����Ԫ�ص�λ�� λ��
 * @param e �����Ԫ��
 */
int listInsert(SqList *p, int i, int e) {
    if (i < 1 || i > p->length + 1) {
        return FALSE;
    }
    if (p->length >= MAX_SIZE) {
        return FALSE;
    }
    for (int j = p->length; j >= i; j--) {
        p->data[j] = p->data[j - 1];
    }
    p->data[i - 1] = e;
    p->length++;
    return TRUE;
}

int listDelete(SqList *p, int i, int *e) {
    if (i < 1 || i > p->length) {
        return FALSE;
    }
    *e = p->data[i - 1];
    for (int j = i; j < p->length; j++) {
        p->data[j - 1] = p->data[j];
    }
    p->length--;
    return TRUE;
}


// ��ʼ��˳���
void initList(SqList *p, int array[], int arrayLength) {
    p = (SqList *)malloc(sizeof(SqList));
    printf("%p\n",p);

    // �������ʼ�����ݻ��õ�ϵͳ�е����һ������
    for (int i = 0; i < MAX_SIZE; ++i) {
        p->data[i] = 0;
    }
    p->length = 0;
    for (int i = 0; i < arrayLength; i++) {
        p->data[i] = array[i];
        p->length++;
    }
}

void printList(SqList *p) {
    printf("[");
    for (int i = 0; i < MAX_SIZE; i++) {
        if (i == MAX_SIZE - 1) {
            printf("%d", p->data[i]);
        } else {
            printf("%d, ", p->data[i]);
        }
    }
    printf("]\n");
}