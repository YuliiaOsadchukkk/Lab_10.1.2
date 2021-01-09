#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

bool IsOrNot()
{
    ifstream t("t.txt");
    char tmp[5];
    while (!t.eof()) 
    {
        memset(tmp, 0, 5);
        t.read(tmp, 4);
        if (strlen(tmp) == 4)
        {
            if (tmp[0] == tmp[1] && tmp[0] == tmp[2] && tmp[0] == tmp[3])
                return true;
            else t.seekg(-3, ios::cur);
        }
        else break;
    }
    t.close();
    return false;
}


int main()
{
    ifstream t("t.txt");

    if (!t.is_open())
        cout << "File isn't opened!" << endl;
    else
    {
        if (IsOrNot())
            cout << "There is 4 similar neighbour symbols" << endl;
        else
            cout << "There is NOT any 4 similar neighbour symbols" << endl;
        cout << endl;
    }
}