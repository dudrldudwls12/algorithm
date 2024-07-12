﻿#include <iostream>



using namespace std;

#define SIZE 5

int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘입니다.

	int list[SIZE] = { 13, 8, 97, 1, 36 };
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; (SIZE - i) - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				std::swap(list[j], list[j + 1]);
			}
		}
	}
	for (const int& element : list)
	{
		cout << element << "  ";
	}
#pragma endregion

	return 0;
}
