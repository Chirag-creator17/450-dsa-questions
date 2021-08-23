// #include <iostream>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll D, d, P, Q;
//         cin >> D >> d >> P >> Q;
//         ll ans = 0, n = D / d;
//         ans=(n*P*d+(Q*d*(n*(n-1)/2))) + (D-n*d)*(P+n*Q);
//         cout << ans << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// #define endl "\n"
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define ll long long
// #define MOD 1000000007
// ll binpow(ll a,ll b)
// {
//     ll ans=1;
//     while(b>0)
//     {
//         if(b&1)
//             ans=(ans*a)%MOD;
//         a=(a*a)%MOD;
//         b=b>>1;
//     }
//     return ans;
// }
// signed main()
// {
// 	FIO;
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    ll n,k;
// 	    cin>>n>>k;
//         int a=binpow(2,n)-1;
// 	    cout<<binpow(a,k)<<endl;
// 	}
// }

// #include <iostream>
// #include<unordered_map>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,m,i,max = 1e7;
//         cin >> n >> m;
//         int a[n],b[m];
//         for (i = 0; i < n; i++)
//             cin>>a[i];
//         for (i = 0; i < m; i++)
//             cin>>b[i];
//         unordered_map<int, int> mp;
//         for (i = 0; i < n; i++)
//         {
//             if (i == 0)
//                 mp[i] = 0;
//             else if (a[i] != 0)
//                 mp[i] = 0;
//             else
//                 mp[i] = max;
//         }
//         int r = -1;
//         for (i = 0; i < n; i++)
//         {
//             if (a[i] == 1)
//                 r = i;
//             if (r != -1)
//             {
//                 if (a[i] == 0)
//                     mp[i] = min(mp[i], i - r);
//             }
//         }
//         int l = -1;
//         for (i = n - 1; i >= 0; i--)
//         {
//             if (a[i] == 2)
//                 l = i;
//             if (l != -1)
//             {
//                 if (a[i] == 0)
//                     mp[i] = min(mp[i], l - i);
//             }
//         }
//         for (i = 0; i < m; i++)
//         {
//             int j = b[i] - 1;
//             if (mp[j] != max)
//                 cout << mp[j] << " ";
//             else
//                 cout << -1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// min dual area
// #include <bits/stdc++.h>
// using namespace std;
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define ll long long int
// #define ms multiset<ll>
// #define vpi vector<pair<ll, ll>>
// #define pb push_back
// #define mp make_pair
// #define ss second
// #define ff first
// #define ins insert
// #define limax LONG_MAX
// #define se(a) a.begin(),a.end()
// int main()
// {
//     FIO;
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         vpi x, y;
//         ms x1,y1;
//         for (ll i = 0; i < n; i++)
//         {
//             int a, b;
//             cin >> a >> b;
//             x.pb(mp(a, b));
//             y.pb(mp(b, a));
//             x1.ins(a);
//             y1.ins(b);
//         }
//         sort(se(x));
//         sort(se(y));
//         ll h1 = 0, h2 = 0, h1Max = 0, h1Min = limax;
//         ll w1 = 0, w2 = 0, w1Max = 0, w1Min = limax;
//         ll area = limax;
//         for (ll i = 0; i < n - 1; ++i)
//         {

//             h1Max = max(h1Max, x[i].ss);
//             h1Min = min(h1Min, x[i].ss);
//             h1 = h1Max - h1Min;
//             auto it = y1.find(x[i].ss);
//             y1.erase(it);
//             h2 = *y1.rbegin() - *y1.begin();
//             ll newArea = (x[i].ff - x[0].ff) * h1 +
//                           (x[n - 1].ff - x[i + 1].ff) * h2;
//             area = min(area, newArea);

//             w1Max = max(w1Max, y[i].ss);
//             w1Min = min(w1Min, y[i].ss);
//             w1 = w1Max - w1Min;
//             auto itr = x1.find(y[i].ss);
//             x1.erase(itr);
//             w2 = *x1.rbegin() - *x1.begin();
//             ll newArea2 = (y[i].first - y[0].ff) * w1 +
//                            (y[n - 1].ff - y[i + 1].ff) * w2;
//             area = min(area, newArea2);
//         }
//         if (area == limax)
//             area = 0;
//         cout << area << endl;
//     }
//     return 0;
// }

//min dual area mine
// #include <bits/stdc++.h>
// using namespace std;
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define ll long long int
// #define vi vector<ll>
// #define vpi vector<pair<ll, ll>>
// #define pb push_back
// #define mp make_pair
// #define ss second
// #define ff first
// #define limax LONG_MAX
// #define se(a) a.begin(),a.end()
// int main()
// {
//     FIO;
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         vpi x, y;
//         vi x1,y1;
//         for (ll i = 0; i < n; i++)
//         {
//             int a, b;
//             cin >> a >> b;
//             x.pb(mp(a, b));
//             y.pb(mp(b, a));
//             x1.pb(a);
//             y1.pb(b);
//         }
//         sort(se(x));
//         sort(se(y));
//         sort(se(x1));
//         sort(se(y1));
//         ll h1 = 0, h2 = 0, h1Max = 0, h1Min = limax;
//         ll w1 = 0, w2 = 0, w1Max = 0, w1Min = limax;
//         ll area = limax;
//         for (ll i = 0; i < n - 1; ++i)
//         {

//             h1Max = max(h1Max, x[i].ss);
//             h1Min = min(h1Min, x[i].ss);
//             h1 = h1Max - h1Min;
//             auto it = find(se(y1),x[i].ss);
//             y1.erase(it);
//             h2 = *y1.rbegin() - *y1.begin();
//             ll newArea = (x[i].ff - x[0].ff) * h1 +
//                           (x[n - 1].ff - x[i + 1].ff) * h2;
//             area = min(area, newArea);

//             w1Max = max(w1Max, y[i].ss);
//             w1Min = min(w1Min, y[i].ss);
//             w1 = w1Max - w1Min;
//             auto itr = find(se(x1),y[i].ss);
//             x1.erase(itr);
//             w2 = *x1.rbegin() - *x1.begin();
//             ll newArea2 = (y[i].first - y[0].ff) * w1 +
//                            (y[n - 1].ff - y[i + 1].ff) * w2;
//             area = min(area, newArea2);
//         }
//         if (area == limax)
//             area = 0;
//         cout << area << endl;
//     }
//     return 0;
// }

//XOr
// #include <bits/stdc++.h>
// using namespace std;
// #define f(i, a, n) for (int i = a; i < n; i++)
// #define ll long long int
// #define vi vector<ll>
// #define vvi vector<vector<ll>>
// #define pb push_back
// vector<ll> ans, an;
// vvi a;
// void gen(ll n, ll k, ll idx, bool rev)
// {
//     if (k > n || k < 0)
//         return;
//     if (!n)
//     {
//         for (ll i = 0; i < idx; ++i)
//         {
//             if (ans[i])
//                 an.pb(i + 1);
//         }
//         //cout << "\n";
//         a.pb(an);
//         an.clear();
//         return;
//     }
//     ans[idx] = rev;
//     gen(n - 1, k - rev, idx + 1, false);
//     ans[idx] = !rev;
//     gen(n - 1, k - !rev, idx + 1, true);
// }
// void all_combinations(ll n, ll k)
// {
//     ans.resize(n);
//     gen(n, k, 0, false);
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll k, n, m;
//         cin >> n >> k;
//         if (k == 1)
//         {
//             m = n;
//             cout << n << endl;
//             continue;
//         }
//         ll res = 1;
//         while (res <= n)
//         {
//             res <<= 1;
//         }
//         m = res - 1;
//         all_combinations(n, k);
//         ll idx;
//         for (ll i = 0; i < a.size(); i++)
//         {
//             ll x = 0;
//             for (ll j = 0; j < k; j++)
//             {
//                 x = x ^ a[i][j];
//             }
//             if (x == m)
//             {
//                 idx = i;
//                 break;
//             }
//         }
//         for(ll j=0;j<k;j++){
//             cout<<a[idx][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//subtree cover
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define vi vector<int>
// #define vb vector<bool>
// #define vvi vector<vector<int>>
// #define pii pair<int, int>
// #define pb push_back
// #define ff first
// #define ss second
// #define cont continue
// #define endl "\n"
// #define f(c, b, n) for (auto c : b[n])
// int getFar(int node, vvi &G, int n)
// {
//     vb d(n + 1, false);
//     int fd = -1, f;
//     d[node] = true;
//     queue<pii> qu;
//     qu.push({node, 0});
//     while (qu.size())
//     {
//         auto pi = qu.front();
//         qu.pop();
//         int nod = pi.ff, dis = pi.ss;
//         if (fd < dis)
//             fd = dis, f = nod;
//         f(cnod, G, nod)
//         {
//             if (d[cnod])
//                 cont;
//             d[cnod] = true;
//             qu.push({cnod, dis + 1});
//         }
//     }
//     return f;
// }
// int h = 100202;
// void dfs(int nod, int par, vvi &G, vi &H, vi &li, int cur)
// {
//     bool isleaf = true;
//     int mx = 0;
//     f(cnod, G, nod) if (cnod != par)
//     {
//         isleaf = false;
//         mx = max(mx, H[cnod]);
//     }
//     if (isleaf)
//     {
//         li.pb(cur);
//         return;
//     }
//     int c = 0;
//     f(cnod, G, nod)
//     {
//         if (cnod == par)
//             cont;
//         if (H[cnod] == mx && c == 0)
//         {
//             dfs(cnod, nod, G, H, li, cur + 1);
//             c++;
//         }
//         else
//             dfs(cnod, nod, G, H, li, 1);
//     }
// }
// void fH(int nod, int par, vvi &G, vi &H)
// {
//     bool isleaf = true;
//     f(cnod, G, nod)
//     {
//         if (cnod == par)
//             cont;
//         isleaf = false;
//         fH(cnod, nod, G, H);
//         H[nod] = max(H[nod], 1 + H[cnod]);
//     }
//     if (isleaf)
//         H[nod] = 1;
// }
// void breakLines(int nod, int par, vvi &G, vi &li, int n)
// {
//     vi H(n + 1, 0);
//     fH(nod, par, G, H);
//     dfs(nod, par, G, H, li, 1);
// }
// int getSol(vvi &gr, int n, int k)
// {
//     if (k == 1)
//         return 1;
//     int u = getFar(1, gr, n);
//     vi li;
//     breakLines(u, 0, gr, li, n);
//     sort(li.rbegin(), li.rend());
//     int s = 1, t = 0, i = 0;
//     while (t < k)
//     {
//         s++;
//         t += li[i++];
//     }
//     return s;
// }
// int gh = 1000019;
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     int _ = 1;
//     while (t--)
//     {
//         int n, k;
//         int u, v;
//         cin >> n >> k;
//         vvi g(n + 1);
//         for (int i = 1; i < n; i++)
//         {
//             cin >> u >> v;
//             g[u].pb(v);
//             g[v].pb(u);
//         }
//         cout << getSol(g, n, k) << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define f(i,a,n) for(int i=a;i<n;i++)
// #define ll long long int
// #define vi vector<int>
// #define pii pair<int,int>
// #define pb push_back
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         f(i,0,n){cin>>a[i];}
//         unordered_map<int,int> m;
//         vi ans;
//         vector<pii> sum;
//         for(int i=0;i<n;i++){
//             int s=a[i],p=1;
//             sum.pb({s,p});
//             for(int j=i+1;j<n;j++){
//                 s=s+a[j];
//                 p++;
//                 sum.pb({s,p});
//             }
//         }
//         sort(sum.begin(),sum.end());
//         // for(auto it : sum){
//         //     cout<<it.first<<" "<<it.second<<endl;
//         // }
//         for(int i=0;i<sum.size();i++){
//             if(sum[i].first==sum[i+1].first && sum[i].second==sum[i+1].second){
//                 m[sum[i].first]+=2;
//             }
//         }
//         // for(int i=0;i<sum.size();i++)
//         //     m[sum[i]]++;
//         for(auto it : m){
//             ans.pb(it.first*it.second);
//         }
//         int mx=INT_MIN;
//         for(int i=0;i<ans.size();i++){
//             if(ans[i]>mx)
//                 mx=ans[i];
//         }
//         cout<<mx<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define vl vector<ll>
// #define vvl vector<vl>
// #define pll pair<ll, ll>
// struct hash_pair
// {
//     template <class T1, class T2>
//     size_t operator()(const pair<T1, T2> &p) const
//     {
//         auto hash1 = hash<T1>{}(p.first);
//         auto hash2 = hash<T2>{}(p.second);
//         return hash1 ^ hash2;
//     }
// };
// #define umap_pll_l unordered_map<pll, ll, hash_pair>

// void dfs1(ll nod, ll par, vvl &G, vl &S, vl &P, vl &C, vl &L, ll curlev)
// {
//     C[nod] = 1;
//     P[nod] = par;
//     L[nod] = curlev;
//     for (auto cnod : G[nod])
//     {
//         if (cnod != par)
//         {
//             dfs1(cnod, nod, G, S, P, C, L, curlev + 1);
//             C[nod] += C[cnod];
//             S[nod] += S[cnod] + C[cnod];
//         }
//     }
// }

// void dfs2(ll nod, ll par, vvl &G, vl &T, vl &S, vl &C, umap_pll_l &Contdp, umap_pll_l &Cdp, ll n)
// {
//     T[nod] = T[par] + n - 2 * C[nod];
//     for (auto cnod : G[nod])
//         if (cnod != par)
//         {
//             dfs2(cnod, nod, G, T, S, C, Contdp, Cdp, n);
//             Cdp[make_pair(nod, cnod)] = C[cnod];
//             Contdp[make_pair(nod, cnod)] = S[cnod];
//             Contdp[make_pair(cnod, nod)] = T[nod] - S[cnod] - C[cnod];
//         }
//     Cdp[make_pair(nod, par)] = n - C[nod];
// }

// void goUpBy(ll &u, ll dist, vvl &Pdp)
// {
//     for (ll i = 20; i >= 0; i--)
//         if ((1 << i) <= dist)
//         {
//             dist -= (1 << i);
//             u = Pdp[u][i];
//         }
// }

// ll getLca(ll a, ll b, vvl &Pdp, vl &L)
// {
//     ll u = a, v = b;
//     if (L[u] > L[v])
//         goUpBy(u, L[u] - L[v], Pdp);
//     if (L[u] < L[v])
//         goUpBy(v, L[v] - L[u], Pdp);
//     if (u == v)
//         return u;
//     for (int i = 19; i >= 0; i--)
//         if (Pdp[u][i] != 0 && Pdp[u][i] != Pdp[v][i])
//             u = Pdp[u][i], v = Pdp[v][i];
//     u = Pdp[u][0];
//     return u;
// }

// void getMidProps(ll &a, ll &b, vvl &Pdp, vl &L, vl &v)
// {
//     ll lca = getLca(a, b, Pdp, L);
//     ll dist = abs(L[lca] - L[a]) + abs(L[lca] - L[b]);
//     ll mva = (dist - 1) / 2, mvb;
//     ll m1 = a, m2;
//     goUpBy(m1, mva, Pdp);
//     mvb = dist - 1 - mva;
//     m2 = b;
//     if (m1 != lca)
//         m2 = Pdp[m1][0];
//     else
//     {
//         goUpBy(m2, mvb, Pdp);
//     }
//     v[0] = m1;
//     v[1] = m2;
//     v[2] = mva;
//     v[3] = mvb;
// }

// void showRoute(ll a, ll b, vvl &Pdp)
// {
//     cout << "[A] " << a << " ";
//     while (Pdp[a][0] != 0)
//     {
//         a = Pdp[a][0];
//         cout << a << " ";
//     }
//     cout << "\n";

//     cout << "[B] " << b << " ";
//     while (Pdp[b][0] != 0)
//     {
//         b = Pdp[b][0];
//         cout << b << " ";
//     }
//     cout << "\n";
// }
// void solve(vvl &G, int n, int q)
// {
//     vl S(n + 1, 0), P(n + 1, 0), C(n + 1, 0), T(n + 1, 0), L(n + 1, 0);
//     umap_pll_l Contdp, Cdp;
//     dfs1(1, 0, G, S, P, C, L, 1);

//     T[0] = S[1] + C[1];
//     dfs2(1, 0, G, T, S, C, Contdp, Cdp, n);
//     vvl Pdp(n + 1, vl(20, 0));
//     for (int nod = 1; nod <= n; nod++)
//         Pdp[nod][0] = P[nod];
//     for (int j = 1; j < 20; j++)
//         for (int nod = 1; nod <= n; nod++)
//             Pdp[nod][j] = Pdp[Pdp[nod][j - 1]][j - 1];
//     vector<ll> v(4, 0);
//     ll a, b, ans = 0;
//     while (q--)
//     {
//         cin >> a >> b;
//         if (L[a] < L[b])
//             swap(a, b);
//         getMidProps(a, b, Pdp, L, v);
//         ll m1 = v[0], m2 = v[1], da = v[2], db = v[3];
//         ll conta = T[a] - (da + 1) * Cdp[{m1, m2}] - Contdp[{m1, m2}];
//         ll contb = T[b] - (db + 1) * Cdp[{m2, m1}] - Contdp[{m2, m1}];
//         ans = conta + contb;
//         cout << ans << "\n";
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     ll n, q;
//     while (t--)
//     {
//         cin >> n >> q;
//         vvl G(n + 1);
//         ll u, v;
//         for (int i = 1; i < n; i++)
//         {
//             cin >> u >> v;
//             G[u].push_back(v);
//             G[v].push_back(u);
//         }
//         solve(G, n, q);
//     }
//     return 0;
// }
