#include "MyQueue.h"

int main()
{
    MyQueue<string> queue;

    queue.push("one");
    queue.push("two");
    queue.push("three");
    queue.push("four");
    queue.push("five");
    queue.push("six");

    cout << "Old queue: " << endl;
    queue.show();

    queue.pop();
    queue.pop();

    queue.push("seven");

    cout << endl;
    cout << "New queue: " << endl;
    queue.show();

    int count = 0;
    MyQueue<string> temp = queue;
    
    while (!temp.isEmpty())
    {
        string str = temp.first();
        char firstChar = toLower(str[0]);

        if (firstChar == 'f' || firstChar == 't') 
        {
            count++;
        }
        temp.pop();
    }

    cout << endl;
    cout << "Number of strings starting with 'f' or 't': " << count << endl;
}