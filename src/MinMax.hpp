#ifndef MINMAX_HPP
#define MINMAX_HPP
#include <iostream>
#include <vector>
using namespace std;

double MinMax_01(const std::vector<int>& meuVetor);
double MinMax_02(const std::vector<int>& meuVetor);
double MinMax_03(const std::vector<int>& meuVetor);

std::vector<int>Ordenacao(std::vector<int>& meuVetor, int Definicao);
std::vector<int>Preencher_Vetor(std::vector<int>& meuVetor, int Tamanho);
void ExecutarMinMax01(std::vector<int> meuVetor, int NumerodeExecuções);
void ExecutarMinMax02(std::vector<int> meuVetor, int NumerodeExecuções);
void ExecutarMinMax03(std::vector<int> meuVetor, int NumerodeExecuções);
void ExecutarGeral(std::vector<int> VetorXposicoes, int NUmerodeExecuções);


#endif