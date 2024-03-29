/*
链接：https://www.nowcoder.com/questionTerminal/51dcb4eef6004f6f8f44d927463ad5e8
来源：牛客网

小Q得到一个神奇的数列: 1, 12, 123,...12345678910,1234567891011...。
并且小Q对于能否被3整除这个性质很感兴趣。
小Q现在希望你能帮他计算一下从数列的第l个到第r个(包含端点)有多少个数可以被3整除。

输入描述:
输入包括两个整数l和r(1 <= l <= r <= 1e9), 表示要求解的区间两端。

输出描述:
输出一个整数, 表示区间内能被3整除的数字个数。
示例1
输入
2 5
输出
3
说明
12, 123, 1234, 12345...
其中12, 123, 12345能被3整除。
*/ 

#include <iostream>
#include <string>
using namespace std;

int main() {
	int l, r, ans;
	cin >> l >> r;
	ans = r - l + 1;
	while(l <= r) {
		if(l % 3 == 1) {
			l += 3;
			ans--;
		}
		else {
			l += 1;
		}
	}
	cout << ans;
    return 0;
}
