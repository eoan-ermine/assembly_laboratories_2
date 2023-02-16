#include <iostream>

using namespace std;

extern "C" int IntegerAddSub_(int a, int b, int c, int d);

static void PrintResult(const char* msg, int a, int b, int c, int d, int result) {
	cout << msg << '\n';

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "c = " << c << '\n';
	cout << "d = " << d << '\n';

	cout << "result = " << result << "\n\n";
}

int main() {
	{
		int a = 10, b = 20, c = 30, d = 18;
		int result = IntegerAddSub_(a, b, c, d);
		PrintResult("Пример 1", a, b, c, d, result);
	}
	{
		int a = 101, b = 34, c = -190, d = 25;
		int result = IntegerAddSub_(a, b, c, d);
		PrintResult("Пример 2", a, b, c, d, result);
	}
}