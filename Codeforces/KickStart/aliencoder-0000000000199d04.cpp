#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;


typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        new_data_set;


#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define PSET(x,y) fixed<<setprecision(y)<<x
#define pb push_back
#define pii pair<int,int>
#define pf push_front
#define mp make_pair
#define vi vector<int>
#define vip vector<pair<int,int> >
#define ff first
#define ss second
#define int long long
#define mod 1000000007
#define BIG 998244353
#define s(t) scanf("%lld",&t)
#define p(t) printf("%lld\n",t)
#define mii map<int,int>
#define MSET(table,i) memset(table, i, sizeof(table))
#define endl '\n'
//#define tc int t;cin>>t;while(t--)
#define pi  3.1415926358
#define bits(x) __builtin_popcount(x)
#define minimum(a,n) min_element(a,a+n)-a
#define maximum(a,n) max_element(a,a+n)-a
#define pqbig priority_queue<int>
#define pqsmall priority_queue<pii,vector<pii>,greater<pii> >
#define all(v) v.begin(),v.end()
#define sitr set<int>:: iterator
#define mitr map<int,int>:: iterator


#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

const int maxN = 1e3 + 5;
int arr[maxN];
int n, m;

pii solve(int i)
{
    int cnt = 0;
    int dusra_cnt = 0;
    for (int j = 0; j < n; j++)
    {
        if ((1ll << i) & arr[j])
            dusra_cnt++;
        else
            cnt++;
    }
    return mp(cnt, dusra_cnt);
}

int32_t main()
{
    fast;
    int tc; cin >> tc;
    for (int a = 1; a <= tc; a++)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int mini[51];
        for (int i = 0; i <= 50; i++)
        {
            if (i == 0)
            {
                pii p = solve(i);
                int cnt = p.ff;
                int dusra_cnt = p.ss;
                mini[i] = min(cnt, dusra_cnt) * (1ll << i);
                continue;
            }
            pii p = solve(i);
            int cnt = p.ff;
            int dusra_cnt = p.ss;
            mini[i] = min(cnt, dusra_cnt) * (1ll << i) + mini[i - 1];
        }

        int ans = 0;
        for (int i = 50; i >= 0; i--)
        {
            int tmp = ans + (1ll << i);
            int sum;
            if (i == 0)
                sum = 0;
            else
                sum = mini[i - 1];
                
            for (int j = 0; j < n; j++)
            {
                int cur = (arr[j] / (1ll << i));
                cur *= (1ll << i);
                sum += (tmp ^ cur);
                if (sum > m)
                    break;
            }

            if (sum <= m)
            {
                ans = tmp;
                continue;
            }

        }

        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += (ans ^ arr[i]);

        if (sum > m)
            ans = -1;

        cout << "Case #" << a << ": " << ans << endl;
    }
}
