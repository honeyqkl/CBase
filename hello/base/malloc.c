#include <stdio.h>
#include <stdlib.h>
// ��̬�������
// ʹ��malloc��������̬��������
// free ��Ҫʹ��ԭ��ַ����free
void f();
int main(){
//    int number;
//    int *a;
//    printf("��������: ");
//    scanf("%d",&number);
//    a = (int *) malloc(number * sizeof (int));
//    for (int i = 0; i < number; ++i) {
//        scanf("%d" , &a[i]);
//    }
//    for (int i = number - 1; i >= 0 ; i--) {
//        printf("%d ",a[i]);
//    }

//    free(a);
    f();
    return 0;
}

void f(){
    void *p;
    int cnt = 0;
    while ((p = malloc(100*1024*1024))) {
        cnt ++;
    }
    printf("������%d00MB�Ŀռ�\n",cnt);
}