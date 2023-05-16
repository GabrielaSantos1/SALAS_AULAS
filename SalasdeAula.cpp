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

    
    cout << "Olá! Por favor, digite a quantidade de alunos da sala 1 e depois dê ENTER: " << endl;
    //coloca o valor dado pelo user como valor da primeira linha e segunda coluna
    cin >> matriz[0][1];
    
    cout << "Olá! Por favor, digite a quantidade de alunos da sala 2 e depois dê ENTER: " << endl;
    //coloca o valor dado pelo user como valor da segunda linha e segunda coluna
    cin >> matriz[1][1];
    
    cout << "Olá! Por favor, digite a quantidade de alunos da sala 3 e depois dê ENTER: " << endl;
    //coloca o valor dado pelo user como valor da terceira linha e segunda coluna
    cin >> matriz[2][1];
    
    cout << "Olá! Por favor, digite a quantidade de alunos da sala 4 e depois dê ENTER: " << endl;
    //coloca o valor dado pelo user como valor da quarta linha e segunda coluna
    cin >> matriz[3][1];
    
    cout << "Olá! Por favor, digite a quantidade de alunos da sala 5 e depois dê ENTER: " << endl;
    //coloca o valor dado pelo user como valor da quinta linha e segunda coluna
    cin >> matriz[4][1];
    
    cout << "Olá! Por favor, digite a quantidade de alunos da sala 6 e depois dê ENTER: " << endl;
    //coloca o valor dado pelo user como valor da sexta linha e segunda coluna
    cin >> matriz[5][1];

  // Calcula a soma de todas os alunos com para: cria um inteiro i e coloca que a variavel é menor que a variavel de numero de salas e aumenta até chegar no valor dessa variavel.
    for (int i; i < numSalas; i++) {
        //faz que a variavel de soma de todos os alunos seja com os valores da segunda coluna da matriz
        totalAlunos += matriz[i][1];
    }
  
    //cria uma variavel do tipo double para a media dos alunos e faz esse calculo somando os valores e dividindo pelo numero de salas
    double mediaAlunos = totalAlunos / numSalas;

    cout << endl << "Média de alunos nas salas: " << mediaAlunos << endl;


    cout << "Sala(s) com quantidade de alunos acima da média: ";
    //para: coloca que a variavel inteira i é menor que a variavel de numero de salas e aumenta até chegar no valor dessa variavel.
    for (int i; i < numSalas; i++) {
        //se uma matriz for maior que a media de alunos, mostra a primeira coluna dela para o user ver qual é o número da sala
        if (matriz[i][1] > mediaAlunos) {
            cout << matriz[i][0] << " ";
        }
    }
    
    cout << endl << "Sala(s) com o maior número de alunos: ";
    if(matriz[0][1] > matriz[1][1] || matriz[0][1] > matriz[2][1] || matriz[0][1] > matriz[3][1] || matriz[0][1] > matriz[4][1] || matriz[0][1] > matriz[5][1]){
        cout << matriz[0][0] << endl;
        }
    
    
}

int main() {
    //cria o array das matrizes das salas com a primeira coluna sendo do número da sala e da segunda sendo da quantidade de alunos
    int matrizSalas[numSalas][qtdAlunos] = {
        {1, 0},
        {2, 0},
        {3, 0},
        {4, 0},
        {5, 0},
        {6, 0},
    };

    //faz o void com o array de matrizSalas "rodar" para o user
    calculoMediaSala(matrizSalas);

  return 0;
}
