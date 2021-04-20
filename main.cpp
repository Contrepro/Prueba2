#include <iostream>
/* El programa calcula la superficie de un triangulo al recibir los datos de la base y la altura del triangulo, "imprime" en valor de la superficie
Base, Altura  y Superficie son variables del tipo real*/
int main() {
  float Base, Altura, Superficie; 
  std::cout << "Rafael Contreras ingrese los datos de la base y a la altura despues presione enter!\n";
  /* printf("ingrese cuatro datos enteros: !");*/
  scanf("%f %f", &Base, &Altura);
  Superficie = Base * Altura / 2; 
  printf("\n La superficie del triangulo es: %5.2f", Superficie);
}
