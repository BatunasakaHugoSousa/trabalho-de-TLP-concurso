#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int P, PL, T, D, V;
	cout << ("escreva 1 ou 2 para transporte(X ou XL)\nescreva o tempo da viagem\nescreva a distancia da viagem\npodes usar spa�os\n");
	cin >> V >> T >> D;
	switch (V) {
	case 1:
		if (T < 0 || T > 10000)
		{
			cout << ("tempo muito grande ou muito pequeno!!");
			break;
		}
		if (D < 0 || D > 5000)
		{
			cout << ("distancia muito grande ou muito pequena!!");
			break;
		}
		P = T * 10 + D * 80 + 100;
		if (P < 250)
			P = 250;
		cout << "o pre�o � " << P << " centimos";
		break;
	case 2:
		if (T < 0 || T > 10000)
		{
			cout << ("tempo muito grande ou muito pequeno!!");
			break;
		}
		if (D < 0 || D > 5000)
		{
			cout << ("distancia muito grande ou muito pequeno!!");
			break;
		}
		PL = T * 15 + D * 120 + 150;
		if (PL < 350)
			PL = 350;
		cout << "o pre�o � " << PL << " centimos";
		break;
	default:
		cout << ("op��o invalida");
		break;
	}
}