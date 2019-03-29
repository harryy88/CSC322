
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int *intPt;
typedef int intAry[5];
typedef int* intPtAry[5];

void seedInt(int[]); 
void seedIntPt(int* []); 
void printIntAry(int[]); 
void printIntPtrAry(int* []);
void bubbleSortInts(int[]); 
void bubbleSortIntPtr(int* []); 

int main(int argc, char *argv[]){
  //NOT YET COMPLETE 
  intAry fiveRandomNumber;
  intPtAry fiveRandomIntPtrs;
  printf(""); 
  seedIntPt(fiveRandomIntPtrs); 
  seedInt(fiveRandomNumber); 
 
  printIntAry(fiveRandomNumber); 
  printf("dd\n\n"); 
  printIntPtrAry(fiveRandomIntPtrs); 
  
  bubbleSortInts(fiveRandomNumber); 
  printf("\n\nSorted Numbers After:\n"); 
  printIntAry(fiveRandomNumber); 
 
  return(EXIT_SUCCESS);  

}

void bubbleSortIntPtr(int *Numbers[]){



}

void bubbleSortInts(int Numbers[]){
  int temp; 
  for(int i = 0; i < 5 - 1; i++){
    for(int j = 0; j < 5 - i - 1; j++){
      if(Numbers[j] > Numbers[j+1]){   //elements w/out using [] notation
	temp = *(Numbers+j); 
	*(Numbers+j) = *(Numbers+j+1); 
	*(Numbers+j+1) = temp; 
      }
    }

  }

}

void seedInt(int intAry[]){
  srand(time(0)); 
  for(int i = 0; i < 5; i++){
    intAry[i] = rand(); 
  }
  return; 

} 

void seedIntPt(int *intPtrAry[]){
  //srand(time(NULL)); 
  for(int i = 0; i < 5; i++){
    int *xP; 
    int x = rand();
    ++xP; 
    *xP = x; 
    //int *temp = intPtrAry[i]; 
    //*temp = x;
    intPtrAry[i] = xP;
    // printf("RANDOM NUMBER AT is  %d, as well as %d \n add X= %d \n", i, *intPtrAry[i], xP);
    
  }
  
}

void printIntAry(int intAry[]){
  printf("Numbers in Integer array: \n"); 
  for(int i = 0; i < 5; i++)
    printf("Item at index %d is %d \n", i, intAry[i]);

}

void printIntPtrAry(int *intPtrAry[]){
  *intPtrAry[1] = rand(); 
  printf("Numbers in Integer Pointer Array:\n"); 
  for(int i = 0; i < 5; i++)
    printf("Item at index %d is %d\n", i, *intPtrAry[i]); 

}
