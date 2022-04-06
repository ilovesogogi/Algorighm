/*#include <iostream>
#include <string> //char *로도 받아와보자.



void calc_time(std::string );
int main()
{
    std::string str;

    std::cin >> str;
    calc_time(str);
    return 0;   
}

void calc_time(std::string string)
{
    int total_time = 0;
    int each_time;
    int i=0;
    //int gap = string[i] - 'A';  여기 있을 때는 왜 WA는 20이 나오고 AWA는 잘 작동했던 걸까?
    while(string[i] != '\0')   
    {
        int gap = string[i] - 'A';
        if((gap <15)|| (gap == 19) || (gap == 20))
        {
            each_time =  (string[i] - 'A') / 3 + 3;
            total_time += each_time; 
            i++;
        }
         if(gap == 21)
        {
            total_time += 9;
            i++;
        }
         if((gap >= 15) && (gap<= 18))
        {
            each_time = 8;
            total_time = total_time+ each_time;
            i++;
        }
         if((gap>= 22) &&(gap<=25))
        {
            each_time = 10;
            total_time += each_time;
            i++;
        }
        
    }
    std::cout << total_time << std::endl;
} */


/*#include <iostream>
using namespace std;

void calc(char *string[] );

int main()
{
    char* given_string[];
    cin >> given_string;
    calc(given_string);
}

void calc(char *string[])
{
    int total_time;
    int each_time;
    for(int i=0; string[i] != '\0' ; i++)
    {
        int gap = string[i] - 'A';
           if((gap <15)|| (gap == 19) || (gap == 20))
        {
            each_time =  (string[i] - 'A') / 3 + 3;
            total_time += each_time; 
            
        }
         if(gap == 21)
        {
            total_time += 9;
            
        }
         if((gap >= 15) && (gap<= 18))
        {
            each_time = 8;
            total_time = total_time+ each_time;
          
        }
         if((gap>= 22) &&(gap<=25))
        {
            each_time = 10;
            total_time += each_time;
        
        }
    }
    std::cout << total_time << std::endl;
}*/

#include <iostream>
#include <string>

using namespace std; //S,V,WXYZ가 예외
int main()
{
    string phone;
    int result = 0;
    int time;
    cin >> phone;
    int alphabetCnt[26] = {0, };
    for(char c: phone)
    {
        alphabetCnt[c - 'A']++;
    }

    for(int i=0; i<= 'Z'-'A' ; i++)
    {
        if(i== 'S' -'A' || i == 'V' -'A') {
            result += (i/3 +2)*alphabetCnt[i];
            continue;
        }
        if(alphabetCnt[i]) {
            time = i/3 +3;
            result += (time >9) ? 10*alphabetCnt[i] : time*alphabetCnt[i];
        }

    }
    cout << result;
    return 0;
}