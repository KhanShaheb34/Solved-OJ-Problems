#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, values[1234];
    cin >> r >> c;

    if(r == 1 && c == 1) {
        cout << 0 << endl;
        return 0;
    }

    bool sw = false;

    if(r>c) {
        swap(r,c);
        sw = true;
    }

    int uttor[r][c];

    uttor[0][0] = 2;
    for (int i = 1; i < c; i++)
    {
        uttor[0][i] = 1+(i*2);
    }
    for (int i = 1; i < r; i++)
    {
        uttor[i][0] = 2*(i+1);
    }

    for (int i = r+1; i < c; i++)
    {
        uttor[0][i] = uttor[0][i-1]+1;
    }

    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            uttor[i][j] = uttor[i][0] * uttor[0][j];
        }
    }
    if(sw)
    {
        swap(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << uttor[j][i] << " ";
            }
            cout << endl;
        }
    }
    else {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << uttor[i][j] << " ";
            }
            cout << endl;
        }
    
    }



    return 0;
}