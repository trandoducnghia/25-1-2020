#include <bits/stdc++.h>
using namespace std;
ifstream in("danhsach.inp");
ofstream o("danhsach.out");

int main()
{
    int n;
    in >> n;
    int LIST[1000] = {};
    for(int i=1; i<=n; i++)
    {
        in >> LIST[i];
    }
    int stt[1000] = {};
    int whi = n;
    int d = 0;
    while(whi > 0)
    {
        int j = 0;
        for(int i=1;i<=n;i++)
        {
            if(LIST[i] > LIST[j])
            {
                j = i;
            }
        }
        d++;
        stt[d] = j;
        LIST[j] = -1;
        whi--;
    }

    for(int i=1;i<=n;i++)
    {
       o << stt[i] << " ";
    }

}
