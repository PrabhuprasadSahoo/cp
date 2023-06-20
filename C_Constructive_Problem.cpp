#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"No\n"
#define YES cout<<"Yes\n"
#define V vector<ll int> 
#define VP vector<pair<ll int,ll int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for(auto &i:A)cin>>i
#define output(A) for(auto &i:A)cout<<i<<" "
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     auto get_mex = [&](V &A)
    {
        int n = A.size();
        vector<int> B(n);
        for (auto &i : A)
        {
            if (i < n)
                B[i]++;
        }
        int mex = 0;
        while (mex < n && B[mex])
            mex++;
        return mex;
    };
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        V A(n);
       input(A);

        int mex = get_mex(A);
        if (mex == n)
        {
            NO;
            continue;
        }
        V R;
        if (find(A.begin(), A.end(), mex + 1) != A.end())
        {
            fr (i,0,n,1)
            {
                if (A[i] == mex + 1)

                    R.push_back(i);
            }

            for (int i =R.front(); i <= R.back(); i++)
                A[i] = mex;
            if (get_mex(A) == mex + 1)
                YES;
            else
                NO;
        }
        else
        YES;
    }
    return 0;
}

