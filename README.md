<h1 align='center'>Mínimo e Máximo</h1>

<div align = "center" >

[![requirement](https://img.shields.io/badge/IDE-Visual%20Studio%20Code-informational)](https://code.visualstudio.com/docs/?dv=linux64_deb)
![Make](https://img.shields.io/badge/Compilacao-Make-orange)
![Linguagem](https://img.shields.io/badge/Linguagem-C%2B%2B-blue)
</div>

> Status: Finalizado ✅

## Introdução
<p align="justify">
Este programa faz referência a disciplina Algorítmo e Estrutura de Dados I, desenvolvido na linguagem C++ na IDE Visual Studio Code, usando uma makefile disponibilizada pelo docente. O MinMax, nome genérico para explicar a funcionalidade do programa, são algorítmos de leitura de um Vetor para encontrar o valor Mínimo (Min) e o valor Máximo (Max). Esse programa serve como uma base de estudo para o tempo de execução de diferentes implementações que desempenham a mesma função, para que enfim esses tempos sejam analisados.
</p>

## Objetivos

<p align='justify'>
O objetivo deste trabalho é analisar os tempos de execução dos três diferentes algorítmos fornecidos para encontrar o Mínimo e Máximo dentro de um vetor. Com isso, os resultados serão relacionados aos conceitos de análise assintótica, com o intúito último de consolidar os conceitos discutidos dentro de sala, bem como aprofundar o conhecimento geral do conteúdo.
</p>

## Arquivos

## src
- ``` main.cpp ```: Arquivo principal;
- ``` MinMax.hpp ```: Assinatura das funções relacionadas à manipulação dos vetores;
- ``` MinMax.cpp ```: Implementação das funções relacionadas à manipulação dos vetores.

## Funções
- ```MinMax01(const std::vector<int>& meuVetor)```: Essa função implementa o algorítmo para o MinMax 1, executa o algorítmo e calcula o tempo de execução, que é retornado pela função.
- ```MinMax02(const std::vector<int>& meuVetor)```: Essa função implementa o algorítmo para o MinMax 2, executa o algorítmo e calcula o tempo de execução, que é retornado pela função.
- ```MinMax03(const std::vector<int>& meuVetor)```: Essa função implementa o algorítmo para o MinMax 3, executa o algorítmo e calcula o tempo de execução, que é retornado pela função.
- ```ProximaGeracao(int** JogodaVida, int Tamanho, int GeracaoAtual)```: Essa função recebe a matriz já preenchida, seu tamanho e a geração atual. Com esses dados a função cria uma matriz auxiliar, e analisa o desenvolvimento do jogo naquela geração, após isso a matriz auxiliar passará a ser a original, e a matriz original será colocada no arquivo geracoes.mps, então sera destruída para evitar vazamento de memória. Por fim a nova matriz original é retornada à main.
- ```DestrutorMatriz(int** JogodaVida, int Tamanho, int ExibirMensagem)```: Essa função destrói a matriz que recebe, então dependendo do valor de "ExibirMensagem", uma mensagem sinalizando a destruição da matriz será mostrada no Terminal.
- ```Limpar_geracoesmps()```: Essa função limpa o arquivo geracoes.mps para prepará-lo para ser escrito com as gerações da próxima matriz disponível no input.mps, independente se houve mudança ou não.
- ```Executar()```: Essa função apenas executa o que estaria originalmente na Main.cpp. Nela está explicito a ordem de chamadas e funcionamento do programa.

## Resolução do Problema
<p aligh='justify'>
O primeiro passo para a resolução do problema é identificar o tamanho da matriz de maneira correta. Nas instruções do problema, sabe-se que a matriz sempre será quadrática, e seu tamanho corresponderá ao número na primeira linha do arquivo de texto input.mps. Feito isso, o programa alocará espaço para a matriz NxN. É importante dizer que, na implementação, a fim de evitar problemas futuros, a matriz criada tem tamanho N+2xN+2. Isso foi feito para que a matriz pudesse ser cercada com um caractér escolhido e, dessa forma, quando analisando cada posição P(ij) da matriz, não fosse acessada uma posição de memória não alocada anteriormente. Após criada a matriz, o programa abrirá novamente o arquivo de entrada input.txt e copiará a matriz pré-existente nela para a matriz criada pelo programa. Esse também será o último acesso ào arquivo de texto input.mps.
</p>

<p align='justify'> 
Feito isso, agora serão executadas sequências lógicas que seguem as regras estipuladas pelo exercício. Essa lógica determinara como será o proximo estado da matriz, que será armazenada em uma matriz igual a anterior, denominada aux ( auxiliar ). Após isso, a matriz original será escrita no arquivo de texto Geracoes.mps, e a matriz original passará a ser a matriz auxiliar, e a original será destruída para evitar vazamento de memória. O programa executará esse mesmo processo X vezes, onde X representa o número de interações pedidas pelo usuário. Depois de todas as interações serem feitas, o programa então destruirá a matriz final e exibirá uma mensagem indicando o término de suas operações.
</p>

## Resultados
- Arquivo de Entrada ``` input.mps ```:
<p align="center"><img src="imgs/Input1.png"></p>
<p align="center"><img src="imgs/Input2.png"></p>

- Resultados no ``` Geracoes.mps ```:
<p align="center"><img src="imgs/Geracoes1.png"></p>
<p align="center"><img src="imgs/Geracoes2.png"></p>

## Conclusão
<p align="justify">
O exercício induz a boas práticas de programação e auxilia o programador na lógica de funcionamento de uma matriz no ambiente da máquina. Além disso, embora a lógica no exercício pareça bem simplória, quando uma matriz muito grande é usada, diferentes problemas podem ser avaliados, tais como o tempo de execução muito longo, problemas na leitura do arquivo e, também, na estruturação do programa. Uma sequência muito longa de if's como foi feita no método ProximaGeração, por exemplo, é muito custosa para a máquina e torna o tempo de execução muito longo, além de fornecer margem para que o programador acabe cometendo erros em cascata, que no fim podem arruinar completamente a execução do programa.. Portanto, esse exercício é uma boa forma de treinar diferentes aspectos que envolvem a programação, induzindo à boas práticas e, também, a um pensamento mais estruturado sobre como o programa será feito.
</p>

## Referências
O arquivo makefile usado foi retirado de um dos projetos do professor Michel Pires, segue o link para o seu github:
<p>
DA SILVA, Michel Pires. Página Principal GitHub. <a> https://github.com/mpiress </a>. Acesso em 16 de Março de 2024.
</p>

## Compilação e Execução

 Especificações da máquina em que o código foi rodado:
  * Processador Intel Core i5, 10th Gen;
  * Sistema Operacional Windows 11 Home;
  * Terminal do WSL: Ubuntu 22.04.5;
  * 16GB de RAM.
* | Comando                |  Função                                                                                           |                     
  | -----------------------| ------------------------------------------------------------------------------------------------- |
  |  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
  |  `make`                | Executa a compilação do programa utilizando o g++, e o resultado vai para a pasta build           |
  |  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |

  ## Contato
<p align='justify'> Jader Oliveira Silva </p>
✉️ <i>jaderoliveira28@gmail.com</i>

  
