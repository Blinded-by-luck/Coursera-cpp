#include <iostream>
#include <set>
using namespace std;

int main() {
	int n;
    string a;
    set<string> b;
    cin >> n;
    for (int i=0; i<n; i++){
    	cin >> a;
    	b.insert(a);
    }
    cout << b.size();
    return 0;
}
