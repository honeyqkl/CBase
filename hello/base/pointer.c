#include <stdio.h>
void f(int *p);
void swap(int *pa, int *pb);
// ָ��
// ��������������ָ��
// ��������������ַ���� int a[10]; int *p = a; ����ȡ��ַ��
// ��������ĵ�Ԫ�����Ǳ��� ��Ҫ��&ȡ��ַ
// a == &a[0]
int main(){
    int i = 10;
    printf("&i=%p\n",&i);
    f(&i); // ��i�ĵ�ַ����f����
    printf("i=%d\n", i);

    int b = 5;
    int c = 9;
    swap(&b,&c);
    printf("b = %d ",b);
    printf("c = %d",c);
    int array[100];
    int *p = array;
}

// ����һ����ַ��p pΪ�õ�ַ��ָ��
void f(int *p) {
    printf("p=%p \n",p);
    printf("p=%d \n",*p); // ���ʵ���p��ַ��ֵ
    *p = 26;
}

void swap(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
}