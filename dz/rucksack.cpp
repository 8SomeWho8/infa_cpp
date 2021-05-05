/*
#include <iostream>
#include <cmath>

using namespace std;

int dp[101][101]; // ������ ������������ ��������, ��� ������ ������ i - ���������� ������ i ��������� �� ������, ��������������� � ������,
// � ������ ������ w - ������������ ����������� �������. ����������� ���������� ����� ������� ������� ������ ������

void rucksack(int dp[101][101], int i, int w, int* P, int* W)
{
    if (i == 0)
        dp[i][w] = 0;
    else if (W[i-1] > w) // ���� ����� ������� �������������� �� ������� � ���������������� �������
    {
        if (dp[i-1][w] == -1)
            rucksack(dp, i-1, w, P, W);
        dp[i][w] = dp[i-1][w];
    }
    else
    {
        if (dp[i-1][w] == -1)
            rucksack(dp, i-1, w, P, W);
        if (dp[i-1][w - W[i-1]] == -1)
            rucksack(dp, i-1, w - W[i-1], P, W);
        dp[i][w] = max(dp[i-1][w], dp[i-1][w - W[i-1]] + P[i-1]); // ��������, �������� �� i-�� ������� � ������ ��� ���, ���������, ��� ��������:
        // �� ������ ��� ������ ��� ��������, ������� ���-�� ���
    }
};

int main()
{
    int N, W;
    cin >> N >> W;
    int* w = new int [N];
    int* p = new int [N];
    for (int i = 0; i < N; i++)
        cin >> w[i] >> p[i];

    for (int i = 0; i < N+1; i++)
        for (int j = 0; j < W+1; j++)
            dp[i][j] = -1;

    rucksack(dp, N, W, p, w);

    cout << dp[N][W];
}
*/
