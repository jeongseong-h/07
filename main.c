#include <stdio.h>

int inc(int counter);  // 함수 원형 선언

int main(void)
{
    int i = 10;
    printf("함수 호출 전 i=%d\n", i);

    i = inc(i);

    printf("함수 호출 후 i=%d\n", i);

    return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}