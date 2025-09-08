Raffting nas cataratas
Praticar raffting em uma das maravilhas da natureza é uma experiência
inesquecível. É esse o relato de milhares de turistas que visitaram as Cataratas do Iguaçu.
Lá existe toda uma estrutura para receber os turistas que tem coragem de vivenciar o
passeio por algumas cachoeiras e corredeiras. O esporte é radical e é feito utilizando-se um
bote inflável em que pode ir um número variado de pessoas. Em cada bote sempre temos o
instrutor e o guia do passeio, dois profissionais responsáveis pela segurança dos turistas no
bote. E por mais incrível que possa parecer, muitos já morreram praticando o raffting usando
um barril para descer as famosas Cataratas do Niágara.
O Parque Nacional do Iguaçu é uma das áreas mais turísticas do Brasil, visitado por
milhões de turistas anualmente. O diretor do parque quis saber a quantidade de turistas
que desceram as corredeiras em um intervalo de tempo, então ele contou em 4 viagens a
quantidade de pessoas nos botes. Assim, dada a quantidade de pessoas nos 4 botes, diga
quantos turistas desceram as corredeiras.
Entrada
A entrada é composta por 4 inteiros, ‘Q1’, ‘Q2’, ‘Q3’ e ‘Q4’ (3 <= Q1, Q2, Q3, Q4 <=
20), representando a quantidade de pessoas que estavam nos botes em cada uma das 4
viagens.
Saída
Na saída será apresentada a quantidade total de turistas que desceram as
corredeiras durante as 4 viagens.
Entrada Saída
10 15 8 7 32
3 6 9 12 22
3 3 3 3 4


// C++ Template
#include <iostream>
using namespace std;

int main() {
    int Q1, Q2, Q3, Q4;

    // Leitura das quantidades de turistas nos botes
    cin >> Q1 >> Q2 >> Q3 >> Q4;

    // Soma total dos turistas, menos o instrutor e o guia em cada viagem, como sao 4 viagens subtrai por 8.
    int total = Q1 + Q2 + Q3 + Q4;
    total = total - 8;

    // Impressão do resultado
    cout << total << endl;

    return 0;
}
