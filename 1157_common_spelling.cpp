#include <iostream>
#include <string>

 // namespace 쓰나 안 쓰나 똑같네
int main()
{
    std::string str;
    std::cin >> str;
    
    int array[26] = {0,};
    int temp_index = 0;
    int temp_max = 0;

    int index = 0;
    for(char v:str)
    {
        index = v - 'A';
        if(index > 26) {
            index -= 32;
        }
        array[index]++;
        if (temp_max < array[index])
        {
            temp_max = array[index];
            temp_index = index;
        }
    }
    for(int i=0; i<26; i++)
    {
        if(array[i] == temp_max && i != temp_index)   // 이거 왜 index 대신에 temp_index 쓰니까 되냐 빡치게.
        {
            std::cout << "?" << std::endl;
            return 0;
        }
    }
    char letter = temp_index + 'A';
    std::cout << letter << std::endl;
}

