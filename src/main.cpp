#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto& offset = 'a' - 'A';

	string line;
	cin >> line;

	const auto& n = line.length();
	auto nl = int{ 0 };
	for (int i = 0; i < n; ++i) {
		if ('a' <= line[i] && line[i] <= 'z') {
			nl += 1;
		}
	}

	const auto nu = n - nl;
	if (nl < nu) {
		for (int i = 0; i < n; ++i) {
			if ('a' <= line[i] && line[i] <= 'z') {
				line[i] -= offset;
			}
		}
	}
	else {
		for (int i = 0; i < n; ++i) {
			if ('A' <= line[i] && line[i] <= 'Z') {
				line[i] += offset;
			}
		}
	}

	cout << line;

	return 0;
}