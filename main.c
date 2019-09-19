#include <stdio.h>

void hanoi_tower(int disco, char comeco, char meio, char fim){
  if(disco == 1){
    printf("\nMover disco 1 do %c  para o %c",comeco,fim);
  }
  else{
    hanoi_tower(disco-1, comeco, fim, meio);
    printf("\nMover disco %d do %c para o %c",disco,comeco,fim);
    hanoi_tower(disco-1,meio, comeco, fim);//não entendo o pq disso (=^.^=)
  }
}
int main(){
     int n;
     printf("\n~UMU~UMU~UMU~Hanoi Tower~UMU~UMU~UMU~\n");
     printf("Digite o número de discos : ");
     scanf("%d",&n);
     hanoi_tower(n,'C','M','F');
}

//temos que fazer o código de forma dinâmica!
//eu fiz o código com ajuda da Internet
//tem uma parte dele que eu não to conseguindo entender, aliás eu tenho serios problemas com recursão x.x       


