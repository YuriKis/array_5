#include <iostream>

using namespace std;

void put_snake (int n, int m, int Snake[4][5])
{
    int i=0, j, k = 0;
    while (i < n*m)
    {
        k++;
        for (j=m-k; j>=k-1; j--)   //верхн€€ строка - влево
        {
            i++;
            Snake[k-1][j] = i;
        }
        for (j=k; j<=n-k; j++)     //лева€ колонка - вниз
        {
            i++;
            Snake[j][k-1] = i;
        }
        for (j=k; j<=m-k; j++)     //нижний столбец - вправо
        {
            i++;
            Snake[n-k][j] = i;
        }
        for (j=n-k-1; j>=k; j--)   //права€ колонка - вверх
        {
            i++;
            Snake[j][m-k] = i;
        }
    }
}

int main()
{
    int n = 4, m = 5;
    int Snake[4][5];

    put_snake (n, m, Snake);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << Snake[i][j] << "\t";
        }
        cout << endl;
    }
}
