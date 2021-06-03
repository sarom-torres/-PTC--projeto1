#include <iostream>
#include "../Serial.h"

using namespace std;

int main(int argc, char * argv[]) {
    // cria um objeto Serial para acessar a porta serial indicada em argv[1],
    // com taxa de 9600 bps
    Serial rf(argv[1], B9600);

    // esta é a mensagem a ser transmitida
    string msg = "um teste ...\r\n";

    // envia a mensagem
    int n = rf.write(msg.c_str(), msg.size());

    cout << "Enviou " << n << " bytes" << endl;

    cout << "Tecle ENTER para encerrar o programa:";
    getline(cin, msg);

    cout << endl;
}
