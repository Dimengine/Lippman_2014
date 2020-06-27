#include <iostream>
#include <string>

int main()
{
    std::string word, prev_word, max_word;
    int count = 0, max_count = 0;
    
    while (std::cin >> word)
    {
        if (word == prev_word)
            ++count;
        else if (word != prev_word)
        {   
            if (count > max_count)
            {
                max_count = count;
                max_word = prev_word;
            }
            count = 1;
            prev_word = word;
        }
    }
    if (count > max_count)
    {
        max_count = count;
        max_word = prev_word;
    }
    if (!max_word.empty())
        std::cout << "Word " << max_word << " dublicates " << max_count << " times" << std::endl;
    else std::cout << "No dublicates" << std::endl; 
}