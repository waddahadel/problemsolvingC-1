// Output file will be a.out in both cases
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define debug(x) \
    (cerr << #x << ": " << (x) << endl)

const int SIZE = 11;

int main()
{

    vector<vector<int>> joy(SIZE, vector<int>(SIZE));
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            cin >> joy[i][j];
        }
    }

    vector<int> wineAssignment(SIZE);
    for (int i = 0; i < SIZE; ++i)
    {
        wineAssignment[i] = i;
    }
    int maxJoy = 0;
    do
    {
        int totalJoy = 0;
        for (int i = 0; i < SIZE; ++i)
        {
            totalJoy += joy[i][wineAssignment[i]];
        }
        maxJoy = max(maxJoy, totalJoy);
    } while (next_permutation(wineAssignment.begin(), wineAssignment.end()));

    cout << maxJoy << endl;

    return 0;
}