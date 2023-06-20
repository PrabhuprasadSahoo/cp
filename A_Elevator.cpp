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
        void solve(int t)
        {
        string s;
        int n;
        cin>>s>>n;
        if(s=="front" && n==1)
        cout<<"L\n";
        else if (s=="back" && n==1)
        cout<<"R\n";
        else if (s=="front" && n==2)
        cout<<"R\n";
        else
        cout<<"L\n"; 
        }
        int main()
        {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            freopen("input.txt","r",stdin); 
            freopen("output.txt","w",stdout);
            int t=1;
            //cin>>t;
            for(int i=1;i<=t;i++)
            {
            solve(t);
            }
            return 0;
        }

