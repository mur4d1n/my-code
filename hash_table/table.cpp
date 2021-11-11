//So, this prog works with my own hashtable realisation using also my own realisation of linked list to solve collisions
//Hash function looks like (number % const = number_index)
//Prog takes constant from console and then list of numbers in one string
//After making hashtable it shows in a console window

#include <iostream>
#include <string>
#include <sstream>
#include "HashTable.h"
#include "ListNode.h"

int main()
{
    int remainder = 0, tmp = 0;
    std::string elems, a;

    std::cin >> remainder;

    HashTable table(remainder);

    std::getline(std::cin, a);
    std::getline(std::cin, elems);

    std::string n;
    std::stringstream x;
    x << elems;

    while (x >> n) //Filling of hashtable
    {
        for (int i = 0; i < n.length(); i++)
        {
            tmp *= 10;
            tmp += n[i] - '0';
        }
        table.insert(tmp);

        tmp = 0;
    }


    for (int i = 0; i < remainder; i++) //Showing hashtable
    {
        std::cout << i << ": ";
        ListNode<int>* number = table.values[i];
        while (number)
        {
            if (number->next == nullptr && number->value == 0)
                break;
            std::cout << number->value << " ";
            number = number->next;
        }
        std::cout << std::endl;
    }
}
