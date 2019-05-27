//*****************************************************************************
//
//! \file SarumanArmy.cpp
//
//! \brief 
//
//! \author qiu_hao
//! \date 2019/05/27 11:45.pm
//
//*****************************************************************************
#include <cstdio>

#define MAX_CNT 1000

int R;
int N;

int main(int argc, char * argv[])
{
	int marked[MAX_CNT];

	int i = 0;
	while (i < N)
	{
		int s = marked[i++];
		while (i < N && marked[i] <= s + R)
		{
			++i;
		}

		int p = marked[i - 1];
		while (i < N && marked[i] <= p + R)
		{
			++i;
		}
	}

	return 0;
}