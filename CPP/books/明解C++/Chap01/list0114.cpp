// 讀入名字後問好

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string name;		// 名字

	cout << "您的名字是：";		// 要求輸入名字
	cin >> name;					// 讀入名字 (忽略空白)

	cout << "您好!" << name << "先生。\n";		// 問好

	return 0;
}
