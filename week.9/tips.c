#include<stdio.h>

void Test1(short data){
    short soft = 0;
    soft = data;
    printf("soft = %d\n", soft);

}

void Test2(short* ptr){
    short soft = 0;
    soft = *ptr;
    printf("soft = %d\n", soft);

    *ptr = 3;        //tip 변수 업데이트 
}

int main(void){
    short tips = 5;
    printf("tips = %d\n", tips);

    Test1(tips);
    printf("Test1 후 tips = %d\n", tips);

    Test2(&tips);
    printf("Test2 후 tips = %d\n", tips);

    return 0;
}