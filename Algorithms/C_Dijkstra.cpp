#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<pair<ll, ll>> adj_list[105];
ll dis[105];
ll parent[105];

void dijkstra(ll src)
{
    priority_queue<
        pair<ll, ll>,
        vector<pair<ll, ll>>,
        greater<pair<ll, ll>>
    > pq;

    pq.push({0, src});
    dis[src] = 0;
    parent[src] = -1;

    while (!pq.empty())
    {
        auto par = pq.top();
        pq.pop();

        ll par_dis = par.first;
        ll par_node = par.second;

        // Ignore outdated entry
        if (par_dis != dis[par_node])
            continue;

        for (auto child : adj_list[par_node])
        {
            ll child_node = child.first;
            ll child_dis = child.second;

            if (par_dis + child_dis < dis[child_node])
            {
                dis[child_node] = par_dis + child_dis;
                parent[child_node] = par_node;

                pq.push({dis[child_node], child_node});
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for (ll i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);

    if (dis[n] == LLONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<ll> path;

        ll node = n;

        while (node != -1)
        {
            path.push_back(node);
            node = parent[node];
        }

        reverse(path.begin(), path.end());

        for (auto x : path)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}

