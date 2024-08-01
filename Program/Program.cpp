#include <iostream>

using namespace std;

#define SIZE 6
#define INFINITY 1000000

class Graph
{
private:
	int weghit[SIZE][SIZE] =
	{
		{0, 2, 5, 3, INFINITY, INFINITY},
		{2, 0, 7, INFINITY, INFINITY, 9},
		{5, 7, 0, 1, 5, 2},
		{3, INFINITY, 1, 0, 7, INFINITY},
		{INFINITY, INFINITY, 2, 7, 0, 2},
		{INFINITY, 9, 5, INFINITY, 2, 0},
	};
	bool visited[SIZE];
	int distance[SIZE];
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = 0;
		}
	}
};
int main()
{
#pragma region 다익스트라 알고리즘
	// 시작점으로부터 모든 노드까지의 최소 거리를 구해주는
	// 알고리즘 입니다.

	// 1. distance 배열에 weiht[시작점 노드]의 값들로
	//     초기화합니다.

	// 2. 시작점을 방문 처리합니다.
	
	// 3. ditance 배열에서 최소 비용 노드를 찾고 방문 처리합니다.
	//     단, 이미 방문한 노드는 제외합니다.

	// 4. 최소 비용 노드를 가져갈 지 고민해서 distance 배열을 갱신합니다.
	//     단, 이미 방문한 노드는 제외합니다.

	// 5. 모든 노드를 방문할 때까지 3번 ~ 4번을 반복합닌다.

	// 6. 
#pragma endregion

	return 0;
}