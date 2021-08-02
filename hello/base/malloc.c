#include <stdio.h>
#include <stdlib.h>
// 动态存放数组
// 使用malloc方法来动态分配数组
// free 需要使用原地址进行free
void f();
int main(){
//    int number;
//    int *a;
//    printf("输入数量: ");
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
    printf("分配了%d00MB的空间\n",cnt);
}