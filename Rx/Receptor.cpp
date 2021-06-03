#include <iostream>
#include "../Serial.h"

using namespace std;

int main(int argc, char * argv[]) {
    // cria um objeto Serial para acessar a porta serial indicada em argv[1],
    // com taxa de 9600 bps
    Serial rf(argv[1], B9600);

    // este é o buffer onde serão armazenado os caracteres recebidos
    char buffer[32];

    // recebe alguns octetos
    int n = rf.read(buffer, 32);

    cout << "Recebeu " << n << " bytes: ";

    // mostra na tela os caracteres recebidos
    cout.write(buffer, n);

    cout << endl;
}