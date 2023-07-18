#include <iostream>
#include <fstream>
#include <vector>
#include <random>
using  namespace  std;
string random(vector<string>& strings)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, strings.size() - 1);
    return strings[dis(gen)];
}
int main()
{
    ifstream file("file.txt");
    vector<string> strings;
    string line;
    while (getline(file, line))
    {
        strings.push_back(line);
    }
    file.close();
    if (!strings.empty())
    {
        string randomString = random(strings);
        cout << "Random string: " << randomString <<endl;
    }
}
