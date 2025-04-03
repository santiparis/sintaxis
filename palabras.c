#include <stdio.h>
#include <string.h>

int calcularLongitud(char palabra[]);
void concatenarCadenas(char palabra1[], char palabra2[], char concatenadas[]);

int main(void){
  char palabra1[50];
  char palabra2[50];
  char concatenadas[100];
  int len1, len2;

  printf("\nIngrese la primera palabra: ");
  fgets(palabra1, sizeof(palabra1), stdin);
  palabra1[strcspn(palabra1, "\n")] = 0;

  len1 = calcularLongitud(palabra1);

  if(len1 != 0){
    printf("\n\nCantidad de caracteres en la primera palabra: %d\n", len1);
  } else{
    printf("\n\nLa primera palabra es la palabra vacia");
  }

  printf("\n\nIngrese la segunda palabra: ");
  fgets(palabra2, sizeof(palabra2), stdin);
  palabra2[strcspn(palabra2, "\n")] = 0;

  len2 = calcularLongitud(palabra2);

  if(len2 != 0){
    printf("\n\nCantidad de caracteres en la segunda palabra: %d\n", len2);
  } else{
    printf("\n\nLa segunda palabra es la palabra vacia");
  }

  concatenarCadenas(palabra1, palabra2, concatenadas);

  printf("\n\nPalabras concatenadas: %s\n\n", concatenadas);

  return 0;
}

int calcularLongitud(char palabra[]){

  int cont = 0;

  for(int i = 0; i < 50; i++){
    if(palabra[i] != '\0'){
      cont++;
    } else {
      return cont;
    }
  }
}

void concatenarCadenas(char palabra1[], char palabra2[], char concatenadas[]){
  
  int offset;
  
  for(int i = 0; i < 50; i++){
    if(palabra1[i] != '\0'){
      concatenadas[i] = palabra1[i];
    } else{
      offset = i;
      break;
    }
  }

  for(int i = 0; i < 100; i++){
    if(palabra2[i] != '\0'){
      concatenadas[offset + i] = palabra2[i];
    } else{
      concatenadas[offset + i] = '\0';
      break;
    }
  }
}
