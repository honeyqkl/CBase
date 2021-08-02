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
    printf("调用前 x=%d\n",x);
    test(x);
    printf("调用后 x=%d\n",x);
}
