#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto it = scores.begin();
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++*(it + grade / 10);
        }
    }
    for (auto it = scores.cbegin(); it != scores.cend(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}