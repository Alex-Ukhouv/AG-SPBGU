// graf.parasoch.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <queue>
#include <fstream> 

using namespace std;

vector<vector<int>> t;

//int n;//число вершин
int m;//число ребер
int s;//start
int finish;//stop


int n, k;
vector<vector<int>>g;
vector <bool> used;
vector <int> mt;

bool khun(int V) {
    if (used[V]) {
        return false;
    }
    used[V] = true;


    for (size_t i = 0; i < g[V].size(); ++i) {
        int to = g[V][i];
        if (mt[to] == -1 || khun(mt[to])) {
            mt[to] = V;
            return true;
        }
    }

    return false;
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

        fin >> s;//читаем старт
        fin >> finish;//читаем финиш
        s--;
        finish--;//а потому, что считаем с 0
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

    g.resize(n);
    for (int i = 0; i < n; i++) //Создаем матрицу смежности
        g[i].resize(n);

    for (int i = 0; i < m; ++i)//преобразуем в матрицу смежности
    {
        g[t[i][0] - 1][t[i][1] - 1] = 1;
        g[t[i][1] - 1][t[i][0] - 1] = 1;
    }

    for (int i = 0; i < n; ++i)//показать матрицу смежности
    {
        for (int j = 0; j < n; ++j)
        {
            cout << g[i][j] << " ";
        }
        cout << "\n";
    }

    k = m;

    mt.assign(k, -1); // mt[i] != -1

    for (int V = 0; V < n; ++V) {
        used.assign(n, false);
        khun(V);
    }

    for (int i = 0; i < k; ++i) {
        if (mt[i] != -1) {
            cout << mt[i] + 1 << i + 1;
        }

    }
}

