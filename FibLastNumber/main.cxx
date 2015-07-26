#include <iostream>

int fibonaccis[22];

int fibonacci(int n)
{
	if(n<=1) return 1;
	else
	{
		int fib1 = 1;
		int fib2 = 1;
		int tmp1 = 0;
		int i = 2;
		fibonaccis[0] = 1;
		fibonaccis[1] = 1;
		for(; i<22; i++)
		{
			tmp1 = fib1;
			fib1 = fib2;
			fib2 = (tmp1 + fib2)%10;
			fibonaccis[i] = fib2;
		}
		return fibonaccis[(n%22)];
	}
}

int main(int argc, char** argv)
{
	int x;
	std::cin >> x;
	std::cout << fibonacci(x) << std::endl;
}
