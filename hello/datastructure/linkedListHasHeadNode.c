/**
 * 不带头结点单链表
 */
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1;
#define FALSE 0;


typedef struct lNode {       //定义单链表节点类型
    int data;               //每个节点存放一个数据元素
    struct lNode *next;     //指针指向下一个节点
} LNode, *LinkList;

/**
 * 初始化链表，开辟一段空间给头结点，list指向头结点
 * @param list LinkList的指针
 * @return
 */
void initList(LinkList *list) {
    LNode *node = (LNode *) malloc(sizeof(LNode)); // 开辟头结点空间
    if (node == NULL) {
        printf("内存不够思密达\n");
    } else {
//        node->data = 30;
        node->next = NULL;
        *list = node; // 将头结点的指针给 list所指向的值
    }
}

/**
 * 在index的位置上插入一个element元素
 * @param list
 * @param index
 * @param element
 * @return
 */
int listInsert(LinkList *list, int index, int element) {
    if (index < 0) {
        return FALSE;
    }
    LNode *p = *list;
    for (int i = 0; i < index && p; i++) {
        p = p->next;
        if (p == NULL) {
            printf("12222\n");
            LNode *insert = (LNode *) malloc(sizeof(LNode));
            insert->data = 1; // 插入element；
            insert->next = NULL; // 将p的next节点赋值给insert
            p  = insert; // 将insert地址赋值给p->next;
        } else {
            LNode *insert = (LNode *) malloc(sizeof(LNode));
            insert->data = element; // 插入element；
            insert->next = p->next; // 将p的next节点赋值给insert
            p = insert; // 将insert地址赋值给p->next;
        }
    }
    return TRUE;
}


void main() {
    LinkList list; //链表的指针
    initList(&list);
    int res = listInsert(&list, 1, 10);
//    printf("%d\n",res);
//    printf("%d\n", list->data);
    for (; list; list = list->next) {
        printf("%d\n", list->next);
    }
}
