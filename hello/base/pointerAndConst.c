#include <stdio.h>
// 判断哪个被const了的标志是const在*的前面还是后面
int main(){
//    int i;
//    const int* p1 = &i; // p1的值不能改变
//    int const* p2 = &i; // p2的指向不能改变
//    int *const p3 = &i; // p3的值不能改变

    char ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
    char *p = &ac[0];
    char *p1 = &ac[5];
    for (; *p != -1 ; *p++) {
        printf("array p = %d \n" , *p);
    }
    printf("p = %p\n",p);
    printf("p = %p\n",p1);
    printf("q1 - q = %d \n",p1 - p);
    int ai[] = {0,1,2,3,4,5,6,7,8,9};
    int *q = &ai[0];  // 加了一个 sizeof(type)
    int *q1 = &ai[6];
    printf("q = %p\n",q);
    printf("q = %p\n",q1);
    printf("q1 - q = %d \n",q1 - q); // 会求出 地址差/sizeof

    //*p++
}

