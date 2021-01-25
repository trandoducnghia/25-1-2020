#include <bits/stdc++.h>
using namespace std;
ifstream in("nhan.inp");
ofstream o("nhan.out");

int ucll(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return ucll(b,a%b);
}

int main()
{
    int a, b, c ,d , e, f;
    in >> a >> b >> c >> d;
    e = a*c;
    f = b*d;
    int uc = ucll(e,f);
    o << e/uc << " " << f/uc;
}
