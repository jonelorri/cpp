#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<"\n";
    }
    else
    {
        int i = 1;
        while (i < argc)
        {
            string line = argv[i];
            transform(line.begin(), line.end(), line.begin(), ::toupper);
            cout<<line;
            i++;
        }
        cout<<"\n";
    }
    return 0;
}