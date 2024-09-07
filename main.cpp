#include <iostream>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M)
    {
        int sum = N;
        int i = 0;
        for (i = 1; sum <= M; i++)
        {
            sum += N+i;
        }
        cout << i << endl;
    }
}
