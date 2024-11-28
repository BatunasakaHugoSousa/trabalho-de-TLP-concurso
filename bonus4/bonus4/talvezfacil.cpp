#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int Q, P, V = 0, D = 0, i, A[500], T = 0, OT, D500 = 0, D200 = 0, D100 = 0, D50 = 0, D20 = 0, D10 = 0, D5 = 0, D2 = 0, D1 = 0;
	cout << ("qual é o peso maximo?\ntem de ser em gramas\n");
	cin >> P;
	cout << ("quantas notas/moedas tens?(não é o valor)\n");
	cin >> Q;
	cout << ("quanl tipo de notas/moedas são?\n500, 200, 100, 50, 20, 10, 5 ou moedas de 2 ou 1\n");
	for (i = 0; i < Q; i++)
	{
		cin >> A[i];
		T = T + A[i];
	}
	for (i = 0; i < Q; i++)
	{
		if (A[i] == 500)
		{
			V = V + A[i];
			D = D + 1;
			D500 = D500 + 1;
		}
		if (A[i] == 200)
		{
			V = V + A[i];
			D = D + 1;
			D200 = D200 + 1;
		}
		if (A[i] == 100)
		{
			V = V + A[i];
			D = D + 1;
			D100 = D100 + 1;
		}
		if (A[i] == 50)
		{
			V = V + A[i];
			D = D + 1;
			D50 = D50 + 1;
		}
		if (A[i] == 20)
		{
			V = V + A[i];
			D = D + 1;
			D20 = D20 + 1;
		}
		if (A[i] == 10)
		{
			V = V + A[i];
			D = D + 1;
			D10 = D10 + 1;
		}
		if (A[i] == 5)
		{
			V = V + A[i];
			D = D + 1;
			D5 = D5 + 1;
		}
		if (A[i] == 2)
		{
			V = V + A[i];
			D = D + 5;
			D2 = D2 + 1;
		}
		if (A[i] == 1)
		{
			V = V + A[i];
			D = D + 5;
			D1 = D1 + 1;
		}
	}
	if (D > P)
	{
		if (D1 > 0 && D > P)
		{
			while (D > P && D1 > 0)
			{
				D = D - 5;
				D1 = D1 - 1;
				T = T - 1;
			}
		}
		if (D2 > 0 && D > P)
		{
			while (D > P && D2 > 0)
			{
				D = D - 5;
				D2 = D2 - 1;
				T = T - 2;
			}
		}
		if (D5 > 0 && D > P)
		{
			while (D > P && D5 > 0)
			{
				D = D - 1;
				D5 = D5 - 1;
				T = T - 5;
			}
		}
		if (D10 > 0 && D > P)
		{
			while (D > P && D10 > 0)
			{
				D = D - 1;
				D10 = D10 - 1;
				T = T - 10;
			}
		}
		if (D20 > 0 && D > P)
		{
			while (D > P && D20 > 0)
			{
				D = D - 1;
				D20 = D20 - 1;
				T = T - 20;
			}
		}
		if (D50 > 0 && D > P)
		{
			while (D > P && D50 > 0)
			{
				D = D - 1;
				D50 = D50 - 1;
				T = T - 50;
			}
		}
		if (D100 > 0 && D > P)
		{
			while (D > P && D100 > 0)
			{
				D = D - 1;
				D100 = D100 - 1;
				T = T - 100;
			}
		}
		if (D200 > 0 && D > P)
		{
			while (D > P && D200 > 0)
			{
				D = D - 1;
				D200 = D200 - 1;
				T = T - 200;
			}
		}
		if (D500 > 0 && D > P)
		{
			while (D > P && D500 > 0)
			{
				D = D - 1;
				D500 = D500 - 1;
				T = T - 500;
			}
		}
		OT = T;
	}
	else
	{
		OT = T;
	}
	if (P <= 4)
	{
		cout << "não tens espaço suficiente";
	}
	else
	{
		cout << "podes depositar " << OT << " de dinheiro e o dinheiro é:\n";
		if (D500 > 0)
		{
			cout << "500 " << D500 << "\n";
		}
		if (D200 > 0)
		{
			cout << "200 " << D200 << "\n";
		}
		if (D100 > 0)
		{
			cout << "100 " << D100 << "\n";
		}
		if (D50 > 0)
		{
			cout << "50 " << D50 << "\n";
		}
		if (D20 > 0)
		{
			cout << "20 " << D20 << "\n";
		}
		if (D10 > 0)
		{
			cout << "10 " << D10 << "\n";
		}
		if (D5 > 0)
		{
			cout << "5 " << D5 << "\n";
		}
		if (D2 > 0)
		{
			cout << "2 " << D2 << "\n";
		}
		if (D1 > 0)
		{
			cout << "1 " << D1 << "\n";
		}
	}
}