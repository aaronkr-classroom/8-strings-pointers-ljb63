#include<stdio.h>

#define ROWS 8
#define COLS 8

//체스판 초기화 
void init_board(int board[ROWS][COLS]){
    // 모든 위치 0으로 채움 
    // 0 = 오브젝트 없음
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            board[i][j] == 0;
        }   
    }   
}

//체스판 설정 
void setup_board(int board[ROWS][COLS]){
    // 1 = red       2 = black
    // 빨간색은 한상 위, 검은색은 항상 아래로 설정
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < COLS; j++)
        {
            //배치된 판 안에만 놓을 수 있습니다. 
            if ((i + j) % 2 == 1)
            {
                board[i][j] = 1;
            }
        }
    }
        for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if ((i + j) % 2 == 1)
            {
                board[i][j] = 1;
            }
        }
    }
}

//체스판 출력 
void print_board(int board[ROWS][COLS]){
    printf("\n");

    //열 숫자 출력
    for (int j = 0; j < COLS; j++)
    {
        printf("%d", j);
    }
    printf("\n");

    //판 윗부분 
    printf(" ");
    for (int j = 0; j < COLS; j++)
    {
        printf("--");
    }
    printf("\n");

    //판 출력 
    for (int i = 0; i < ROWS; i++)
    {
        printf("%d|", i);
        for (int j = 0; j < COLS; j++)
        {
            if (board[i][j] == 0)      //행 숫자 출력 
            {
                printf(". ");         //빈 공간 
            }
            else if (board[i][j] == 1)    //빨간색
            {
                printf("o ");
            }
            else if (board[i][j] == 2)    //검은색 
            {
                printf("x ");
            }
        }
        printf("|\n");
    }
    
    //판 아랫부분 
    printf(" ");
    for(int j = 0; j < COLS; j++)
    {
        printf("--");
    }
    printf("\n");

}

int main(void){

    int board[ROWS][COLS];

    init_board(board);
    setup_board(board);
    print_board(board);

    return 0;
}