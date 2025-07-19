#include <stdio.h>
#include<stdbool.h>
#include<stdint.h>
#include<time.h>
#include<conio.h>
#include<unistd.h>

char first_sentence[]  = "HI";  
char second_sentence[] = "FASHION";
char third_sentence[]  = "SUITABLE";

uint8_t letter_H[8][8] =
{  
   {1,0,0,0,0,0,0,1},
   {1,0,0,0,0,0,0,1},
   {1,0,0,0,0,0,0,1},
   {1,1,1,1,1,1,1,1},
   {1,0,0,0,0,0,0,1},
   {1,0,0,0,0,0,0,1},
   {1,0,0,0,0,0,0,1},
   {1,0,0,0,0,0,0,1},  
};

uint8_t letter_I[8][8] =
{  
   {1,1,1,1,1,1,1,1},
   {0,0,0,0,1,0,0,0},
   {0,0,0,0,1,0,0,0},
   {0,0,0,0,1,0,0,0},
   {0,0,0,0,1,0,0,0},
   {0,0,0,0,1,0,0,0},
   {0,0,0,0,1,0,0,0},
   {1,1,1,1,1,1,1,1},  
};

uint8_t letter_F[8][8] =
{  
   {1,1,1,1,1,1,1,1},
   {1,0,0,0,0,0,0,0},
   {1,0,0,0,0,0,0,0},
   {1,1,1,1,1,1,1,1},
   {1,0,0,0,0,0,0,0},
   {1,0,0,0,0,0,0,0},
   {1,0,0,0,0,0,0,0},
   {1,0,0,0,0,0,0,0},  
};

uint8_t letter_S[8][8] =
{  
   {0,1,1,1,1,1,1,1},
   {1,0,0,0,0,0,0,0},
   {1,0,0,0,0,0,0,0},
   {0,1,1,1,1,1,1,0},
   {0,0,0,0,0,0,0,1},
   {0,0,0,0,0,0,0,1},
   {0,0,0,0,0,0,0,1},
   {1,1,1,1,1,1,1,0},  
};

uint8_t btn = 0;

// khởi tạo kiểu liệt kê đại diện cho 3 câu cần hiển thị
typedef enum{
    FIRST,
    SECOND,
    THIRD
} Sentence;

// mô phỏng in ký tự ra led ma trận 8x8
void print_char(const uint8_t matrix [8][8]){
    for (size_t i=0; i < 8; i++){
        for (size_t j=0; j < 8; j++){
            printf(matrix[i][j] ? "*" : " ");
        }
        printf("\n");
    }
}