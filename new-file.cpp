using namespace std;

#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
#define PI 3.1415926535
#define SORT(v)  sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
#define all(v) (v).begin(),(v).end()
#define forn(i,n) for(int i=0;i<(n);i++)
typedef long long int ll;

const ll N = 3e5 + 10;
const ll mod = 1e7 + 7;
const ll MAXX = 1e6 + 5;
const ll nn=1e5 + 1;

class Solution {
public:
    vector<string> cellsInRange(string s) {
        FAST;
        vector<string>v;
        
        char c1=s[0];
        char c2=s[3];
        ll n1=s[1];
        ll n2=s[4];
        for(ll i=0;i<=c2-c1;i++){
            for(ll j=n1;j<=n2;j++){
                string s;
                char c=c1+i;
                s=c;
                s+=j;
                v.push_back(s);
            }
        }
        return v;
    }
};
