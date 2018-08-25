#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "stack.h"

template<typename T>
void testStack(
    Stack <T> & theStack,
    T value,
    T increment,
    const string stackName  )
{
    cout << "\nPushing elements onto " << stackName << endl;

    while ( theStack.push(value)) {
        cout << value << ' ';
        value += increment;
    }

    cout << "\nStack is full. Cannot push " << value
         << "\n\nPopping elements from the " << stackName << "\n";

    while( theStack.pop(value))
        cout << value << ' ';

    cout << "\nStack is empty. Cannot pop\n";
}

int main()
{
    Stack <double> doubleStack(5);
    Stack <int> intStack;

    testStack( doubleStack, 1.1, 1.1, "doubleStack");
    testStack( intStack, 1, 1, "intStack");

    return 0;
}
