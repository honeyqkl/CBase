#include <stdio.h>

#define MaxSize 10
typedef struct {
   int data[MaxSize];
   int length;
}SqList;
void test(int x){
    x = 1024;
}

int main() {
    int x = 1;
    printf("����ǰ x=%d\n",x);
    test(x);
    printf("���ú� x=%d\n",x);
}
