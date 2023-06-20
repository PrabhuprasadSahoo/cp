    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long 
    #define fr(i,a,b,k) for(int i=a;i<b;i+=k)
    #define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
    #define NO cout<<"NO\n"
    #define YES cout<<"YES\n"
    #define V vector<ll int> 
    #define VP vector<pair<ll int,ll int>> 
    #define MP map<ll int,ll int> 
    #define pb push_back
    #define ff first 
    #define ss second 
    #define input(A) for(auto &i:A)cin>>i
    #define output(A) for(auto &i:A)cout<<i<<" "
    #define MAXXXX 1e9+7
    void solve(int t)
    {
    V O;
    V T;
    V TR;
    int mino=MAXXXX;
    int mint=MAXXXX;
    int mintr=MAXXXX;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        string t;
        cin>>t;
        if(t=="01")
        {
        O.pb(x);
        mino=min(mino,x);
        }
        else if(t=="10"){
        T.pb(x);
        mint=min(mint,x);
        }
        else if(t=="11"){
        TR.pb(x);
        mintr=min(mintr,x);
        }
    }
    int ans=min(mintr+mino+mint,mino+mint);
    ans=min(ans,mintr);
    ans=min(ans,mint+mintr);
    ans=min(ans,mino+mintr);
    if(ans==MAXXXX)
    cout<<"-1\n";
    else
    cout<<ans<<endl;
    }
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        for(int i=1;i<=t;i++)
        {
        solve(t);
        }
        return 0;
    }
