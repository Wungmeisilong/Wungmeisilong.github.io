#include <stdio.h>
void convert(unsigned int *);
int main(){
    unsigned int a;
    printf("������һ��������");
    scanf("%x",&a);
    convert(&a);
    printf("ת���������Ϊ��0x%x\n",a);
    return 0;
}
void convert(unsigned int *a){
    unsigned int temp;
    temp = *a & 0x0f;
    *a &= 0xf0;
    *a = (*a >> 4) | (temp << 4);
}
