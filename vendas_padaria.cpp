#include <iostream>
using namespace std;

int main()
{
    int qntPao, qntBroa;
    float valorPao=0.12, valorBroa=1.50;
    float totalDia,valorPoupanca, totalPao, totalBroa;
    
    cout << "Insira a quantidade de pães vendidos:\n";
    cin >> qntPao;
    
    cout << "Insira a quantidade de broas vendidas:\n";
    cin >> qntBroa;
    
    totalPao = qntPao*valorPao;
    totalBroa = qntBroa*valorBroa;
    
    totalDia = totalPao+totalBroa;
    valorPoupanca = totalDia*0.10;
    
    cout << "O total recebido do dia foi R$" << totalDia;
    cout << "\n O valor a ser guardado é R$" <<valorPoupanca;

    return 0;
}