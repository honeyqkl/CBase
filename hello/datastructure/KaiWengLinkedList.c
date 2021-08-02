/**
 * 不带头结点单链表
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef _NODE_H_
#define _NODE_H_

typedef struct _node {
    int value;
    struct _node *next
} Node;

typedef struct _list {
    Node *head;
} List;

void add(List *pList, int number) {
    Node *p = (Node *) malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    // 找到最后那个节点
    Node *last = pList->head;
    // 如果节点不为空
    if (last) {
        while (last->next) {
            last = last->next;
        }
        last->next = p;
    } else {
        pList->head = p;
    }
    scanf("%d", &number);


}

void print(List *pList) {
    Node *p;
    for (p = pList->head; p; p = p->next) {
        printf("%d\t", p);

        printf("%d\t", p->value);
    }
    printf("%d\n");
}

int main() {
    List list;
    list.head = NULL;
    int number;
    do {
        scanf("%d", &number);
        if (number != -1) {
            add(&list, number);
        }
    } while (number != -1);
    print(&list);

    Node *p;
    int isFound = 0;
    for (p = list.head; p; p->next) {
        if (p->value == number) {
            printf("找到了%d\n", p->value);
            isFound = 1;
            break;
        }
    }

    if (!isFound) {
        printf("没找到\n");
    } else {
        printf("找到了\n");
    }

    Node *q;
    for (q = NULL, p = list.head; p; q = p, p = p->next) {
        if (p->value == number) {
            // 需要判断p是否存在
            if (q) {
                q->next = p->next;
            } else {
                list.head = p->next;
            }
            free(p);
            break;
        }
    }

    for (p = list.head; p; q = p) {
        q =p->next;
        free(p);
    }
    return 0;
}

#endif
