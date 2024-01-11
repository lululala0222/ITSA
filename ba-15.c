//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30760
#include <stdio.h>

int main(){
    int row, col;
    while(scanf("%d %d", &row, &col) != EOF){
        int in[row][col];
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++)
                scanf("%d",&in[i][j]);
        }
        
        int out[col][row];
        
        for(int i = 0; i < col; i++){
            for(int j = 0; j < row; j++)
                out[i][j]=in[j][i];
        }
        
        for(int i = 0; i < col; i++)
            for(int j = 0; j < row; j++)
                printf("%d%c",out[i][j], "\n "[j != row-1]);
    }
}