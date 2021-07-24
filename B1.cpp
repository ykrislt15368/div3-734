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
#define push_back pb
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int a[26]={0};
    for(int i=0;i<n;i++)
        a[s[i]-'a']++;
    int ab2=0,ab1=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]>1) ab2++;
        else if(a[i]==1) ab1++;
    }
    cout<<ab2+ab1/2<<"\n";
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





