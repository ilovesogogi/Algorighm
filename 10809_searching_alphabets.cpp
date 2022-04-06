#include <iostream>
#include <string>
#include <memory.h>

using namespace std;

int main()
{
    int alphabet_array[26] ;
    memset(alphabet_array, -1, sizeof(int)*26);
    string str;
    cin >> str;
    int index;
    for(int i=0; i<str.length(); i++)
    {
        index = str[i] - 'a';
        if(alphabet_array[index] != -1)
        continue;
        alphabet_array[index] = i;
    }

    for(int v : alphabet_array) 
    {
        cout << v << " " ;
    }
}