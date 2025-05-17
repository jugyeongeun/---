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
        else if (choice == 2) {
            printf("게임을 종료합니다.\n");
            break;
        }
        else {
            printf("잘못된 번호 %d를 입력하셨어요. 다시 입력해 주세요.\n", choice);
        }
    }
}
//Camel 변수: numberOfStudent
//Pascal 변수: NumberOfStudent
//Snake 변수: number_of_student

//함수 정의
void playGame() {
    int answer, guess, tries = 0;

    srand(time(NULL)); //무작위 seed를 설정
    answer = rand() % 100 + 1; //1~100사이의 random값
    /*printf("Debug: answer is: %d\n", answer);*/

    printf("1부터 100사이의 숫자를 맞춰보세요!\n");

    do {
        printf("입력: ");
        scanf_s("%d", &guess);
        tries++;

        if (guess > answer) {
            printf("너무 큽니다!!\n");
        }
        else if (guess < answer) {
            printf("너무 작습니다!!\n");
        }
        else {
            printf("정답입니다!! %d번 만에 맞추셨어요!!\n", tries);
        }
    } while (guess != answer);
}