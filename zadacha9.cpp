// zadacha9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <queue>
#include <fstream> 

using namespace std;

vector<vector<int>> g;
vector<vector<int>> t;

int n;//число вершин
int m;//число ребер
vector <int> color;//цвет 

int Svaznost()
{
    int c = 1;//начальный цвет

    for (int i = 0; i < m; i++)//окрашиваем вершины
    {
        if ( color[t[i][0]-1] == 0 )
        {
            color[t[i][0] - 1] = c;
            color[t[i][1] - 1] = c;

            for (int j = 0; j < m; j++)
            {
                if ((t[j][0] == t[i][0]) || (t[j][0] == t[i][1]) || (t[j][1] == t[i][0]) || (t[j][1] == t[i][1]))
                {
                    color[t[j][0] - 1] = c;
                    color[t[j][1] - 1] = c;
                }
            }

            for (int j = 0; j < m; j++)
            {
                if (color[t[j][0] - 1] == c)
                    color[t[j][1] - 1] = c;
                if (color[t[j][1] - 1] == c)
                    color[t[j][0] - 1] = c;
            }
            c++;
        }
    }
    
    c--;

    for (int i = 0; i < n; i++)//изолированные
    {
        if (color[i] == 0)//у вершины пары не нашлось
        {
            c++;
        }
    }

    return c;
}

int main()
{
    vector <int> v;

    ifstream fin("input.txt", ifstream::in);

    if (fin)
    {
        fin >> n >> m;
        int a;

        for (int j = 0; j < m; j++)//считываем граф
        {
            for (int i = 0; i < 2; i++)
            {
                fin >> a;
                v.push_back(a);
            }
            t.push_back(v);
            v.clear();
        }

    }

    for (int i = 0; i < m; ++i)//показать исходные данные
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << t[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    color.resize(n);

    cout << Svaznost();
}
