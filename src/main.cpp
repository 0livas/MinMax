#include <iostream>
#include "MinMax.hpp"
using namespace std;

int main(){  
    vector <int> mil_posicoes;
    mil_posicoes = Preencher_Vetor(mil_posicoes, 1000);
    vector <int> dezmil_posicoes;
    dezmil_posicoes = Preencher_Vetor(dezmil_posicoes, 10000);
    vector <int> cemmil_posicoes;
    cemmil_posicoes = Preencher_Vetor(cemmil_posicoes, 100000);
    vector <int> quinhentasmil_posicoes;
    quinhentasmil_posicoes = Preencher_Vetor(quinhentasmil_posicoes, 500000);

    int NumerodeExecuções = 0;
    cout << "Digite o Número de execuções: ";
    cin >> NumerodeExecuções;
    
    cout << "1000 Posições\n" << endl;
    ExecutarGeral(mil_posicoes, NumerodeExecuções);
    cout << "\n\n10000 Posições\n" << endl;
    ExecutarGeral(dezmil_posicoes, NumerodeExecuções);
    cout << "\n\n100000 Posições\n" << endl;
    ExecutarGeral(cemmil_posicoes, NumerodeExecuções);
    cout << "\n\n500000 Posições\n" << endl;
    ExecutarGeral(quinhentasmil_posicoes, NumerodeExecuções);
    return 0;
}