#include <stdio.h>
int main() {
    int sw;
  printf("enter 0 for indoor and 1 for outdoor");
    scanf("%d" ,&sw);
   if(sw == 1){
        printf("switch is ON\n");
        
    }
    else if(sw == 0){
        printf("switch is OFF\n");
   }
    return 0;
}
