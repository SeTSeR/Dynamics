#include <iostream>

double fibonacci(int n)
{
	if(n<=1) return (n+1);
	else
	{
		double fib1 = 1;
		double fib2 = 2;
		double tmp = 0;
		for(double i = 2; i<=n; i++)
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
