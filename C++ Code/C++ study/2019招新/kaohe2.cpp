#include <iostream>
#define MAX 100

using namespace std;

int main() {
	int j;
	for (int i = 2; i <= MAX; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				break;
		}
		if (j == i)
			cout << i << endl;
	}
	return 0;
}