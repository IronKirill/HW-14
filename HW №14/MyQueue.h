#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
class MyQueue 
{
private:
    vector<T> arr;

public:
    bool isEmpty() const 
    {
        return arr.empty();
    }

    T first() const 
    {
        if (!isEmpty()) 
        {
            return arr.front();
        }
        throw out_of_range("Queue is empty!");
    }

    void push(const T& value) 
    {
        arr.push_back(value);
    }

    void pop() 
    {
        if (!isEmpty()) 
        {
            arr.erase(arr.begin());
        }

        else 
        {
            throw out_of_range("Queue is empty!");
        }
    }

    void show() const 
    {
        if (isEmpty()) 
        {
            cout << "Queue is empty!" << endl;
        }
        else 
        {
            for (const auto& item : arr) 
            {
                cout << item << " ";
            }
            cout << endl;
        }
    }
};

char toLower(char c) 
{
    if (c >= 'A' && c <= 'Z') 
    {
        return c + ('a' - 'A');
    }
    return c;
}