
// 함수 응용 문제
// 정수 5개를 입력 받아 배열에 저장하고 
// 배열을 함수로 전달하여 최댓값 구하여 반환하는 함수 정의
// 정수 5개의 입력값 중 최댓값을 출력하는 프로그램을 완성해보세요:)

#include <stdio.h>

/*
   반환타입 함수명(배열) {
       배열 중의 최댓값?
       최댓값 반환
   }
*/
int N = 5;     // 전역 변수 

// 포인터 변수 : 주소값을 저장하는 변수
int max(int* arr) {
    int result = 0;  

    result = arr[0]; 
    for (int i = 0; i < N; i++)
    {   // arr[i] = 1 2 3 4 5
        if(result < arr[i]){
            result = arr[i];
        }
    }
    
    return result;


}

int main(void){


int arr[5];
int result = 0;

printf(" 정수 5개 입력 : ");
// 입력문 -- 정수 5개 입력 
for (int i = 0; i < N; i++)
{   
    // 배열에 저장
    scanf("%d",&arr[i]);
}

// 최댓값 = 함수호출 -- 배열을 전달
result = max(arr);

// 출력 - 최댓값
printf("최댓값 : %d\n",result);











}