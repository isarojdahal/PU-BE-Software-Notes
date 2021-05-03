#include <iostream>
#include <cstring>

using namespace std;

class TheComparer
{

private:
    char str[20];

public:
    TheComparer()
    {
    }

    TheComparer(char str[20])
    {
        strcpy(this->str, str);
    }
    int operator==(TheComparer obj)
    {

        if (strcmp(obj.str, str) == 0)
            return 1;
        return 0;
    }
};

int main()
{
    TheComparer string1("Saroj"), string2("Dahal");
    if ((string1 == string2) == 1)
        cout << "Identical";
    else
        cout << "Not identical";

    return 1;
}