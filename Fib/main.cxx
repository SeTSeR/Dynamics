#include <iostream>

int fibonacci(int n)
{
	if(n<=1) return n;
	else
	{
		int fib1 = 0;
		int fib2 = 1;
		int tmp = 0;
		for(int i = 2; i<=n; i++)
		{
			tmp = fib1;
			fib1 = fib2;
			fib2 += tmp;
		}
		return fib2;
	}
}

int main(int argc, char** argv)
{
	int x;
	std::cin >> x;
	std::cout << fibonacci(x) << std::endl;
}
