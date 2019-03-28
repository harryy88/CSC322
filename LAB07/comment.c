#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int c;
    int end = 0;
    while((c = getchar()) != EOF) {
        if(c == '/') {
            c = getchar();
            
            if(c == '*') {
                while(end == 0){
                    if((c = getchar()) == '*'){
                        if((c = getchar()) == '/'){
                            break;
                        }
                    }
                    printf("%c",c);
                }
                printf("\n");
                
            }
        }
    }
    
    return(EXIT_SUCCESS);
    
}
