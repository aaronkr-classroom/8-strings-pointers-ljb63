#include<stdio.h>

void check_endian(){
    //첫 메모리 주소가 0x12이면 빅 엔디언
    //첫 메모리 주소가 0x78이면 리틀 엔디언
    unsigned int num  = 0x12345678;
    unsigned char*byte_ptr = (unsigned char*)&num;

    //모든 바이트 주소와 값 출력 
    for (int i = 0; i < sizeof(num); i++)
    {
        printf("%p   0x%02x\n", (byte_ptr  + i), byte_ptr[i]);
    }
    
    //첫 바이트 주소를 확인하고 엔디언니스 출력 
    if (byte_ptr[0] == 0x12)
    {
        printf("\nThis is BIG-endian");
    }
    else if (byte_ptr[0] == 0x78)
    {
        printf("\nTHis is little endian");
    }
    else
    {
        printf("\nUnknown endian...");
    }
}

int main(void){
    check_endian();

    return 0;
}