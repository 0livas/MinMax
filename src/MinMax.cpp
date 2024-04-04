#include "MinMax.hpp"
#include <vector>
#include <algorithm>

double MinMax_01(const std::vector<int>& meuVetor){
    clock_t inicio, fim;
    inicio = clock();
    int Max = 0, Min = 0;
    Max = meuVetor[0];
    Min = meuVetor[0];

    for(size_t i = 1; i < meuVetor.size(); i++){
        if(meuVetor[i] > Max){
            Max = meuVetor[i];
        }

        if(meuVetor[i] < Min){
            Min = meuVetor[i];
        }
    }
    fim = clock();

    double tempo = 0;
    tempo = double (fim-inicio)/CLOCKS_PER_SEC;
    return tempo;
};



double MinMax_02(const std::vector<int>& meuVetor){
    clock_t inicio, fim;
    inicio = clock();
    int Max = 0, Min = 0;
    Max = meuVetor[0];
    Min = meuVetor[0];

    for(size_t i = 1; i < meuVetor.size(); i++){
        if(meuVetor[i] > Max){
            Max = meuVetor[i];
        }
        else if(meuVetor[i] < Min){
            Min = meuVetor[i];
        }
    }
    fim = clock();

    double tempo = 0;
    tempo = double (fim-inicio)/CLOCKS_PER_SEC;
    return tempo;
};



double MinMax_03(std::vector<int>& meuVetor){
    clock_t inicio, fim;
    inicio = clock();
    int i = 0, Max = 0, Min = 0;
    if(meuVetor.size()%2 != 0){
        i = meuVetor[meuVetor.max_size()-1];
        meuVetor.push_back(i);
    }

    if(meuVetor[0] > meuVetor[1]){
        Max = meuVetor[0];
        Min = meuVetor[1];
    }
    else{
        Max = meuVetor[1];
        Min = meuVetor[0];
    }

    for(size_t j = 3; j < meuVetor.size();){
        if(meuVetor[j] > meuVetor[j+1]){
            if(meuVetor[j] > Max){
                Max = meuVetor[j];
            }
            if(meuVetor[j+1] < Min){
                Min = meuVetor[j+1];
            }
        }
        else{
            if(meuVetor[j+1] > Max){
                Max = meuVetor[j+1];
            }
            if(meuVetor[j] < Min){
                Min = meuVetor[j];
            }
        }
        j = j+2;
    }
    fim = clock();
    double tempo = 0;
    tempo = double (fim-inicio)/CLOCKS_PER_SEC;
    return tempo;
};



std::vector<int>Ordenacao(std::vector<int>& meuVetor, int Definicao){

    if(Definicao == 1){ //Ordena crescente.
    sort(meuVetor.begin(), meuVetor.end());
    }

    if(Definicao == 0){ //ordena decrescente.
    sort(meuVetor.begin(), meuVetor.end(), greater<int>());
    }
    
    return meuVetor;
};

std::vector<int> Preencher_Vetor(std::vector<int>& meuVetor, int Tamanho){
    srand(time(nullptr));
    
    for(int i = 0; i<Tamanho; i++){
        meuVetor.push_back(rand() % 1001);
    }
    return meuVetor;
};

void ExecutarMinMax01(std::vector<int> meuVetor, int NumerodeExecuções){

    cout << "-------MINMAX01-------" << endl;
    cout << "\nExecução sem Ordenação:" << endl;
    int fim = 0;
    float mediaN = 0, mediaC = 0, MediaD = 0;
    do{
       mediaN = mediaN + MinMax_01(meuVetor);
       fim++;
    }while(fim!=NumerodeExecuções);
    cout <<  "Média: " << mediaN/NumerodeExecuções  << endl;

    cout << "\nExecução com Ordenação Crescente:" << endl;
    fim = 0;
    meuVetor = Ordenacao(meuVetor, 1);
    do{
        mediaC = mediaC + MinMax_01(meuVetor);
        fim++;
    }while(fim!=NumerodeExecuções);
    cout <<  "Média: " << mediaC/NumerodeExecuções  << endl;

    cout << "\nExecução com Ordenação Descrescente:" << endl;
    fim = 0;
    meuVetor = Ordenacao(meuVetor, 0);
    do{
        MediaD = MediaD + MinMax_01(meuVetor);
        fim++;
    }while(fim!=NumerodeExecuções);
    cout <<  "Média: " << MediaD/NumerodeExecuções  << endl;
    cout << "----------------------" << endl;
    return;
};

void ExecutarMinMax02(std::vector<int> meuVetor, int NumerodeExecuções){

    cout << "-------MINMAX02-------" << endl;
    cout << "\nExecução sem Ordenação:" << endl;
    int fim = 0;
    float mediaN = 0, mediaC = 0, MediaD = 0;
    do{
       mediaN = mediaN + MinMax_02(meuVetor);
       fim++;
    }while(fim!=NumerodeExecuções);
    cout <<  "Média: " << mediaN/NumerodeExecuções  << endl;

    cout << "\nExecução com Ordenação Crescente:" << endl;
    fim = 0;
    meuVetor = Ordenacao(meuVetor, 1);
    do{
        mediaC = mediaC + MinMax_02(meuVetor);
        fim++;
    }while(fim!=NumerodeExecuções);
    cout <<  "Média: " << mediaC/NumerodeExecuções  << endl;

    cout << "\nExecução com Ordenação Descrescente:" << endl;
    fim = 0;
    meuVetor = Ordenacao(meuVetor, 0);
    do{
        MediaD = MediaD + MinMax_02(meuVetor);
        fim++;
    }while(fim!=NumerodeExecuções);
    cout <<  "Média: " << MediaD/NumerodeExecuções  << endl;
    cout << "----------------------" << endl;
    return;
};

void ExecutarMinMax03(std::vector<int> meuVetor, int NumerodeExecuções){

    cout << "-------MINMAX03-------" << endl;
    cout << "\nExecução sem Ordenação:" << endl;
    int fim = 0;
    float mediaN = 0, mediaC = 0, MediaD = 0;
    do{
       mediaN = mediaN + MinMax_03(meuVetor);
       fim++;
    }while(fim!=NumerodeExecuções);
    cout <<  "Média: " << mediaN/NumerodeExecuções  << endl;

    cout << "\nExecução com Ordenação Crescente:" << endl;
    fim = 0;
    meuVetor = Ordenacao(meuVetor, 1);
    do{
        mediaC = mediaC + MinMax_03(meuVetor);
        fim++;
    }while(fim!=NumerodeExecuções);
    cout <<  "Média: " << mediaC/NumerodeExecuções  << endl;

    cout << "\nExecução com Ordenação Descrescente:" << endl;
    fim = 0;
    meuVetor = Ordenacao(meuVetor, 0);
    do{
        MediaD = MediaD + MinMax_03(meuVetor);
        fim++;
    }while(fim!=NumerodeExecuções);
    cout <<  "Média: " << MediaD/NumerodeExecuções  << endl;
    cout << "----------------------" << endl;
    return;
};

void ExecutarGeral(std::vector<int> VetorXposicoes, int NumerodeExecuções){
    ExecutarMinMax01(VetorXposicoes, NumerodeExecuções);
    ExecutarMinMax02(VetorXposicoes, NumerodeExecuções);
    ExecutarMinMax03(VetorXposicoes, NumerodeExecuções);
};