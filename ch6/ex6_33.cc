#include <iostream>
#include <vector>

using namespace std;
using const_iterator = vector<int>::const_iterator;

void print(vector<int> v, int i = 0)
{
    if (i == v.size()) {
        return;
    }

    cout << v[i] << endl;

    print(v, i + 1);
}

void print2(const_iterator begin, const_iterator end) {
    if (begin == end) {
        return;
    }

    cout << *begin << endl;

    print2(begin + 1, end);
}

int main()
{

    vector<int> v = {1, 2, 3};

    print(v);
    print2(v.cbegin(), v.cend());
    return 0;
}
