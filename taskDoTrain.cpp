#include <iostream>
#include <deque>
#include <string>
 
void doTrain(std::deque<int>& train, const std::string& command)
{
 
    if (command[0] == '+')
    {
        char side;
        int k;
        std::cin >> side >> k;
        if (side == 'l')
        {
            train.push_front(k);  
        }
        else if (side == 'r')
        {
            train.push_back(k);  
        }
 
    }
    else if (command[0] == '-')
    {
 
        char side;
 
        int n;
 
        std::cin >> side >> n;
 
        if (train.empty())
        {
            std::cout << "There is not any wagons to delete!" << std::endl;  
            return;
        }
 
        if (side == 'l')
        {
            for (int i = 0; i < n && !train.empty(); ++i)
            {
                train.erase(train.begin());  
            }
        }
        else if (side == 'r')
        {
         for (int i = 0; i < n && !train.empty(); ++i)
            {
                train.erase(train.end() - 1);  
            }
        }
    }
}
 
 
int main()
{
    std::deque<int> train;
    std::string command;
    while (std::cin >> command)
    {
        doTrain(train, command);
        if (train.empty())
        {
            std::cout << "Empty" << std::endl;
        }
        else
        {
            for (int e : train)
            {
                std::cout << e << " ";
            }         
        }
 
    }
 
}