/*
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int* arr = new int[1000];
    int k, n, min, m, t;
    cin >> k;
    while (k--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        min = abs(arr[0] + arr[1]);
        m = arr[0] + arr[1];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j++; j < n)
            {
                t = arr[i] + arr[j];

            }
            if (abs(t) <= min)
            {
                min = abs(t);
                m = t;
            }
        }
        cout << m;
    }

    return 0;
}
*/
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm> 
#include <vector>

using namespace std;

char Doi(char n)
{
    int t;
    int a = (int)n;
    if (a > 64 && a < 88)
    {
        return a + 3;
    }
    else if (a == 88)
    {
        t = 65;
        return 6;
    }
    else if (a == 89)
    {
        t = 66;
        return t;
    }
    else if (a == 90)
    {
        t = 67;
        return t;
    }
    else if (a > 96 && a < 120)
    {
        return a + 3;
    }
    else if (a == 120)
    {
        t = 97;
        return t;
    }
    else if (a == 121)
    {
        t = 98;
        return t;
    }
    else if (a == 122)
    {
        t = 99;
        return t;
    }
    else if (a == 32)
    {
        return a;
    }

}

int main()
{
    /*
    int a;
    cin>>a;
    vector<int> arr;
    arr.resize(a);
    for (int&i : arr ) cin>>i;
    for (int&i : arr ) cout<<i<<" ";
    */
    /*
    int a;
    cin>>a;
    vector<int> arr;
    arr.resize(a);
    for (int&i : arr ) cin>>i;
    sort( arr.begin(), arr.end(), greater<int>());
    long long b= (long long)arr[0]*arr[1]*arr[2];
    cout<<b;
    */
    string a;
    getline(cin, a);
    int t = a.size();
    for (int i = 0; i < t; i++)
    {
        cout << (char)Doi(a[i]);
    }



    return 0;
}

