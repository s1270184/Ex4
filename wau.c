#include <stdio.h>

int main(){
  char name[10];
  head = 0;
  tail = 0;
  printf("Who are you?\n");
  scanf("%s",name);

  printf("Hello %s\n",name);

  srand((unsigned int)time(NULL));

  for(i=0;i<3;i++){
    coin = rand();
    printf("%d",coin);
    if(coin%2 == 0){
      printf("Round %d:Heads\n",i+1);
      head++;
    }

    else {
      printf("Round %d:Tails\n",i+1);
      tail++;
    }
  }

  printf("Heads: %d, Tails: %d\n",head,tail);

  return 0;


}
