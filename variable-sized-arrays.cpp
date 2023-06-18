#include <iostream>
#include <cstdio>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int queries;
    int index = 0; 

    std::cin >> n >> queries;

    vector<vector<int>> arrays(n);
    vector<int> myArray(queries);

    for (int i = 0; i < n; i++) {
        int k; // Length of the current array
        std::cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; j++) {
            std::cin >> arrays[i][j]; // Read the elements of the current array
        }
    }

    for (int i = 0; i < queries; i++) {
        int x, y;
        std::cin >> x >> y;
        myArray[index] = arrays[x][y];
        index++;
    }

    for (int i = 0; i < queries; i++) {
        std::cout << myArray[i] << std::endl;
    }

    return 0;
}