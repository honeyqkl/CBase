#include <stdio.h>
#define PI 3.141592 //编译器开始执行之前，进行编译处理 不能加;

int main(){
    printf("%f\n",PI);
    printf("%s %d\n",__FILE__,__LINE__);
    printf("%s %s\n",__DATE__,__TIME__);
}
