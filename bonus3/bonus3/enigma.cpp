#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, C, E[100], F[100], M[100], N[100];
	cout << ("quantos cenarios há?\n");
	cin >> C;
	for (i = 0; i < C; i++)
	{
		if (C == 1)
		{
			cout << "em que horas ocorreu o crime?\nquando começou e quando acabou\n";
			cin >> E[i] >> F[i];
			cout << "em que horas o suspeito teve num local diferente do crime\nquando entrou e quando saio\n";
			cin >> M[i] >> N[i];
		}
		else
		{
			cout << "em que horas ocorreu o crime?\nquando começou e quando acabou(" << i + 1 << "/" << C << ")\n";
			cin >> E[i] >> F[i];
			cout << "em que horas o suspeito teve num local diferente do crime\nquando entrou e quando saio(" << i + 1 << "/" << C << ")\n";
			cin >> M[i] >> N[i];
		}
	}
	for (i = 0; i < C; i++)
	{
		if (M[i] < E[i] && M[i] < F[i] && N[i] > E[i] && N[i] > F[i])
			cout << ("com alibi!!\n");
		else
		{
			if (E[i] < M[i] && E[i] < N[i] && F[i] > M[i] && F[i] > N[i])
				cout << ("sem alibi!!\n");
			else
			{
				if (E[i] < M[i] && E[i] < N[i] && F[i] < M[i] && F[i] < N[i])
					cout << ("sem alibi!!\n");
				else
				{
					if (M[i] < E[i] && M[i] < F[i] && N[i] < E[i] && N[i] < F[i])
						cout << ("sem alibi!!\n");
					else
					{
						if (M[i] == E[i] && M[i] == F[i] && N[i] == E[i] && N[i] == F[i])
							cout << ("com alibi!!\n");
						else
						{
							if (M[i] < E[i] && M[i] < F[i] && E[i] < N[i])
								cout << ("sem alibi!!\n");
							else
							{
								if (E[i] < M[i] && E[i] < N[i] && N[i] < F[i])
									cout << ("sem alibi!!\n");
								else
								{
									if (E[i] == M[i] && F[i] < N[i])
										cout << ("com alibi!!\n");
									else
									{
										if (E[i] < M[i] && F[i] == N[i])
											cout << ("sem alibi!!\n");
										else
										{
											if (E[i] == M[i] && F[i] > N[i])
												cout << ("sem alibi!!\n");
											else
											{
												if (E[i] > M[i] && F[i] == N[i])
													cout << ("com alibi!!\n");
												else
													cout << ("ERRO\n");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}