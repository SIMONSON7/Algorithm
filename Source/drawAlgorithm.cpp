//*****************************************************************************
//
//! \file drawAlgorithm.cpp
//
//! \brief 
//		�� n �������г�ȡ 4 �Σ��ж��Ƿ��г�ȡ 4 �κ�Ϊ m �Ľ�;
//		1 < n < 10^3;	
//		1 < m < 10^8;
//		���磺
//		n = 3 ; m = 10; v = {1, 1, 3, 5}
//
//! \author qiu_hao
//! \date 2019/05/20 10:33.pm
//
//*****************************************************************************
#include <cstdio>

#define MAX_CNT 100

void sort()
{

}

bool binarySearch(int _val)
{

	return false;
}

int main(int argc, char * argv[])
{
	int n, m, v[MAX_CNT];
	bool res = false;

	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &v[i]);
	}

	sort();

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				if (binarySearch(m - (v[i] + v[j] + v[k])))
				{
					res = true;
					break;
				}
			}
		}
	}

	return 0;
}