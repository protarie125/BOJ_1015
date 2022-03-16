#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using pii = pair<int, int>;
using vi = vector<int>;
using vii = vector<pii>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto lst = vii(n);
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		lst[i] = { a, i };
	}

	sort(lst.begin(), lst.end());

	auto ans = vi(n);
	auto index = int{ 0 };
	for (const auto& [a, i] : lst) {
		ans[i] = index;
		++index;
	}

	for (const auto& v : ans) {
		cout << v << ' ';
	}

	return 0;
}