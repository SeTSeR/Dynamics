#include <iostream>

int difficult(int n)
{
	if(n<=1) return 1;
	else
	{
		if(n%2) return (difficult(n+1) + difficult((n-1)/2));
		else return (difficult(n/2) + 1);
	}
}

int main(int argc, char** argv)
{
	int n;
	std::cin >> n;
	std::cout << difficult(n) << std::endl;
	return 0;
}
