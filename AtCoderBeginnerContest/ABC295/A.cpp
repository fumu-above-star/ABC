#include <iostream> //spfp
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <utility> //pair
#include <queue>
#include <set>
#include <iomanip>//setprecision
using namespace std;
using Graph = vector<vector<int> >;
using P = pair<int,int>;

long long mod = 998244353;
 
const long long INF = 1LL << 60;//LL忘れ
const double PI = 3.1415926535;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    string w[n];
    map<string,int> mp;
    mp["and"] = 1;
    mp["not"] = 1;
    mp["that"] = 1;
    mp["the"] = 1;
    mp["you"] = 1;

    for(int i = 0; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++){
        if(mp[w[i]] == 1){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
  	

}
