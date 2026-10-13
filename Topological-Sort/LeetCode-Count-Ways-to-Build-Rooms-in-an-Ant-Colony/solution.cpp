using ll = long long;

const int MOD = 1e9 + 7;

class Solution {
public:
    ll binEx(ll a, ll b) {
        ll res = 1;

        while (b > 0) {
            if (b & 1) res = res * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }

        return res;
    }

    ll utilityDFS(ll src, vector<vector<ll>>& adj, vector<ll>& dp) {
        if (dp[src] != -1) return dp[src];

        dp[src] = 1;

        for (auto &x : adj[src]) {
            dp[src] += utilityDFS(x, adj, dp);
        }

        return dp[src];
    }

    int waysToBuildRooms(vector<int>& prevRoom) {
        ll n = prevRoom.size();
        vector<vector<ll>> adj(n);
        vector<ll> dp(n, -1);

        for (ll i = 1; i < n; i++) {adj[prevRoom[i]].push_back(i);}
        utilityDFS(0, adj, dp);

        ll res = 1, deno = 1;
        for (ll i = 2; i <= n; i++) {res = res * i % MOD;}
        for (ll i = 0; i < n; i++) {deno = deno * dp[i] % MOD;}

        res = res * binEx(deno, MOD - 2) % MOD;

        return res;
    }
};
