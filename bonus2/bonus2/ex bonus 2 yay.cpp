#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int N, i, B = 0, Q[1000], C = 0, D;
	char A;
	cout << ("dá me o número de gavetas do armario\n");
	cin >> N;
	cout << ("dá me o tipo de gaveta\n# para fechada ou o para aberta\n");
	for (i = 0; i < N; i++)
	{
		cin >> A;
		switch (A) {
		case '#':
			Q[i] = 1;
			break;
		case 'o':
			Q[i] = 2;
			break;
		default:
			cout << ("tem de ser # ou o!!");
			break;
		}
	}
	for (i = 0; i < N; i++)
	{
		if (Q[i] == 2)
			C = C + 1;
	}
	for (i = 0; i < N; i++)
	{
		if (Q[i] == 1)
		{
			for (i = 0; i < N; i++)
			{
				if (Q[i - 1] == 2)
				{
					C = C + 1;
				}
			}
		}
	}
	D = N - C;
	cout << "tens " << D << " gavetas que não podes aceder";
}