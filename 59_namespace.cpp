#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

void ForEach(const vector<int> &values, const function<void(int)> &func) {
    for (int value: values)
        func(value);
}

int main() {
    vector<int> values = {1, 5, 4, 2, 3};
    auto it = find_if(
        values.begin(),
        values.end(),
        [](int value) { return value > 3; });
    cout << *it << endl;

    int a = 5;

    auto lambda = [a](int value) { cout << "Value: " << a << endl; };

    ForEach(values, lambda);
    cin.get();
}
