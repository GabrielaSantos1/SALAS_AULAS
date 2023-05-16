#include <iostream>
using namespace std;

// Cria uma variavel constante de valor inteiro para ser os numeros das salas. Já afirma que são 6 dessa variávei
const int numSalas = 6; 
// Cria uma variavel constante de valor inteiro para ser os a quantidade de alunos em cada sala. Já afirma que são 2 dessa variávei
const int qtdAlunos = 2; 

// cria um void de calculo da media com as variaveis de Nmero de salas e Quantidade de alunos que serão as matrizes no array futuro
void calculoMediaSala(int matriz[numSalas][qtdAlunos]) {
    //cria uma variavel de soma de todos os alunos para todas as salas
    int totalAlunos;

  // Calcula a soma de todas os alunos com para: cria um inteiro i e coloca que a variavel é menor que a variavel de numero de salas e aumenta até chegar no valor dessa variavel.
    for (int i; i < numSalas; i++) {
        //faz que a variavel de soma de todos os alunos seja com os valores da segunda coluna da matriz
        totalAlunos += matriz[i][1];
    }
  
    //cria uma variavel do tipo double para a media dos alunos e faz esse calculo somando os valores e dividindo pelo numero de salas
    double mediaAlunos = totalAlunos / numSalas;

    cout << "Média de alunos nas salas: " << mediaAlunos << endl;


    cout << "Salas com quantidade de alunos acima da média: ";
    //para: coloca que a variavel inteira i é menor que a variavel de numero de salas e aumenta até chegar no valor dessa variavel.
    for (int i; i < numSalas; i++) {
        //se uma matriz for maior que a media de alunos, mostra a primeira coluna dela para o user ver qual é o número da sala
        if (matriz[i][1] > mediaAlunos) {
            cout << matriz[i][0] << " ";
        }
    }
    cout << endl;
}

int main() {
    //cria o array das matrizes das salas com a primeira coluna sendo do número da sala e da segunda sendo da quantidade de alunos
    int matrizSalas[numSalas][qtdAlunos] = {
        {1, 35}, // Sala 1 com 35 alunos
        {2, 4}, // Sala 2 com 4 alunos
        {3, 22}, // Sala 3 com 22 alunos
        {4, 20}, // Sala 4 com 20 alunos
        {5, 36}, // Sala 5 com 36 alunos
        {6, 30}, // Sala 6 com 30 alunos
    };

    //faz o void com o array de matrizSalas "rodar" para o user
    calculoMediaSala(matrizSalas);

  return 0;
}
