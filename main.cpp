#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int n,x;
int prim(int n)
{
    for(int i=2; i<=n/2; i++)
        if(n%i==0)
            return 0;
    return 1;
}
int interval (int n)
{
    int x=n+1;
    while(prim(x)==0)
        x++;
    return x+1;
}
int main()
{
    f>>n;
    g<<interval(n);
    return 0;
}
