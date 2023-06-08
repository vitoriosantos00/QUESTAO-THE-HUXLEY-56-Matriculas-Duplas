#include <stdio.h>

int main(void) {

  
  int pii[45], piii[30];

  
  for(int i=0;i<45;i++){
    scanf("%d",&pii[i]);
  }

  
  for(int i=0;i<30;i++){
    scanf("%d",&piii[i]);
  }

  
  for(int i=0;i<45;i++){
    for(int j=0;j<30;j++){
      if(pii[i]==piii[j]){
        printf("%d ",pii[i]);
      }
    }
  }
  return 0;
}