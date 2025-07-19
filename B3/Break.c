#include <stdio.h>

int main(){
    while (1)
    {
        /* code */
        for (int i = 0; i < 7; i++)
        {
            /* code */
            for (int j = 0; j < 5; j++)
            {
                /* code */
                if (i ==3 && j == 4){
                    printf("break\n");
                    goto exit_loop;
                    break;
                } else {
                    printf("i = %d, j = %d\n", i, j);
                }
            }
            if (i == 3){
                printf("break\n");
                break;
            }
            
        }
        printf("break\n");
        break;
        
    }

exit_loop:
    printf("exit loop\n");
    return 0;
    
}