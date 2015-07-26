#include <iostream>

int simple(int n)
{
	if(n<=1) return 1;
	else
	{
		if(n%2) return (simple((n-1)/2) - simple((n-3)/2));
		else return (simple(n/2) + simple(n/2-1));
	}
}

int main(int argc, char** argv)
{
	int n;
	std::cin >> n;
	std::cout << simple(n) << std::endl;
	return 0;
}
