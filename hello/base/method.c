#include <stdio.h>
// ��ַ����
void swap(int *a,int *b);
int main(){
    int a = 5;
    int b = 6;
    swap(&a,&b); // ��a��b�ĵ�ַ����
    printf("a=%d b=%d",a,b);
}

void swap(int *a,int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}