#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        for (j; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

//         *
//       * *
//     * * *
//   * * * *
// * * * * *