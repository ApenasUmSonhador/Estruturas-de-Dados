#include <iostream>
using namespace std;

int binary_search(int vetor[], int target, int r, int l = 0, int i = 0)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (vetor[mid] == target)
        {
            return mid;
        }

        if (vetor[mid] > target)
        {
            return binary_search(vetor, target, mid - 1, l, i);
        }
        return binary_search(vetor, target, r, mid + 1, i + mid + 1);
    }
    return -1;
}

int main()
{
    int n, target;
    cin >> n;
    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    cin >> target;
    int result = binary_search(vetor, target, n - 1);
    cout << result << endl;
    return 0;
}