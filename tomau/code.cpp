#include <bits/stdc++.h>
 
using namespace std;
 
using ll = unsigned long long;
 
const ll MOD = 1 << 24;

string intToHexColor(int number) {
    stringstream ss;
    ss << "#" << setfill('0') << setw(6) << hex << number * (999999999 % MOD) % MOD;
    return ss.str();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("dothi.txt", "r", stdin);
    freopen("dothitomau.dot", "w", stdout);
    
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> adj(n + 1);
    vector<pair<ll, ll>> p(m);
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        p[i].first = u;
        p[i].second = v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll k = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (adj[i].size() > k)
        {
            k = adj[i].size();
        }
    }

    vector<ll> v;
    vector<bool> check(n + 1, false);

    bool isConnected = true;
    vector<bool> reach(n + 1, false);
    queue<ll> que;
    reach[1] = true;
    que.push(1);
    while(!que.empty())
    {
        ll u = que.front();
        que.pop();
        for (auto v: adj[u])
        {
            if (!reach[v])
            {
                reach[v] = true;
                que.push(v);
            }
        }
    }
 
    for (ll i = 1; i <= n; i++)
    {
        if (!reach[i])
        {
            isConnected = false;
            break;
        }
    }

    ll cur = 0;
    bool isRegular = true;
    for (ll i = 1; i <= n; i++)
    {
        if (adj[i].size() < k)
        {
            check[i] = true;
            cur = i;
            isRegular = false;
            break; 
        }
    }
    if (isRegular == true || isConnected == false)
    {
        for (ll i = 0; i < n; i++)
        {
            v.push_back(i + 1);
        }
    }   
    else
    {
        ll j = 0;
        v.push_back(cur);
        while (v.size() < n)
        {
            if (j > v.size() - 1)
            {

            }
            ll u = v[j];
            for (ll i = 0; i < adj[u].size(); i++)
            {
                ll id = adj[u][i];
                if (check[id] == false)
                {
                    v.push_back(id);
                    check[id] = true;
                }
            }
            j++;
        }
    }
    // for (ll i = 0; i < n; i++)
    // {
    //  cout << v[i] << " ";
    // }
    vector<ll> color(n + 1); // color[i] là màu của đỉnh i
    color[v[0]] = 1;
    for (ll i = 0; i < n; i++)
    {
        if (color[v[i]] == 0)
        {
            vector<bool> flag(n + 1);
            for (ll j = 0; j < adj[v[i]].size(); j++)
            {
                ll id = adj[v[i]][j];
                if (color[id] != 0)
                {
                    flag[color[id]] = true;
                }
            }
            for (ll j = 1; j <= n; j++)
            {
                if (flag[j] == false)
                {
                    color[v[i]] = j;
                    break;
                }
            }
        }
    }
    // for (ll i = 0; i < n; i++)
    // {
    //  cout << color[v[i]] << " ";
    // }
    cout << "graph dothi\n{\n";
    for (ll i = 0; i < n; i++)
    {
        cout << v[i] << " [fillcolor=\"" << intToHexColor(color[v[i]]) << "\", style=filled];\n";
    }
    for (ll i = 0; i < m; i++)
    {
        cout << p[i].first << " -- " << p[i].second << "\n";
    }
    cout << "}";
}