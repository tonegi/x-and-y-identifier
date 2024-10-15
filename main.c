#include <stdio.h>

int main(void) {
  int v[12], i = 0, x= 0, y = 0;
  
  for(; i < 12; i++){
  printf("Enter an integer for the vector v[%d]: ",i);
    scanf("%d",&v[i]);
    }

  printf("-----------------------------------------\n");
    printf("Enter an X position in the vector: ");  
      scanf("%d",&x);
    printf("Enter an Y position in the vector: ");  
      scanf("%d",&y);
  printf("-----------------------------------------\n");
    printf("The sum of the number of position X and Y is: %d",v[x] + v[y]);
  
  return 0;
}
