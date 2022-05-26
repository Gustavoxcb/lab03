#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*exercicio 1

int main(){

    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1> n2){
        printf("%d eh maior que %d", n1, n2);
    }
    else{
        if (n2> n1){
          printf("%d eh maior que %d", n2, n1);
        }

    }
    return 0;


}
*/

/*exercicio 2

int main(){

    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n >= 0){

        printf("A raiz quadrada de n eh %f", sqrt (n));
    }
    else{
        printf("Esse eh um numero invalido");
    }

    return 0;


}
*/

/*exercicio 3
int main(){

    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n >= 0){

        printf("A raiz quadrada de n eh %f", sqrt (n));
    }
    else{
        printf("Esse numero ao quadrado eh %f", n*n);
    }

    return 0;


}
*/
/*exercicio 4
int main(){

    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n >= 0){

        printf("A raiz quadrada de n eh %f \n", sqrt (n));
        printf("Esse numero ao quadrado eh %f", n*n);
    }


    return 0;


}
*/
/*exercicio 5
int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if ((n % 2) > 0){

        printf("Esse numero eh impar");
    }
    else
        printf("Esse numero eh par");

    return 0;


}
*/
/*exercicio 6
int main(){

    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1> n2){
        printf("%d eh maior que %d \n", n1, n2);
        printf("A diferenca entre eles eh %d", n1-n2);

    }
    else{
        if (n2> n1){
          printf("%d eh maior que %d \n", n2, n1);
          printf("A diferenca entre eles eh %d", n2-n1);
        }
        else
            printf("Os valores sao iguais");
    }
    return 0;


}
*/
/*exercicio 7
int main(){

    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1> n2){
        printf("%d eh maior que %d \n", n1, n2);

    }
    else{
        if (n2> n1){
          printf("%d eh maior que %d \n", n2, n1);


    }
        else
            printf("Os valores sao iguais");
    }
    return 0;


}
*/
/*exercicio 8
int main(){

    float n1, n2, m;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    if (n1 >= 0.0 && n2 >= 0.0){
        m = (n1 + n2) / 2.0;
        printf("A media dessas notas eh %.1f", m);

    }
    else{
        printf("Essas notas sao invalidas");
    }
    return 0;


}
*/
/*exercicio 9
int main(){

  float s, e;

  printf("Digite o salario do trabalhador: ");
  scanf("%f", &s);

  printf("Digite o valor do emprestimo: ");
  scanf("%f", &e);

  if(e > 0.2 * s){
    printf("Emprestimo nao concedido");
  }
  else{
    printf("Emprestimo cedido");
  }
  return 0;
}
*/
/*exercicio 10
int main(){

  float h, p;
  char s;

  printf("Digite o sexo da pessoa 'm' ou 'f' : ");
  fflush(stdin);
  scanf("%c", &s);

  printf("Digite a altura da pessoa: ");
  fflush(stdin);
  scanf("%f", &h);

  if(s == 'm'){
    p = (72.7 * h) - 58.0;
    printf("Seu peso ideal eh %f", p);
  }
  else{
      if(s == 'f'){
         p = (62.1 * h) - 44.7;
         printf("Seu peso ideal eh %f", p);
      }
      else
          printf("Voce digitou de forma errada o sexo");

  }
  return 0;
}
*/
/*exercicio 11
int main(){

  int n;
  int soma = 0;

  printf("Digite o numero: ");
  scanf("%d", &n);

  if(n <= 0){
    printf("Numero invalido");
  }
  else{
      if(n>0){
         while(n>0){
         soma = soma + n%10;
         n = n/10;
         }
         printf("A soma dos algarismos eh %d", soma);
      }
  }
  return 0;
}
*/
/*exercicio 12
int main(){

  int n;

  printf("Digite o numero: ");
  scanf("%d", &n);

  if(n < 0.0){
    printf("Numero invalido");
  }
  else{
      if(n>=0.0){

         printf("O logaritmo eh %d", log10(n));
      }
  }
  return 0;
}
*/
/*exercicio 13
int main(){

  int n1, n2, n3;
  float m;

  printf("Digite a primeira nota: ");
  scanf("%d", &n1);
  printf("Digite a segunda nota: ");
  scanf("%d", &n2);
  printf("Digite a terceira nota: ");
  scanf("%d", &n3);

  m = (n1*1 + n2*1 + n3*3) / 5;

  if(m >= 60){
    printf("Estudante aprovado");
  }
  else
      printf("Estudante reprovado");

  return 0;
}
*/
/*exercicio 14
int main(){

  int nl, ns, ne;
  float m;

  printf("Digite a primeira nota: ");
  scanf("%d", &nl);
  printf("Digite a segunda nota: ");
  scanf("%d", &ns);
  printf("Digite a terceira nota: ");
  scanf("%d", &ne);

  m = (nl*2 + ns*3 + ne*5) / 10;

  if(m>0 && m<=2.9){
    printf("Estudante reprovado");
  }
  else{
      if(m>=3.0){
        printf("Estudante aprovado");
      }
      else
        printf("Valores de notas invalidos");
  }

  return 0;
}
*/
/*exercicio 15
int main(){

  int dia;

  printf("Digite um numero de 1 a 7 para um dia da semana: ");
  scanf("%d", &dia);

  switch(dia){
  case 1:
      printf("dia = domingo");
      break;
  case 2:
      printf("dia = segunda");
      break;
  case 3:
      printf("dia = terca");
      break;
  case 4:
      printf("dia = quarta");
      break;
  case 5:
      printf("dia = quinta");
      break;
  case 6:
      printf("dia = sexta");
      break;
  case 7:
      printf("dia = sabado");
      break;
  default:
      printf("Voce digitou um numero invalido");
  }

  return 0;
}
*/
/*exercicio 16
int main(){

  int mes;

  printf("Digite um numero de 1 a 12 para um mes do ano: ");
  scanf("%d", &mes);

  switch(mes){
    case 1:
        printf("mes = janeiro");
        break;
    case 2:
        printf("mes = fevereiro");
        break;
    case 3:
        printf("mes = marco");
        break;
    case 4:
        printf("mes = abril");
        break;
    case 5:
        printf("mes = maio");
        break;
    case 6:
        printf("mes = junho");
        break;
    case 7:
        printf("mes = julho");
        break;
    case 8:
        printf("mes = agosto");
        break;
    case 9:
        printf("mes = setembro");
        break;
    case 10:
        printf("mes = outubro");
        break;
    case 11:
        printf("mes = novembro");
        break;
    case 12:
        printf("mes = dezembro");
        break;
  default:
      printf("Voce digitou um numero invalido");
  }

  return 0;
}
*/
/*exercicio 17
int main(){

  float basemaior, basemenor, h, a;

  printf("Digite a base maior do trapezio: ");
  scanf("%f", &basemaior);
  printf("Digite a base menor do trapezio: ");
  scanf("%f", &basemenor);
  printf("Digite a altura: ");
  scanf("%f", &h);

  if(basemaior !=0  && basemenor !=0){
    a = ((basemaior + basemenor) * h) / 2;

    printf("A area do trapezio eh: %f", a);
  }
  else{
    printf("Valores invalidos");
  }

  return 0;
}
*/
/*exercicio 18
int main() {

    int opcao, n1, n2;

    do {
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n");
        scanf("%d", &opcao);

        if(opcao > 0 && opcao < 5){
            printf("Digite dois valores: ");
            scanf("%d%d",&n1, &n2);
        }

        switch(opcao) {
        case 0:
            printf("Fim\n");
            break;
        case 1:
            printf("Soma: %d\n", n1 + n2);
            break;
        case 2:
            printf("Subtracao: %d\n", n1 - n2);
            break;
        case 3:
            printf("Multiplicacao: %d\n", n1 * n2);
            break;
        case 4:
            while(n2 == 0) {
                printf("Digite outro valor: ");
                scanf("%d", &n2);
            }
            printf("Divisao: %d\n", n1 / n2);
            break;
        default:
            printf("Opcao inválida.\nDigite outra opcao: ");
        }
    } while(opcao != 0);
}
*/
/*exercicio 19
int main(){
    int valor;

    printf("Digite um valor: ");

    scanf("%d" ,&valor);

    if(valor%5 == 0 && valor%3 == 0){

        printf("Divisivel por 3 e 5");

    }

    else if(valor%5 == 0 && valor%3 != 0){

        printf("Divisivel por 5 mas nao por 3");

    }

    else if(valor%3 == 0 && valor%5 != 0){

        printf("Divisivel por 3 mas nao por 5");

    }
    return 0;
}
*/
/*exercicio 20
int main() {
    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
}
*/
/*exercicio 21
int main () {

    int numero;

    printf("1 - Soma de 2 numeros\n2 - Diferença entre 2 numeros (maior pelo menor)\n3 - Produto entre 2 numeros\n4 - Divisao entre 2 numeros (o denominador não pode ser zero)\n");
    scanf("%d", &numero);

    printf("Digite dois numeros: ");

    int num1, num2;

    scanf("%d%d", &num1, &num2);

    if (numero == 1){

    printf("%d + %d = %d", num1, num2, num1+num2);

 }

    else if (numero == 2) {

        if (num1 > num2)

        printf("%i - %i = %i", num1, num2, num1-num2);

        else

        printf("%i - %i = %i", num2, num1, num2-num1);


 }

    else if (numero == 3) {

    printf("%i * %i = %i", num1, num2, num1*num2);

 }

    else if (numero == 4) {

        if (num2 ==0)

        printf("Operação Inválida");

        else

        printf("%i / %i = %i", num1, num2, num1/num2);

 }

}
*/
/*exercicio 22
int main(){

    int idade, temposervico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico: ");
    scanf("%d", &temposervico);

    if (idade >=65){
        printf("Pode se aposentar");
    }
    else if (temposervico >= 30){
        printf("Pode se aposentar");
        }
    else if (idade >=60 && temposervico >= 25){
        printf("Pode se aposentar");
        }
    else
        printf("Não pode se aposentar");

return 0;


}
*/
/*exercicio 23
main() {
  int ano;

  printf("Verifique se o ano digitado eh bissexto: ");
  scanf("%d", &ano);

  if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    printf("Ano bissexto");

  }

  else {
    printf("Ano nao bissexto");

  }

}
*/
/*exercicio 26
int main(){

   float km,litros,consumo;

   printf("digite quantos litros foram consumidos:");
   scanf("%f\n",&litros);

   printf("digite a distancia pecorrida:");
   scanf("%f\n",&km);

   consumo=km/litros;

   scanf("%f\n",&consumo);

   if(consumo<8){

    printf("\nvenda o carro:");

}

   if(consumo==8 && consumo==14){

    printf("\neconomico:");

}

   if(consumo>12){

    printf("\nsuper economico:");

}

}
*/
//exercicio 27
int main(){
    float idade;

    printf ("Digite a idade do nadador: \n");
    scanf("%f", &idade);

    if ((idade < 5) || (idade > 99))

        printf("Idade invalida\n");

    else if ((idade >= 5) && (idade < 8))

        printf("Idade na categoria infantil A\n");

    else if ((idade >= 8) && (idade < 11))

        printf("Idade na categoria infantil B\n");

    else if ((idade >= 11) && (idade < 14))

        printf("Idade na categoria juvenil A\n");

    else if ((idade >= 14) && (idade < 18))

        printf("Idade na categoria juvenil B\n");

    else

        printf("Idade na categoria adulto\n");
}
