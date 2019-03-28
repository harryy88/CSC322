
#include <stdio.h>
#include <stdlib.h>


#define KILLPROB 1.47

int main(void){

  float killRate, roadSA, lengthSquare, lengthRoad, area, rooDensity; 
  int roosNum; 

  printf("Enter the lenght of the side of land in km: \n");
  scanf("%f", &lengthSquare);
  area = lengthSquare * lengthSquare; 

  //printf("the area is %f km sqrd: \n", area); 
  
  printf("Enter the length of the road: ");
  scanf("%f", &lengthRoad);
  
  printf("Enter the number of roos in the square: "); 
  scanf("%d", &roosNum);   
  
  rooDensity = roosNum / area; 
 
  //printf("Roo density = %f", rooDensity);

  roadSA = 10 * lengthRoad;

  killRate = roadSA * rooDensity * KILLPROB / 1000; 
  printf("Expected kills = %.1f: ", killRate);


  return 0; 

}
