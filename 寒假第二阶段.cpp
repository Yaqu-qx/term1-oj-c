/*动态规划  G
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
int n, m, a[110];
int dp[110][110];

int main ()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	dp[0][0] = 1;
	for(int i = 1; i <= n; i++){
		for(int k = 0; k <= a[i]; k++){
			for(int j = k ; j <= m; j++){
		        dp[i][j] = (dp[i][j]%1000007 + dp[i-1][j - k]%1000007)%1000007;
		    } 
		}
	}
	cout << dp[n][m] << "\n";
	return 0;
}*/

/*动态规划G 
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
#include <queue>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
int dp[100010], a[100010], b[100010];
int n, v;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> v;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> b[i];
	}
	memset(dp, inf, sizeof(dp));
	dp[0] = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 100000; j >= b[i]; j--){
			dp[j] = min(dp[j], dp[j - b[i]] + a[i]);
		}
	}

	int ans = 0;
	for(int i = 0; i <= 100005; i++){
		if(dp[i] <= v) ans = max(ans, i);
	}
	cout << ans << "\n";
	return 0;
}*/


/* const 1 A
#include <cstring>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <queue>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
int dp[100010], a[100010], b[100010];
const int mm = 1e9 + 7;
ll n, m, s;
ll mp1[] = {0, 1, 2 , 4, 8, 7, 5};
ll mp2[] = {0, 2 , 4, 8, 7, 5, 1};
ll mp3[] = {0, 4, 8, 7, 5, 1, 2 };
ll mp4[] = {0, 8, 7, 5, 1, 2 , 4};
ll mp5[] = {0, 7, 5, 1, 2 , 4, 8};
ll mp6[] = {0, 5, 1, 2 , 4, 8, 7};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m; 
	ll a = m, sum = 0;
	while(a>0){
		sum += a%10;
		a/=10;
	} 
	ll x = sum%9;
	if(x == 0) s = m;
	else if(x == 3) {
		s = m + (n-1)/2*9 + (n-1)%2 * 3;
	}
	else if(x == 6) {
		s = m + (n-1)/2*9 + (n-1)%2 * 6;
	}
	else {
		s = m + (n-1)/6*27;
		if(x == 1) {
			for(int i = 1; i <= (n-1)%6; i++){
				s+=mp1[i];
			}
		}
		if(x == 2) {
			for(int i = 1; i <= (n-1)%6; i++){
				s+=mp2[i];
			}
		}
		if(x == 4) {
			for(int i = 1; i <= (n-1)%6; i++){
				s+=mp3[i];
			}
		}
		if(x == 8) {
			for(int i = 1; i <= (n-1)%6; i++){
				s+=mp4[i];
			}
		}
		if(x == 7) {
			for(int i = 1; i <= (n-1)%6; i++){
				s+=mp5[i];
			}
		}
		if(x == 5) {
			for(int i = 1; i <= (n-1)%6; i++){
				s+=mp6[i];
			}
		}
	}
	
	cout << s % mm << "\n";
	return 0;
}*/

/* contest 1 B
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
int n;
int vis[1000010];
const int maxn=1e5+10;

struct node{
	int num, st;
	string s; 
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	queue<node>q;
	cin>>n;
	q.push({1, 1,"1"});
	vis[1] = 1; 
	while(q.size())
	{
		node now=q.front();q.pop();
		if(now.num==0) {
			cout<<now.st<<"\n"<<now.s;
			break;
		}
		else{
			node n1, n2, n3;
			n1 = {(now.num + 1)%n, now.st + 1, now.s+" 1"};
			if(!vis[n1.num]){ 
				q.push(n1);
			    vis[n1.num] = 1;
			}
			n2 = {(now.num * 2)%n, now.st + 1, now.s+" 2"};
			if(!vis[n2.num]){
				q.push(n2);
			    vis[n2.num] = 1;
			}
			n3 = {(now.num * 3)%n, now.st + 1, now.s+" 3"};
			if(!vis[n3.num]){
				q.push(n3);
			    vis[n3.num] = 1;
			}
			
		}
	}
	return 0;
}*/

/*const1 B优化 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
int n;
const int maxn = 1e6 + 10;
int vis[maxn], pre[maxn], op[maxn], bb[maxn];


struct node{
	int num, st;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	queue<node>q;
	cin>>n;
	q.push({1, 1});
	vis[1] = 1; 
	while(q.size())
	{
		node now=q.front();q.pop();
		if(now.num==0) {
			cout<<now.st<<"\n";
			break;
		}
		else{
			node n1, n2, n3;
			n1 = {(now.num + 1)%n, now.st + 1};
			if(!vis[n1.num]){ 
				q.push(n1);
			    vis[n1.num] = 1;
			    pre[n1.num] = now.num;
			    op[n1.num] = 1;
			}
			n2 = {(now.num * 2)%n, now.st + 1};
			if(!vis[n2.num]){
				q.push(n2);
			    vis[n2.num] = 1;
			    pre[n2.num] = now.num;
			    op[n2.num] = 2;
			}
			n3 = {(now.num * 3)%n, now.st + 1};
			if(!vis[n3.num]){
				q.push(n3);
			    vis[n3.num] = 1;
			    pre[n3.num] = now.num;
			    op[n3.num] = 3;
			}
			
		}
	}
	int xx = pre[0], aa = 0;
	bb[0] = op[0];
	while(xx != 1){
		bb[++aa] = op[xx];
		xx = pre[xx];
	}
	bb[++aa] = 1;
	for(int i = aa; i >= 0; i--){
		if(i == 0) cout<< bb[i] << "\n";
		else cout<< bb[i] << " ";
	}
	return 0;
}
*/

/*const 1 f
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#define ll unsigned long long
using namespace std; 
ll n;
ll m;
ll a[100], b[100];
 
int main() 
{
	ios::sync_with_stdio(false); 
	cin.tie(0);
	cin >> n >> m;
	ll mm = m;
	for(int i = n; i >= 1; i--){
		a[i] = mm%2;
		mm /= 2; 
	}
	if(mm > 0) return 0;
	for(int i = 1; i <= n; i++){
		if(i==1) cout << a[i];
		else {
			ll x = a[i] ^ a[i-1];
			cout << x ;
		} 
	}
	cout << "\n";
	return 0;
}*/

/* E
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
int mp[210][210], t[210], up[210];
int n, m;

void update(int tt){
	for(int k = 0; k < n; k++){
		if(up[k]) continue;
		if(t[k] <= tt){
			for (int i = 0; i < n; i++) 
			    for (int j = 0; j < n; j++) 
				mp[i][j] = min(mp[i][j], mp[i][k] + mp[k][j]);
			up[k] = 1;	
		}
	}
}

int main()
{
	scanf("%d %d", &n, &m);
	memset(mp, inf, sizeof(mp));
	for(int i = 0; i < n; i++){
		scanf("%d", &t[i]);
		mp[i][i] = 0;
	}
	while(m--){
		int x, y, w;
		scanf("%d %d %d", &x, &y, &w);
		mp[x][y] = w;
		mp[y][x] = w;
	}
	int q;
	scanf("%d", &q);
	while(q--){
		int x1, y1, t1;
		scanf("%d %d %d", &x1, &y1, &t1);
		update(t1);
		if(t[x1] > t1 || t[y1] > t1) printf("-1\n");
		else {
			if(mp[x1][y1] == inf) printf("-1\n");
			else printf("%d\n", mp[x1][y1]);
		}
		 
	}
	return 0;
}
*/

/* 数论A 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#define ll unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
ll x, y, k;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; 
	cin >> t;
	while (t--) {
		cin >> x >> y >> k;
		while(1){
			if(x == k || y == k) {
				cout << "YES\n";
				break;
			}
			else if(x < k && y < k){
				cout << "NO\n";
				break;
			}
			else if(x == 0 || y == 0){
				cout << "NO\n";
				break;
			}
			else {
				if(x < y) {
					swap(x, y);
				}
				if((x - k) % y == 0) {
					cout << "YES\n";
					break;
				}
				else {
					ll t = y;
					y = x % y;
					x = t;
				}
			}
		}
	}
	return 0;
}*/


/* 数论E 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#define ll unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
int n;
int cprime[100010];

void divide (int x){
	for (int i = 2; i <= x / i; i++){
		if(x % i == 0){
			while(x % i == 0){
				cprime[i]++;
				x /= i;
			}
		}
	}
	if(x > 1) cprime[x]++;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++){
		divide(i);
	}
	for(int i = 2; i <= n; i++){
		if(cprime[i]) cout << i << " " << cprime[i] << "\n";
	}
	return 0;
}*/

/* 数论B 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#define ll unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
int n, m;
const int maxn = 2e5+10;
ll a[maxn], b[maxn];

ll gcd(ll a, ll b){
	return b == 0 ? a : gcd(b, a%b); 
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}	
	for(int i = 1; i <= m; i++){
		cin >> b[i];
	}
	sort(a+1, a+n+1);
	ll x = 0;
	for(int i = 2; i <= n; i++){
		x = gcd(x, a[i] - a[i - 1]);
	}
	for(int i = 1; i <= m; i++){
		ll s;
		s = gcd(x, a[1] + b[i]);
		if(i == n) cout << s << "\n";
		else
		cout << s << " ";
		
	}
	return 0;
}*/


/*数论 c
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#define ll unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
ll n;

ll find(ll x){
	ll m;
	for(int i = 2; i <= x/i; i++){
		if(x % i == 0){
			m = i;
			return m;
		}
	}
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	ll cnt = 0;
	if(n - find(n) == 0) cout << "1" << "\n";
	else if(find(n) == 2) cout << n / 2 << "\n";
	else cout << (n - find(n)) / 2 + 1 << "\n";
	return 0;
	
}*/


/*数论 D  
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#define ll unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
int cnt[1010];

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a%b); 
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	int t, n;
	scanf("%d", &t);
	cnt[1] = 3;
	for(int i = 2; i <= 1000; i++){
		int count = 0;
		for(int j = 1; j < i; j++){
			if(gcd(i, j) == 1) count++;
		}
		cnt[i] = cnt[i-1] + 2*count;
	}
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		printf("%d %d %d\n", i, n, cnt[n]);
	} 
	return 0;
}*/

/* 数论F 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e7 + 5;
ll l1, r1, l2, r2, tot;
ll notp[maxn], prime[maxn];

void erla(){
	for(int i = 2; i <= 1e7; i++){
		if(!notp[i]) prime[++tot] = i;
		for(int j = 1; j <= tot; j++){
			if(prime[j] * i > 1e7) break;
			notp[i*prime[j]] = 1;
			if(i % prime[j] == 0) break;
		}
	}
}

int main()
{
	int t;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> t;
	erla();
	while(t--) {
		cin >> l1 >> r1 >> l2 >> r2;
		int flag = 1;
		for(int i = 1; i <= tot; i++){
			ll base = prime[i];
			ll f1 = 0, f2 = 0;
			while(base <= 1e7){
				f1 += r1 / base - (l1 - 1) / base;
			    f2 += r2 / base - (l2 - 1) / base;
			    base *= prime[i];
			}
            if(f1 > f2) {
            	cout << "No\n";
            	flag = 0;
            	break;
			} 
		}
		if(flag) cout << "Yes\n";
	}
	return 0;
}
*/


/* 数论G 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int maxn = 2e5 + 10;
int n;
ll f1[maxn], f2[maxn];

ll kpow(ll base, ll pow){
	ll ans = 1;
	while (pow){
		if(pow % 2 == 1) ans = ans * base % mod;
	    base = base * base % mod;
	    pow >>= 1;
	}
	return ans;
}

void getf(){
	f1[0] = 1; f2[0] = 1;
	for(ll i = 1; i <= 2e5; i++){
		f1[i] = f1[i-1] * i % mod;
		f2[i] = f2[i-1] * kpow(i, mod - 2) % mod;
	}
}

int main()
{
	int t;
	ios::sync_with_stdio(false);
	cin.tie(0);
	getf();
	cin >> t;
	while (t--){
		cin >> n;
		ll c = f1[2*n - 1] * f2[n] % mod * f2[n - 1] % mod;
		cout << c << "\n";
	}
    return 0;

}*/

/* conest 1 D
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e3 + 10;
int dp[maxn];
int n, x0;

struct node {
	int x, y;
}arr[maxn];

bool comp(node a, node b){
	return a.y < b.y;
} 

int main() 
{ 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> x0;
	memset(dp, -inf, sizeof(dp));
	dp[0] = 0;
	arr[0].x = x0; arr[0].y = 1;
	for(int i = 1; i <= n; i++){
		cin >> arr[i].x >> arr[i].y; 
	}
	sort(arr+1, arr+n+1, comp);
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= i-1; j++){
			if((arr[i].y - arr[j].y) >= abs(arr[i].x - arr[j].x)&&arr[i].y >= arr[j].y){
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	int ans = 0;
	for(int i = 1; i <= n; i++){
		ans = max(ans, dp[i]);
	}
	cout << ans << "\n";
	return 0;
}
*/



/*contest2 B
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring> 
#include <cmath>
#define ll unsigned long long
const int mod = 1e9 + 7;
using namespace std; 
const int inf = 0x3f3f3f3f;
ll n, m, d1, d2;
ll a[110], b[110],x, y, xx, yy;

ll kpow(ll base, ll pow){
	ll ans = 1;
	while (pow){
		if(pow % 2 == 1) ans = ans * base % mod;
	    base = base * base % mod;
	    pow >>= 1;
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    int t; 
    cin >> t; 
    while(t--){
		x=0, y=0, xx = 0, yy = 0;
    	cin >> n >> m;
    	int f = 0, nn=n; 
    	int first = 1;
    	while(n--){
    		ll aa = xx;
    		int xi = x;
    		cin >> d1;
    		if(first)
    		for(int i = 0; i <= d1; i++){
    			ll s;
    			cin >> s;
    			if(s && i >= x) {
    				x = i; xx = s;
				}
				first = 0; 
			}
			else 
			for(int i = 0; i <= d1; i++){
    			ll s;
    			cin >> s;
    			if(s!=0) { 
    				x = xi + i;
    				xx = (s * aa) % mod;
    				f = 1;
				} 
			} 
		}
		if(f==0&&nn>1) {
			x = 0, xx = 0;
		}
		int first1 = 1;
		while(m --){
			ll bb = yy;
			int yi = y;
    		cin >> d2;
    		if(first1)
    		for(int i = 0; i <= d2; i++){
    			ll ss;
    			cin >> ss;
    			if(ss && i >= y) {
    				y = i; yy = 1 * kpow(ss, mod - 2)%mod;
				}
				first1 = 0;
			}
			else 
			for(int i = 0; i <= d2; i++){ 
    			ll ss;
    			cin >> ss; 
    			if(ss!=0) {
    				y = yi + i;
    				yy = bb * kpow(ss, mod - 2)%mod;
				}
			}
		}
		if(x > y) cout << "inf" << '\n';
		else if(x == y) {
			ll ans = xx * yy % mod;
			cout << ans << "\n";
		}
		else cout << 0 << '\n';
	}
}*/


/*
contest 2 A
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#define ll unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e3 + 10;
ll mm[20], nn[20];
ll x, a, b, c, num[20], s;

ll kpow(ll base, ll pow){
	ll ans = 1;
	while (pow){
		if(pow % 2 == 1) ans = ans * base;
	    base = base * base;
	    pow >>= 1;
	}
	return ans;
}

void init(){
	mm[1] = 10, nn[1] = 10, nn[0] = 0;
	for(ll i = 2; i <= 17; i++){
		mm[i] = kpow(10, i-1) * 9  * i;
		nn[i] = nn[i-1] + mm[i];
	}
}


int main() 
{ 
	ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin >> t; 
    init();
    while(t--){
    	memset(num, 0, sizeof(num));
    	cin >> x;
    		if(x <= 10){
	    		cout << x - 1 << "\n";
			}
			else{ 
				for(int i = 1; i <= 18; i++){
		    		if(x <= nn[i]){ 
		    			s = i;
		    			x -= nn[i-1];
		    			c = 1;
		    			for(int j = 1; j <= i-1; j++){
		    				c *= 10;
						}
		    			a = x / i;
		    			b = x % i;
		    			if(b == 0) {
		    				b = i;
		    				a--;
						} 
		    			x = c + a;
		    			break;
					}
				}
				int k = 0;
				while(x > 0){
					num[++k] = x % 10;
					x /= 10;
				}
		    	cout << num[k + 1 - b] <<'\n';
			}	
	}
	return 0;
}*/

/* contest 2 C
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#define ll unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
ll n, s;
ll a[1000010];
int tot;

int main()
{
	int t;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> t;
	while(t--){
		int flag = 0; 
		cin >> n >> s;
		tot = 1; 
		a[1] = 1;
		ll sum = 1, x = 1; 
		for(int i = 1; i < n; i++){
			x *= 2; 
			sum += x;
			if(sum > s){
				flag = 1;
				break;
			} 
			a[++tot] = x; 
			
		}
		if(flag) cout << "-1" << "\n";
		else {
			cout << n << "\n";
			a[n] = a[n] + s - sum;
			for(int i = 1; i <= n; i++){
				if(i == n) cout << a[i] << "\n";
				else cout << a[i] << " ";
			}
		}
	}
	return 0;
} */

/* CONTEST D
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <map>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
int mm1[50];
map<int, int>mp, vis, pre, ze;
queue<int>q;
int num[10000000];

void pos() {
	mm1[11] = 1; mm1[12] = 2; mm1[13] = 3; mm1[21] = 4;
	mm1[22] = 5; mm1[23] = 6; mm1[31] = 7; mm1[32] = 8; mm1[33] = 9;
}

const int mm2[10] = { 0, 100000000, 10000000, 1000000, 100000,  10000, 1000, 100, 10, 1 };
const int mm3[5] = { 0, -1, 1, -10, 10 };
int main()
{
	ios::sync_with_stdio(false);
	//cin.tie(0);
	pos();
	int x = 0, aa;
	for (int i = 1; i <= 3; i++) {
		int a;
		cin >> a;
		if (a % 10 == 0) aa = i * 10 + 3;
		else if (a / 10 % 10 == 0) aa = i * 10 + 2;
		else if (a / 100 == 0) aa = i * 10 + 1;
		x = x * 1000 + a;

	}
	ze[x] = aa;
	q.push(x);
	mp[x] = 0;
	vis[x] = 1;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		if (now == 123456780) {
			cout << mp[123456780] << "\n";
			break;
		}
		for (int i = 1; i <= 4; i++) {
			int t = ze[now] + mm3[i];
			if (t % 10 <= 3 && t % 10 >= 1 && t / 10 >= 1 && t / 10 <= 3) {
				int s = mm2[mm1[t]];
				int ss = now / s % 10;
				int xx = now / (s * 10) * (s * 10) + now % s + ss * mm2[mm1[ze[now]]];
				if (!vis[xx]) {
					//cout << xx << " ";
					q.push(xx);
					vis[xx] = 1;
					mp[xx] = mp[now] + 1;
					//cout << mp[now] << " " << mp[xx] << " ";
					ze[xx] = t;
					pre[xx] = now;
				}
			}
		}
	}
	int pr = 123456780;
	for (int i = 0; i <= mp[123456780]; i++) {
		num[i] = pr;
		pr = pre[pr];
	}
	for (int i = mp[123456780]; i > 0; i--) {
		cout << '(' << ze[num[i]] / 10 << ',' << ze[num[i]] % 10 << ')' << ' ';
		cout << '(' << ze[num[i - 1]] / 10 << ',' << ze[num[i - 1]] % 10 << ')' << '\n';
	}

	return 0;
}*/

/*树形 A - party
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
vector<int> g[2010];
int n;
int mem[2010], ans;

void dfs(int mem, int grp){
	grp ++;
	ans = max(ans, grp);
	if(!g[mem].size()) return;
	for(int i = 0; i < g[mem].size(); i++){
		dfs(g[mem][i], grp);
	}
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	ans = 0;
	cin >> n;
	int tot = 0;
	for(int i = 1; i <= n; i++){
		int note;
		cin >> note;
		if(note == -1) {
		    mem[++tot] = i;	
		}
		else {
			g[note].push_back(i);
		}
	}
	for(int i = 1; i <= tot; i++){
		dfs(mem[i], 0);
	}
	cout << ans << "\n";
	return 0;
}
*/


/* B 树形  
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
int m, n, k;
int d[100010];


int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		memset(d, 0, sizeof(d));
		cin >> n >> m;
		int a, b, c;
		for(int i = 1; i <= m; i++){
			cin >> a >> b >> c;
			d[b] = 1;
		}
		for(int i = 1; i <= n; i++){
			if(d[i] == 0){
				k = i;
				break;
			}
		}
		for(int i = 1; i <= n; i++){
			if(i == k) continue;
			cout << k << " " << i << "\n";
		}
	}
	return 0;
}*/

/* 树形 C 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
int tot, n;
int cen[10010];
vector<int> g[10010];

int dfs(int u, int fa){
	int siz = 1, mx = 0;
	for(int i = 0; i < g[u].size(); i++){
		if(g[u][i] == fa) continue;
		int son = dfs(g[u][i], u);
		siz += son;
		mx = max(mx, son);
	}
	mx = max(mx, n - siz);
	if(mx * 2 <= n) cen[++tot] = u;
	return siz;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for(int i = 1; i <= n - 1; i++){
		int n1, n2;
		cin >> n1 >> n2; 
		g[n1].push_back(n2);
		g[n2].push_back(n1);
	}
	dfs(1, 0);
	if(tot == 0) cout << "NONE" << "\n";
	else {
		sort(cen + 1, cen + tot + 1);
		for(int i = 1; i <= tot; i++){
			cout << cen[i] << "\n";
		}
	} 

	return 0;
}
*/

/* 树形 D 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
int n, m;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t; 
	while(t--){
		int cnt = 1;
		cin >> n >> m;
		for(int i =1; i <= n-1; i++){
			int a, b;
			cin >> a >> b;
			if(a == m || b == m) cnt++;
		}
		if(cnt == 1 || cnt == 2) cout << "Ayush" << "\n";
		else if((n - 3) % 2 == 0) cout << "Ashish" << "\n";
		else cout << "Ayush" << "\n";
	}
	return 0;
}*/

/* 树形 E 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
int n, ans;
vector<int> g[100010];

int dfs(int u, int fa){
	int siz = 1;
	for(int i = 0; i < g[u].size(); i++){
		if(g[u][i] == fa) continue;
		int son = dfs(g[u][i], u);
		siz += son;
		if(son % 2 == 0) ans++;
	}
	return siz;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; 
	cin >> n;
	for(int i = 1; i <= n-1; i++){
		int n1, n2;
		cin >> n1 >> n2; 
		g[n1].push_back(n2);
		g[n2].push_back(n1); 
	}
	if(n % 2 == 1) cout << "-1" << "\n";
	else{
		dfs(1, 0);
		cout << ans << "\n";
	}
	return 0;
} 
*/

/* 树形 F 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
int n, m, fa[200010], ans;

struct node{
	int fro, to, w;
	bool friend operator <(const node &a, const node &b){
		return a.w < b.w;
	} 
}arr[200010];

int find(int x){
	 return x == fa[x] ? x : fa[x] = find(fa[x]);
}

void kruscal(){
	vector<int> eq;
	for(int i = 1; i <= m; i++){
		eq.clear();
		int j = i;
		while(arr[i].w == arr[j].w) {
			if(j > m) break;
			int a = find(arr[j].fro);
			int b = find(arr[j].to);
			j++;
			if(a == b) continue;
			else eq.push_back(j-1);
			
	    }
		for(int k = 0; k < eq.size(); k++){
			int aa = find(arr[eq[k]].fro);
			int bb = find(arr[eq[k]].to);
			if(aa == bb) ans++;
			else fa[aa] = bb;
		}
		i = j-1;
	}
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		cin >> arr[i].fro >> arr[i].to >> arr[i].w;
	}
	for(int i =1; i <= n; i++){
		fa[i] = i;
	}
	sort(arr+1, arr+m+1);
	kruscal();
	return 0;
}*/

/* 大二 contest 1 A
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map> 
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e5 + 10;
int n, m, cl, ce, v, q, x1, x2, y11, y2;
int lt[maxn], el[maxn];

bool towe(int x1, int x2){
	int l = 1, r = ce, mid;
	while(l <= r){
		mid = (l + r) / 2;
		if(el[mid] <= x2 && el[mid] >= x1) return true;
		else if(el[mid] > x2) r = mid - 1;
		else if(el[mid] < x1) l = mid + 1;
	}
	return false;
}

bool towl(int x1, int x2){
	int l = 1, r = cl, mid;
	while(l <= r){
		mid = (l + r) / 2;
		if(lt[mid] <= x2 && lt[mid] >= x1) return true;
		else if(lt[mid] > x2) r = mid - 1;
		else if(lt[mid] < x1) l = mid + 1;
	}
	return false;
}

int towel(int x){
	int l = 1, r = ce, mid;
	while(l <= r){
		mid = (l + r) / 2;
		if(el[mid] < x) l = mid + 1;
		else if(el[mid] == x) return 0;
		else r = mid - 1;
	}
	if(r < 1) return abs(x - el[l]);
	if(l > ce) return abs(x - el[r]);
	return min(abs(x - el[l]), abs(x - el[r]));
}

int towlt(int x){
	int l = 1, r = cl, mid;  
	while(l <= r){
		mid = (l + r) / 2;
		if(lt[mid] < x) l = mid + 1;
		else if(lt[mid] == x) return 0;
		else r = mid - 1;
	}
	if(r < 1) return abs(x - lt[l]);
	if(l > cl) return abs(x - lt[r]);
	return min(abs(x - lt[l]), abs(x - lt[r]));
}

int main()
{
	ios::sync_with_stdio(false);
	//cin.tie(0); cout.tie(0);
	cin >> n >> m >> cl >> ce >> v;
	for(int i = 1; i <= cl; i++){
		cin >> lt[i]; 
	}
	for(int i = 1; i <= ce; i++){
		cin >> el[i];
	}
	sort(lt+1, lt+cl+1);
	sort(el+1, el+1+ce);
	cin >> q;
	while(q--) {
		cin >> x1 >> y11 >> x2 >> y2; 
		if(x1 > x2) swap(x1, x2);
		if(y11 > y2) swap(y11, y2);
		if(x1 == x2) {
			cout << y2 - y11 << "\n"; 
			continue;
		}
		
		if(ce == 0) {
			if(towl(y11, y2)) {
				cout << y2 - y11 + x2 - x1 << "\n";
				continue; 
			}
			int mi2;
			mi2 = min(towlt(y11), towlt(y2));
			int ans = y2 - y11 + x2 - x1 + 2*mi2;
			cout << ans << "\n";
			continue;
		}
		if(cl == 0) {
			if(towe(y11, y2)){
				double t = (x2 - x1)/(double)v;
				int tt = ceil(t);
				cout << y2 - y11 + tt << "\n";
				continue; 
			}
			int mi1;
			mi1 = min(towel(y11), towel(y2));
			int ans = y2 - y11 + 2*mi1 + ceil((x2 - x1)/(double)v);
			cout << ans << "\n";
			continue;
		}
		
		if(towe(y11, y2)){
			double t = (x2 - x1)/(double)v;
			int tt = ceil(t);
			cout << y2 - y11 + tt << "\n";
			continue; 
		}
		
		if(towl(y11, y2)){
			int mi;
			mi = min(towel(y11), towel(y2));
			int ans = min(y2 - y11 + x2 - x1, y2 - y11 + 2*mi + (int)ceil((x2 - x1)/(double)v));
			cout << ans << "\n";
			continue;
		}
		
		int mi1, mi2;
		mi1 = min(towel(y11), towel(y2));
		mi2 = min(towlt(y11), towlt(y2));
		int xx = y2 - y11 + 2*mi1 + ceil((x2 - x1)/(double)v);
		int yy = y2 - y11 + x2 - x1 + 2*mi2;
		int ans = min(xx, yy);
		cout << ans << "\n";
	}
	return 0;
}*/

/*悬线法 C
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map> 
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 2e3 + 10;
int n, m;
int a[maxn][maxn], h[maxn][maxn], l[maxn][maxn], r[maxn][maxn];


int main()
{
	while(~scanf("%d %d", &n, &m)){
		for(int i  = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				scanf("%d", &a[i][j]); 
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				h[i][j] = 1;
				l[i][j] = r[i][j] = j;
				if(j != 1 && a[i][j - 1]){
					l[i][j] = l[i][j-1];
				}
			}
			for(int j = m; j >= 1; j--){
				if(j != m && a[i][j + 1]){
					r[i][j] = r[i][j + 1];
				}
			}
		}
	
		int mx = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(a[i][j]){
					if(i != 1 && a[i - 1][j]){
						h[i][j] = h[i - 1][j] + 1;
						l[i][j] = max(l[i - 1][j], l[i][j]);
						r[i][j] = min(r[i][j], r[i - 1][j]);
					}
					mx = max(mx, h[i][j] * (r[i][j] - l[i][j] + 1));
				}
			}
		}
		printf("%d\n", mx);
	}
	return 0;
}
*/

/* A 单调栈 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map> 
#include <stack>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 8e4 + 10;
stack<int> sta;
int n, a[maxn], f[maxn];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(sta.empty()) sta.push(i); 
		else{
			int x = sta.top();
			while (a[i] >= a[x]) {
				f[x] = i - x - 1;
				sta.pop();
				if(sta.empty()) break;
				x = sta.top();
			}
			sta.push(i);
		}
	}
	int xx = sta.top();
	while(!sta.empty()){
		int s = sta.top();
	    f[s] = xx - s;
		sta.pop();
	}
	ll sum = 0;
	for(int i = 1; i <= n; i++){
		//cout << f[i] << " ";
		sum = sum + f[i];
	}
	cout << sum << "\n";
	return 0;
} */

/* D 单调队列 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map> 
#include <stack>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 10;
int n, k, a[maxn], que1[maxn], que2[maxn], pre1, pre2, end1, end2;
int f1[maxn], f2[maxn];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin >> n >> k;
	pre1 = 1; pre2 = 1;
	end1 = 0; end2 = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		while(end1 >= pre1 && a[que1[end1]] <= a[i]) end1--;
		while(end2 >= pre2 && a[que2[end2]] >= a[i]) end2--;
		que1[++end1] = i;
		que2[++end2] = i;
		while(que1[end1] - que1[pre1] >= k) pre1++;
		while(que2[end2] - que2[pre2] >= k) pre2++;
		f1[i] = a[que1[pre1]];
		f2[i] = a[que2[pre2]];
	}
	for(int i = k; i <= n; i++){
		if(i == n) cout << f2[i] << "\n";
		else cout << f2[i] << " ";
	}
	for(int i = k ; i <= n; i++){
		if(i == n) cout << f1[i] << "\n";
		else cout << f1[i] << " ";
	}
	return 0;
} */

/* B 单调栈 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map> 
#include <stack>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e5 + 10;
int a[maxn], que[maxn], n, r, lef[maxn], righ[maxn];
ll sum[maxn];
int le, ri;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		lef[i] = righ[i] = i;
		if(r >= 1 && a[i] < a[que[r]]){
			while(r - 1 >= 1 && a[i] < a[que[r - 1]]) {
				sum[que[r - 1]] += sum[que[r]] + a[que[r]];
				righ[que[r-1]] = righ[que[r]];
				r--;
	            
			}
		    sum[i] += a[que[r]] + sum[que[r]];
		    lef[i] = lef[que[r]];
		    r--;
		}
		que[++r] = i;
	}
	while(r - 1 >= 1){
		sum[que[r - 1]] += a[que[r]] + sum[que[r]];
		righ[que[r-1]] = righ[que[r]];
		r--;
	}
	ll mx = -1;
	for(int i = 1; i <= n; i++){
		if((sum[i] + a[i]) * a[i] > mx){
			mx = (a[i] + sum[i]) * a[i];
			le = lef[i];
			ri = righ[i];
		}
	}
	cout << mx << "\n";
	cout << le << " " << ri << "\n";
	return 0;
	
}*/

/* E悬线法 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map> 
#include <stack>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e3 + 10;
int n, m, a[1000010], b[1000010], c[maxn][maxn];
int h[maxn][maxn], l[maxn][maxn], r[maxn][maxn];

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	scanf("%d %d", &n, &m);
	int tot1 = 0, tot2 = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){ 
			int aa;
			scanf("%d", &aa);
			a[aa] = ++tot1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			int bb;
			scanf("%d", &bb);
			b[bb] = ++tot2;
			c[i][j] = b[bb] - a[bb];
		}
	}
	
	for(int i = 1; i<= n; i++){
		for(int j = 1; j <= m; j++){
			h[i][j] = 1;
			l[i][j] = r[i][j] = j;
			if(j != 1 && c[i][j] == c[i][j - 1]){
				l[i][j] = l[i][j - 1];
			}
		}
		for(int j = m - 1; j >= 1; j--){
			if(c[i][j] == c[i][j + 1]) r[i][j] = r[i][j + 1];
		}
	}
	int mx = -1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(i != 1 && c[i][j] == c[i - 1][j]){
				h[i][j] = h[i - 1][j] + 1;
				l[i][j] = max(l[i][j], l[i - 1][j]);
				r[i][j] = min(r[i][j], r[i - 1][j]);
			}
			mx = max(mx, h[i][j] * (r[i][j] - l[i][j] + 1));
		}
	}
	cout << mx << "\n";
}
*/

/*const 4 E
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map> 
#include <utility>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e5 + 10;
int n, x; 
struct node{
	ll p, v;
	double c;
}arr[35];

bool comp(node a, node b){
	return a.c < b.c;
}

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
    while(t --){
    	cin >> n >> x;
    	for(int i = 1; i <= n; i++){
    		cin >> arr[i].p;
    	    arr[i].v = 1 << (i - 1);
    		arr[i].c = arr[i].p / (double)arr[i].v;
		}
		sort(arr + 1, arr + n + 1, comp);
		ll price = 0;
		for(int i = 1; i <= n; i++){
			price += (x / arr[i].v) * arr[i].p;
			x = x % arr[i].v;
			if(x == 0) break;
		}
		
		cout << price << "\n";
	}
	return 0;
} 
*/
/*const 4 D 
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector>  
#include <map> 
#include <utility>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 10;
int n, prime[maxn], notp[maxn]; 
ll ans;
int tot;
void erla(){
	for(int i = 2; i <= n + 1; i++){
		if(!notp[i]) {
			prime[++tot] = i;
			if(prime[tot] != 2) ans = ans + 2 * prime[tot];
		}
		for(int j = 1; j <= tot; j++){
			if(prime[j] * i > n + 1) break;
			notp[i*prime[j]] = 1;
			ans = ans + i * prime[j];
			if(i % prime[j] == 0) break;
		}
	}
}

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    cin >> n;
    erla();
    cout << ans << "\n";
	return 0;
} */

/*const 4 A
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string> 
#include <queue>
#include <cstring>
#include <cmath>
#include <vector> 
#include <map> 
#include <utility>
#define ll long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 3e5 + 10;
int n, m, a[maxn], vis[maxn], inq[maxn];
ll dis[maxn]; 
 
struct node{
	int to, w;
};

vector<node>g[maxn];
priority_queue<pair<ll ,int>, vector<pair<ll, int> >, greater<pair<ll, int> > >q;

void dij(int x){
	for(int i = 0; i <= n; i++){
			inq[i] = 0;
			dis[i] = inf;
			vis[i] = 0;
		}
	dis[x] = 0;
	q.push(make_pair(dis[x],x));
	inq[x] = 1;
	while(!q.empty()){
		pair<ll, int>now = q.top();
		q.pop();
		if(vis[now.second]) continue;
		vis[now.second] = 1;
		int from = now.second;
		for(int i =0; i < g[from].size(); i++){
			int to = g[from][i].to;
			int w = g[from][i].w;
			if(dis[to] > dis[from] + w){
				dis[to] = dis[from] + w;
				if(!inq[to]) q.push(make_pair(dis[to], to));
			} 
		}
	}
}
 
int main()
{
	int t;
	ios::sync_with_stdio(false); cin.tie(0);
	
	cin >> t; 
	while(t --){
		cin >> n >> m;
		for(int i = 0; i <= n; i++){
			g[i].clear();
		}
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			g[0].push_back({i, a[i]});
		}
		while(m --){
			int x, y, w;
			cin >> x >> y >> w;
			g[x].push_back({y, w});
			g[y].push_back({x, w});
		}
		dij(0);
		for(int i = 1; i <= n; i++){
			cout << dis[i] << " \n"[i == n];
		}
	}
	
	return 0;
}*/

/* hush A
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#define ull unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int N = 4e5 + 10;
string s;
int base[N], hush[N], n, ans[N]; 

ull get(int l, int r){
	return hush[r] - hush[l - 1] * base[r - l + 1];
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	base[0] = 1;
	for(int i = 1; i <= N; i++){
		base[i] = base[i - 1] * 131;
	}
	while(getline(cin,s)){
		n = s.length();
	    for(int i = 0; i < n; i++){
	    	hush[i + 1] = hush[i] * 131 + s[i];
		}
		int tot = 0;	
		for(int i = 1; i <= n; i++){
			if(get(1, i) == get(n - i + 1, n)) {
				ans[++tot] = i;
			}
		}
		for(int i = 1; i <= tot; i++){
			cout << ans[i] << " \n"[i == tot];
		}
	}
	
	return 0; 
}*/

/*kmp B
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#define ull unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int N = 1e6 + 10;
char s[N];
int nxt[N], n;

int main()
{
	int tot = 0;
	while(scanf("%d",&n), n){ 
		scanf("%s", s);
		nxt[0] = -1;
		int i = 0, k = -1;
		while(i < n){
			if(k == -1 || s[i] == s[k]){
				i++, k++;
				nxt[i] = k;
			}
			else k = nxt[k];
		}
		
		printf("Test case #%d\n", ++tot);
		for(int i = 2; i <= n; i++){
			int ans = i - nxt[i];
			//printf("%d ", ans);
			if(i % ans == 0 && i != ans){
				printf("%d %d\n", i, i / ans);
			}
			
		}
		printf("\n");
	}
	
	
	return 0; 
}
*/

/*kmp D
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#define ull unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int N = 1e6 + 10;
char s1[N], s[N];      
int nxt[N], n, nn;

int main()
{
	scanf("%d %s", &nn, s1);
	int len = strlen(s1);
	for(int j = 1; j < nn; j++){
		scanf("%s", s);
		int n = strlen(s);
		nxt[0] = -1;
		int i = 0, k = -1;
		while(i < n){
			if(k == -1 || s[i] == s[k]){ 
				i++, k++;
				nxt[i] = k;
			}
			else k = nxt[k];
		}
		int u = 0;
		for(int i = max(len - n, 0); i < len && u < n;){
			if(u == -1 || s1[i] == s[u]) {
				i++, u++;
			}
			else u = nxt[u];
		}
		//printf("%d ",u);
		for(int i = u; i < n; i++){
			s1[len++] = s[i];
		}
		s1[len] = '\0';
		//printf("%s\n", s1);
	}
	printf("%s\n", s1);
	
	return 0; 
}*/


/*F kmp
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring> 
#include <cmath>
#define ull unsigned long long
using namespace std;
const int inf = 0x3f3f3f3f;
const int N = 1e6 + 10;
char s1[N], s2[N]; 
int cnt10, cnt11, cnt20, cnt21, x, y, nxt[N];     

int main() 
{
	scanf("%s", s1);
	scanf("%s", s2);
	int len1 = strlen(s1), len2 = strlen(s2);
	if(len2 > len1 || len2 == 1) printf("%s\n", s1);
	else{
		for(int i = 0; i < len1; i++){
			if(s1[i] == '1') cnt11++;
			else cnt10++;
		}
		for(int i = 0; i < len2; i++){
			if(s2[i] == '1') cnt21++;
			else cnt20++;
		}
		if(cnt10 < cnt20 || cnt11 < cnt21){
			printf("%s\n", s1);
		}
		else{
			printf("%s", s2);
			cnt10 -= cnt20;
			cnt11 -= cnt21;
			int i = 0, k = -1;
			nxt[0] = -1;
			while(i <= len2){
				if(k == -1 || s2[i] == s2[k]){
					i++, k++;
					nxt[i] = k;
				}
				else k = nxt[k];
			}
			while(1) {
				int flag = 0;
				for(int i = nxt[len2]; i < len2; i++){
					if(s2[i] == '1' && cnt11){
						printf("1");
						cnt11--;
					}
					else if(s2[i] == '0' && cnt10){
						printf("0");
						cnt10--;
					}
					else {
						flag = 1;
						break;
					}
				}
				if(flag) {
					while(cnt10 --) printf("0");
					while(cnt11 --) printf("1");
					break;
				}
			}
		
		}
		
		
	}
	return 0;
}*/







