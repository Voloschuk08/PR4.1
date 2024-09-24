#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
	// перший спосіб 
	int N;
	double i;
	int k;
	double S;
	cout << "N = "; cin >> N;
	cout << "k = "; cin >> k;
	S = 0;
	i = k;
	while (i <= N)
	{
		S += (i * i) / (k * k + N * N);
		i++;
	}
	cout << "S = " << S << endl;
	// другий спосіб 
	S = 0;
	i = k;
	do {
		S += (i * i) / (k * k + N * N);
		i++;
	} while (i <= N);
	cout << "S = " << S << endl;
	// третій спосіб 
	S = 0;
	for (i = k; i <= N; i++)
	{
		S +=(i * i) / (k * k + N * N);
	}
	cout << "S = " << S << endl;
	// четвертий спосіб 
	S = 0;
	for (i = N; i >= k; i--)
	{
		S +=(i * i) / (k * k + N * N);
	}
	cout << "S = " << S << endl;

	return 0;
}