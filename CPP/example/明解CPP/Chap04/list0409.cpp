// 顯示bool型態的值

#include <iostream>
using namespace std;

int main()
{
	cout << true << ' ' << false << '\n';

	cout << boolalpha;				// 以英文字母形式輸出布林值�t
	cout << true << ' ' << false << '\n';

	cout << noboolalpha;			// 以數值形式輸出布林值
	cout << true << ' ' << false << '\n';

	return 0;
}
