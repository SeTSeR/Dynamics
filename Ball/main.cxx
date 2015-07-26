#include <iostream>

int ball(int n)
{
	if(n==1) return 1;
	else if(n<=3) return (n-1);
	else
	{
		int ball1, ball2, ball3, tmp1, tmp2;
		ball1 = 1;
		ball2 = 1;
		ball3 = 2;
		tmp1 = 0;
		tmp2 = 0;
		for(int i = 4; i<=n; i++)
		{
			tmp1 = ball1;
			tmp2 = ball2;
			ball1 = ball2;
			ball2 = ball3;
			ball3 += (tmp1 + tmp2);
		}
		return ball3;
	}
}

int main(int argc, char** argv)
{
	int n;
	std::cin >> n;
	std::cout << ball(n+1) << std::endl;
}
