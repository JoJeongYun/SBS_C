#include <stdio.h>

int main(void){
    short sh = 32767 + 1;                  // short ���� �ִ����� �ʱ�ȭ
    int in = 2147483647;               // �� 12���� �ִ��� ������ �ִ�.
    long ln = 2147483647;
    long long lln = 123451234512345;
    
      printf("sh : %d\n", sh);
      printf("in : %d\n", in);
      printf("ln : %ld\n", ln);        // long ���� ���Ĺ��� %ld
      printf("ln : %lld\n", lln);      // long long ���� ���Ĺ��� %lld

      return 0;

}