/**
 * 不带头结点单链表
 */
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1;
#define FALSE 0;


typedef struct LNode {       //定义单链表节点类型
    int data;               //每个节点存放一个数据元素
    struct LNode *next;     //指针指向下一个节点
} LNode, *LinkList;

void * initList(LinkList *list) {
    list = NULL;
    return TRUE;
}

int empty(LinkList list){
    if (list == NULL) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    LinkList list;
    initList(list);
}
