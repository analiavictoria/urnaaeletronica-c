#include <stdio.h>

int main()
{
  int voto, titulo, num_vere, num_pref;
  //constantes
  //candidatos a vereador
  char nomeVereador_a[] = "JOAO";
  int numVereador_a = 98000, partVereador_a = 12;

  char nomeVereador_b[] = "MARIA";
  int numVereador_b = 54000, partVereador_b = 15;

  //candidatos a prefeito
  char nomePrefeito_a[] = "JOSE";
  int numPrefeito_a = 25;

  char nomePrefeito_b[] = "ANA";
  int numPrefeito_b = 50;

  int resulVereador_a = 0, resulVereador_b = 0, resulPrefeito_a = 0, resulPrefeito_b = 0, vn = 0;

  //Loop de votação

  do
  {

    //Identificação do usuário
    printf("Eleitor, identifique-se: ");
    scanf("%d", &titulo);
    //votação para vereador
    printf("\n--------------------------------------------------------------------\n");
    printf("                       CANDIDATOS A VEREADOR:                         \n");
    printf("                       Joao: 98000   (Partido 12)                     \n");
    printf("                       Maria: 54000  (Partido 15)                     \n");
    printf("----------------------------------------------------------------------\n");
    printf("\nDigite o seu voto no candidato ou partido, ou número inválido para anular: ");
    scanf("%d", &num_vere);

    if (num_vere == numVereador_a || num_vere == 12)
    {
      printf("\nPartido 12\n");
      printf("\nVoto confirmado!\n");
      resulVereador_a += 1;
    }
    if (num_vere == numVereador_b || num_vere == 15)
    {
      printf("\nPartido 15\n");
      printf("\nVoto confirmado!\n");
      resulVereador_b += 1;
    }
    if (num_vere != numVereador_a && num_vere != numVereador_b && num_vere != 12 && num_vere != 15)
    {
      printf("Voto nulo!\n");
      vn += 1;
    }

    //votação para prefeito
    printf("-------------------------------------------------------------------\n");
    printf("                     CANDIDATOS A PREFEITURA:                      \n");
    printf("                            Ana: 50                                \n");
    printf("                            Jose: 25                               \n");

    printf("-------------------------------------------------------------------\n");
    printf("\nDigite o seu voto no candidato ou um número inválido para anular:  ");
    scanf("%d", &num_pref);

    if (num_pref == numPrefeito_a)
    {
      printf("\nVoto confirmado!\n");
      resulPrefeito_a += 1;
    }
    if (num_pref == numPrefeito_b)
    {
      printf("\nVoto confirmado!\n");
      resulPrefeito_b += 1;
    }
    if (num_pref != numPrefeito_a && num_pref != numPrefeito_b)
    {
      printf("Voto nulo!\n\n");
      vn += 1;
    }

    printf("\n");
    printf("-------------------------------------------------------------------\n");
    printf("                                 FIM                               \n");
    printf("-------------------------------------------------------------------\n");

    printf("\nDigite 0 para encerrar a votação ou qualquer outro número para continuar: ");
    scanf("%d", &voto);
    printf("\n");

  } while (voto != 0);

  //Resultados
  if (resulVereador_a == 0 && resulVereador_b == 0 && resulPrefeito_a == 0 && resulPrefeito_b == 0)
  {
    printf("\nNenhum voto foi registrado.");
  }
  else
  {
    printf("--------------------------------------\n");
    printf("               RESULTADO:             \n");
    printf("Canditado João: %d \n", resulVereador_a);
    printf("Canditado Maria: %d \n", resulVereador_b);
    printf("Canditado José: %d \n", resulPrefeito_a);
    printf("Canditado Ana: %d \n", resulPrefeito_b);
  }

  return 0;
}
