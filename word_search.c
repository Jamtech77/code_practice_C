#include "stdio.h"
#include "string.h"

// the word must be either going left-to-right, or top-to-bottom in the matrix.

#define ROW 4
#define COLOMN 4

char matrix[ROW][ROW] = {
  {'F', 'A', 'C', 'I'},
  {'O', 'B', 'Q', 'P'},
  {'A', 'N', 'O', 'B'},
  {'M', 'A', 'S', 'S'}
};


int word_search(char mtx[ROW][COLOMN], int row, int colomn, char *tar){
    int tar_len = strlen(tar);
    int i = 0, j = 0;

    for(i=0;i<row;i++){
        for(j=0;j<colomn;j++){
            if(tar[0] != matrix[i][j]) { // If first character in matrix
                if( i >= (row-1) && j >= (colomn-1) ) {
                    return 0; // Not found first char even finishing scanning. False
                }
                continue;
            }
            else {
                int cur_row = i;
                int cur_col = j;
                int k = 1;
                /* If next letter is [i+1][j] or [i][j+1] */
                for(k=1;k<tar_len;k++){
                    if(matrix[cur_row+1][cur_col] == tar[k]){
                        cur_row = cur_row + 1;
                        if(k == tar_len-1) return 1; // Correspond to all letter of the word. True
                    } else if(matrix[cur_row][cur_col+1] == tar[k]){
                        cur_col = cur_col + 1;
                        if(k == tar_len-1) return 1; // Correspond to all letter of the word. True
                    } else{ //False
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

int pass_matrix(char *mtx, int row, int colomn){
    for (size_t i = 0; i < row; i++) {
        for (size_t j = 0; j < colomn; j++) {
            // printf("%c\n", mtx[i+j]);
        }
    }
    return 0;
}


int main(void){
    int row = sizeof(matrix)/sizeof(matrix[0]); //Horizontal
    int colomn = sizeof(matrix[0]); //Vertical  
    char *target = "FACI";
    
    pass_matrix(matrix[0], row, colomn);
    
    int result = word_search(matrix, row, colomn, target);
    printf("%s\n", result ? "True" : "False");
    
    // result = word_search(matrix, row, colomn, "FACI");
    // printf("%s\n", result ? "True" : "False");
    // result = word_search(matrix, row, colomn, "OBQP");
    // printf("%s\n", result ? "True" : "False");
    // result = word_search(matrix, row, colomn, "ANOB");
    // printf("%s\n", result ? "True" : "False");
    // result = word_search(matrix, row, colomn, "MASS");
    // printf("%s\n", result ? "True" : "False");
    // result = word_search(matrix, row, colomn, "FAC");
    // printf("%s\n", result ? "True" : "False");
    // result = word_search(matrix, row, colomn, "OBQ");
    // printf("%s\n", result ? "True" : "False");
    // result = word_search(matrix, row, colomn, "ANO");
    // printf("%s\n", result ? "True" : "False");
    // result = word_search(matrix, row, colomn, "MAS");
    // printf("%s\n", result ? "True" : "False");
    // result = word_search(matrix, row, colomn, "ASS");
    // printf("%s\n", result ? "True" : "False");
  
    return 0;
}