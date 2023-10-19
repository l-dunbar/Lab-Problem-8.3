#include<iostream> //Inserting all libraries that will be used
#include<cstdlib>
#include<iomanip>
#include<ctime>
#include<string>

using namespace std;
int romanCharValue(char r);
int convertRomanToInt(string str);
int main()
{
    char r;
    string str;
    while (true) {
        cout << "Enter a roman number or Q to quit: ";
        getline(cin, str);
        if (str == "Q") break;
        int x = convertRomanToInt(str);
        cout << "roman number = " << x << endl;
    }
    return 0;
}
int convertRomanToInt(string str)
{
    int x;
    int total=0;
    for (int i = 0; str[i];i++)
    {
        if (romanCharValue(str[i]) >= romanCharValue(str[i + 1]))
        {
            x = romanCharValue(str[i]);
        }
        else
        {
            x = romanCharValue(str[i + 1]) - romanCharValue(str[i]);
                i++;

        }
        total += x;

    }
    return total;
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
