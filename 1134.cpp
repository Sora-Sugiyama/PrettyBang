#include <stdio.h>
 
int main() {
    char hexString[10]; // 입력값을 문자열로 받음
    int decimalNumber;
 
    //printf("소문자 16진수 입력: ");
    scanf("%s", hexString);
 
    // 16진수 문자열을 10진수 정수로 변환
    sscanf(hexString, "%x", &decimalNumber);
 
    // 10진수를 8진수로 변환하여 출력
    printf("%o\n", decimalNumber);
 
    return 0;
}
