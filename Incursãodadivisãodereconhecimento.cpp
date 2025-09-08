Incursão da Divisão de Reconhecimento
A Divisão de Reconhecimento se prepara para mais
uma incursão além das muralhas em uma região de
interesse infestada de titãs. Como em toda boa incursão, a
preparação é algo vital para o sucesso e controle de
eventuais baixas. Para isso o comandante Erwin Smith te
incumbiu do processo de alocação de tropas, considerando a
quantidade de inimigos na região e o tempo máximo de
exposição das tropas.
Sabendo que o tempo máximo de exposição das
tropas nessa missão é de 1 hora e que Levi Ackerman
também foi alocado para a incursão, implemente um
programa que dado um número inteiro X de titãs, faz uma
alocação de um número inteiro Y de tropas que deverão
acompanhar Levi.
Considere as seguintes estatísticas:
(Levi Ackerman -> Mata 20 titãs por hora)
(Soldado comum -> Mata 5 titãs por hora)
Entrada
A entrada possui um único número inteiro ‘N’ (20 ≤ N ≤ 200), que representa
a quantidade de titãs na região, e será sempre um múltiplo de 5.
Saída
A saída consiste em um número inteiro X que representa a quantidade de
soldados comuns necessários para eliminar todos os titãs durante 1 hora de missão.
Entrada Saída
100 16
30 2
20 0


#include <iostream>
using namespace std;
int main()
{
    int N;
  cin >> N;
  // Levi mata 20 por hora
int levi = N - 20;
  // soldado mata 5 por hora
int soldado = levi /5;
  cout << soldado << endl;

}
