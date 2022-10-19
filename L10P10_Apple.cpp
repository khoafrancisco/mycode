#include <iostream>
using namespace std;

struct Apple {
    int w;
    int p;
};

int main() {
  int n;
  Apple lst[1000];

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> lst[i].w >> lst[i].p;
  }

  int indexAns = 0;
  for (int i = 1; i < n; i++) {
    if (lst[i].w > lst[indexAns].w || (lst[i].w == lst[indexAns].w && lst[i].p)) {
        indexAns = i;
    }
  }
  cout << indexAns;
}
