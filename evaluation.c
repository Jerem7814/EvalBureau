#include <stdio.h>

int parfait(int n){
  int s=0;
  for(int i=1;i<n;i++){
    if (n%i==0){
      s+=i;
    }
  }
  if (s==n){
    return 1;
  }
  else{
    return 0;
  }

}

int main(void) {
  int X,resultat;
  printf("Entrez un nombre : ");
  scanf("%d",&X);
  resultat=parfait(X);
  if (resultat){
    printf("%d est premier",X);
  }
  else{
    printf("%d n'est pas premier",X);
  }
  
}
