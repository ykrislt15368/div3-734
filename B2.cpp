/*.........................*
 *..................___....*
 *.../|...../|...../...\...*
 *../.|..../.|..../........*
 *....|......|...|.........*
 *....|......|..|..___.....*
 *....|......|..|./...\....*
 *....|......|..|/.....\...*
 *....|......|..\...../....*
 *..__|__..._|_..\___/.....*
 *.........................*
 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define re return
#define pii pair<int,int>
//#define push_back pb
const int N=200010;
vector<int> v[N];
vector<int> temp;
int res[N];
void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
    	res[i]=0;
        cin>>a[i];
        v[a[i]].push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i].size()>=k)
        {
            for(int j=0;j<k;j++)
               res[v[i][j]]=j+1;
        }
        else 
        {
        	if(v[i].size()>=1)
             for(int j=0;j<v[i].size();j++)
               temp.push_back(v[i][j]);
        }
    }
    int cnt=temp.size()/k;
    int don=0;
    int p=1;
    for(int i=0;i<temp.size();i++)
    {
        if(don==cnt) break;
        res[temp[i]]=p;
        if(p==k) don++;
        p++;
        if(p==k+1) p=1;
        
    }
    
    for(int i=1;i<=n;i++)
     cout<<res[i]<<" ";
    cout<<"\n"; 
 
    for(int i=1;i<=n;i++) v[i].clear();
    temp.clear();
    
    re;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t-->0)
      solve();
    re 0;  
}





