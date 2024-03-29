#include <iostream>
#include <string>
using namespace std;
int tm[3], dem=0, sum=0, d=0;
string s, t;
int main ()
{
    cin >> s;
    for ( int i = 0; i < s.size(); i++)
    {
        if ( s[i] == ':') d++;
    }
    if (s.size() != 8) cout << "INCORRECT";
    else if ( d < 2 ) cout << "INCORRECT";
    else
    {
        s += ':';
        t = "";
        for ( int i = 0; i < s.size(); i++)
        {
            t += s[i];
            if ( s[i] == ':' )
            {
                tm[dem] = stoi (t);
                dem++;
                t = "";
            }
        }
        if (tm[0] > 24 || tm[1] > 59 ) cout << "INCORRECT";
        else
        {
            sum = tm[0] * 3600 + tm[1] * 60 + tm[2];
            cout << sum;
        }
    }
}