#include<iostream>

using namespace std;
const int N = 1e5+10;
int f[N],v[N],w[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i = 1;i<=n;i++)
    {
        cin>>v[i]>>w[i];
    }
    for(int i = 1;i<=n;i++)
    {
        for(int j = m;j>=v[i];j--)
        {
            f[j] = max(f[j],f[j-v[i]]+w[i]);
        }
    }
    cout<<f[m]<<endl;
    return 0;
}
