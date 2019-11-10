//------------------------------//
/* UVA 10424 - Love Calculator */
//----------------------------//

#include<bits/stdc++.h>
using namespace std;

int oneDigit(int num)
{
    int newNum = 0;
    while(num > 0) 
    {
        newNum += num % 10;
        num /= 10;
    }

    if(newNum < 10) return newNum;
    else return oneDigit(newNum);
}

int main()
{
    string p1, p2;
    while(getline(cin, p1) && getline(cin, p2))
    {
        int s1=0, s2=0;

        for(int i=0; i<p1.length(); i++)
        {
            if(p1[i] >= 'a' &&  p1[i] <= 'z')
            {
                s1 += p1[i] - 'a' + 1;
            }

            if(p1[i] >= 'A' &&  p1[i] <= 'Z')
            {
                s1 += p1[i] - 'A' + 1;
            }
        }

        for(int i=0; i<p2.length(); i++)
        {
            if(p2[i] >= 'a' &&  p2[i] <= 'z')
            {
                s2 += p2[i] - 'a' + 1;
            }

            if(p2[i] >= 'A' &&  p2[i] <= 'Z')
            {
                s2 += p2[i] - 'A' + 1;
            }
        }

        s1 = oneDigit(s1);
        s2 = oneDigit(s2);

        if(s1 < s2) swap(s1, s2);

        double ans = (double)s2/(double)s1 * 100.0;

        printf("%.2f %%\n", ans);
    }

    return 0;
}
