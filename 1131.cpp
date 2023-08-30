#include <stdio.h>
 
int main() {
    int decimalNumber;
     
    // 사용자로부터 10진 정수 입력 받기
    scanf("%d", &decimalNumber);
     
    // 입력받은 10진 정수를 소문자 16진수로 출력
    printf("%x\n", decimalNumber);
     
    return 0;
}
