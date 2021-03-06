// 日期類別Date（第3版B：介面部分)

#if !defined(___Class_Date)
	#define	 ___Class_Date

#include <string>
#include <iostream>
using namespace std;

//===== 日期類別 =====//
class Date {
	int	year;		// 西元年
	int	month;		// 月
	int	day;		// 日

public:
	Date();					// 預設建構子
	Date(int y, int m = 1, int d = 1);		// 建構子

	int Year()	const { return year; }		// 傳回年
	int Month()	const { return month; }	// 傳回月
	int Day()	const { return day; }		                // 傳回日
	int DayOfWeek() const;			// 傳回星期 
	string to_string() const;			// 以字串傳回

	int CompY(int y) const { return y - year;  }	// 傳回年的差
	int CompM(int m) const { return m - month; }	// 傳回月的差
	int CompD(int d) const { return d - day;   }	// 傳回日的差
};

ostream& operator<<(ostream& s, const Date& x);		// 插入子

#endif
