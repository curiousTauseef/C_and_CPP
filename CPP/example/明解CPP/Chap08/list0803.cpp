// ―眔皚ぇ程(ㄏノㄧ计絛セ)

#include <iostream>
using namespace std;

//--- 肚じ计nType篈皚x程ㄧ计絛セ ---//	 
template <class Type>
Type maxof(const Type x[], int n)
{
	Type max = x[0];
	for (int i = 1; i < n; i++)
		if (x[i] > max)
			max = x[i];
	return max;
}

int main()
{
	const int isize = 8;
	int ix[isize];

	// 俱计皚程
	cout <<"叫块"<< isize << "俱计\n";
	for (int i = 0; i < isize; i++) {
		cout << i + 1 << ":";
		cin >> ix[i];
	}
	cout << "程" << maxof(ix, isize) << "\n\n";

	const int dsize = 5;
	double dx[dsize];

	// 龟计皚程
	cout <<"叫块"<< dsize << "龟计\n";
	for (int i = 0; i < dsize; i++) {
		cout << i + 1 << ":";
		cin >> dx[i];
	}
	cout << "程" << maxof(dx, dsize) << "\n";

	return 0;
}
