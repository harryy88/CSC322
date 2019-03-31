

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3 
typedef int matrix[SIZE][SIZE]; 
void seedMatrix(int[][SIZE]); 
void printMatrix(int[][SIZE]); 
void multMatrix(int[][SIZE], int[][SIZE], int[][SIZE]); 

int main(int argc, char *argv[]){
  
  matrix m1, m2, m3; 
  seedMatrix(m1); 
  seedMatrix(m2); 
  printf("THIS IS A TEST. %d \n", m1[0][0]); 
  multMatrix(m1, m2, m3); 
  printMatrix(m3); 
  return (EXIT_SUCCESS); 
}

void multMatrix(int m1[][SIZE], int m2[][SIZE], int m3[][SIZE]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      m3[i][j] = 0; 
      for(int k = 0; k < 3; k++){
	m3[i][j] += m1[i][k] * m2[k][j]; 
      }
    }
  }

} 

void seedMatrix(int m[][SIZE]){
  int data = 0;  
  for(int row = 0; row < 3; row++){
    for(int col = 0; col < 3; col++){
      printf("ENTER Data for Row: %d, Col: %d: \n", row, col);
      //scanf("%d", &data); 
      m[row][col] = row + col;
    } 
  }
}

void printMatrix(int m[][SIZE]){
  int data = 0;
  for(int row = 0; row < 3;row++){
    for(int col = 0; col < 3; col++){
      printf("%d\t\t ", m[row][col]);                                                                                 
    }
    printf("\n"); 
  }
}
