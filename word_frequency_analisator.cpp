//This prog gets some text in a one string and shows frequency for every word
//It displays a word and several dots expressing the relative frequency of occurrence of the word in the text

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>

struct dict_member { //A structure to store words in it
    std::string word;
    int cnt;

    dict_member(std::string _word, int _cnt)
    {
        this->word = _word;
        this->cnt = _cnt;
    }
};

int main()
{
    std::string tmp = "";
    std::vector<dict_member> dictionary;
    int long_word = 0, max_cnt = 0, dots_cnt = 0, equal = 0;

    getline(std::cin, tmp);
    std::string n = "";
    std::stringstream x;
    x << tmp;
    x >> n;
    dictionary.push_back(dict_member(n, 1));
    long_word = n.size();

    while (x >> n) //Filling our dictionary and calculating of frequncy for every of them
    {
        if (n.size() > long_word)
            long_word = n.size();

        for (int i = 0; i < dictionary.size(); i++)
        {
            if (n == dictionary[i].word)
            {
                dictionary[i].cnt++;
                equal++;
            }
        }
        if (equal == 0)
        {
            dictionary.push_back(dict_member(n, 1));
        }
        equal = 0;
    }  

    for (int i = 0; i < dictionary.size(); i++) //Sorting our dictionary by frequency
    {
        for (int j = 1; j < dictionary.size(); j++)
        {
            if (dictionary[j].cnt < dictionary[j - 1].cnt)
                std::swap(dictionary[j], dictionary[j - 1]);
        }
        if (dictionary[i].cnt > max_cnt)
            max_cnt = dictionary[i].cnt;
    }

    for (int i = 0; i < dictionary.size(); i++) //Showing results of frequency alnalise
    {
        for (int j = 0; j < long_word - dictionary[i].word.size(); j++)
            std::cout << "_";

        std::cout << dictionary[i].word << " ";

        dots_cnt = (int) (round(((double)dictionary[i].cnt / (double)max_cnt) * 10.0));

        for (int i = 0; i < dots_cnt; i++)
            std::cout << ".";

        std::cout << std::endl;
    }
    return 0;
}
