// 초간단프로젝트-숫자맞추기게임.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//Target:
//rand(), srand() 활용
//조건문, 반복문, 함수정의
//사용자 입력 처리

//설명:
//1. 프로그램이 1~100사이의 무작위 숫자를 생성
//2. 사용자가 맞힐 때까지 숫자를 입력
//3. 입력한 숫자가 정답보다 높은지 낮은지 안내
//4. 정답을 맞히면 시도 횟수 출력

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(); // 함수 선언

int main()
{
    int choice;

    printf("====== 숫자 맞추기 게임 ======\n");

    while(1) {
        printf("\n 1. 게임시작 \n 2. 종료 \n 선택(번호를 입력하세요):");
        scanf_s("%d", &choice);

        if (choice == 1) {
            playGame();
        }
    }
}

void playGame() {
    int answer, guess, tries = 0;

    //다음시간 이어서 작성...
}