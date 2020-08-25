#include <stdlib.h>
#include <stdio.h>
#define ALUNOS 5

int main() {
  int i;
  float  nota1, nota2, media, alunos[5];
for (i=0;i < ALUNOS; i++) {
      printf ("\nDigite as duas notas de cada aluno = \n");
      scanf ("%f%f", &nota1, &nota2);
      media = (nota1 + nota2) / 2;
      alunos[i] = media;
    }
    for (i=0; i < ALUNOS; i++) {
    printf("\nMedia: %f", alunos[i]);
  }
  printf("\n\n\n");
return 0;
}
