#include <stdio.h>
// ������
// ��������ֻ��������
int main(){
    printf("%f \n", 10.0/3*3);


    int foot;
    int inch;
    scanf("%d %d",&foot,&inch);
    printf("�����%f�ס� \n",((foot + inch / 12.0) * 0.3048));
    return 0;
}