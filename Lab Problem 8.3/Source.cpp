#include<iostream> //Inserting all libraries that will be used
#include<cstdlib>
#include<iomanip>
#include<ctime>
#include<string>

using namespace std;
int romanCharValue(char r);
int main()
{
    char r;
    while (true) {
        cout << "Enter a roman number or Q to quit: ";
        cin >> r;
        if (r == 'Q') break;
        int x = romanCharValue(r);
        cout << "roman number = " << x << endl;
    }
    return 0;
}
    int romanCharValue(char r)
    {
        if (r == 'I')
            return 1;
        if (r == 'V')
            return 5;
        if (r == 'X')
            return 10;
        if (r == 'L')
            return 50;
        if (r == 'C')
            return 100;
        if (r == 'D')
            return 500;
        if (r == 'M')
            return 1000;
    }
