#include <iostream>
using namespace std;

int gobbeagie(unsigned int n);

int main()
{
    int t;
    unsigned int num;

    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> num;
        cout << gobbeagie(num) << endl;
    }
    return 0;
}

int gobbeagie(unsigned int num)
{
     int result;
    if(num /10 == 0) 
        return num;

    while(num /10 !=0)
    {
         result = 1;
        int array[12] = {};
        unsigned int temp_num = num;
        for(int i=0;i<10;i++)
        {
            array[i] = temp_num % 10;
            temp_num /= 10;
            if(array[i] ==0) 
            continue;
            else 
            result *= array[i];
        }
        num = result;
    }
    return result;
}
// int의 범위를 잘 알자!