// zadacha8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stack>
using namespace std;

void dfs(int v)
{
    stack<int> stack;

    stack.push(v);

    while (!stack.empty())
    {
        v = stack.top();
        stack.pop();

        if (used[v]) {
            continue;
        }

        used[v] = true;
        cout << v << "\n";

        for (auto i = first; i != last; i++)
        {
            int u = *i;
            if (!used[u]) {
                stack.push(u);
            }
        }
    }
}
