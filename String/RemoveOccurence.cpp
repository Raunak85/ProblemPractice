#include <iostream>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int i = 0;
        bool flag = true;

        while (flag)
        {
            if (i >= s.length())
            {
                i = 0;
                flag = false;
            }

            if (s[i] == part[0])
            {
                bool present = true;
                int j = i;
                for (int k = 0; k < part.length(); k++)
                {
                    if (s[j] == part[k])
                    {
                        j++;
                    }
                    else
                    {
                        present = false;
                        break;
                    }
                }

                if (present)
                {
                    s.erase(i, part.length());
                    i = -1;
                    cout << s;
                }
            }
            i++;
        }
        return s;
    }
};

int main()
{
    string s = "rmdsabstrdnababab";
    string p = "ab";
    Solution s1;
    string result = s1.removeOccurrences(s,p);
    cout<<result;
}