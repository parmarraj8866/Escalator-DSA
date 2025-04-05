#include <iostream>
using namespace std;

class Stack
{
private:
    int arr[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top == 4)
        {
            cout << "Stack is full. Cannot push.\n";
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " pushed to the stack.\n";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty. Cannot pop.\n";
        }
        else
        {
            cout << arr[top] << " popped from the stack.\n";
            top--;
        }
    }

    void displayTop()
    {
        if (top == -1)
        {
            cout << "Stack is empty.\n";
        }
        else
        {
            cout << "Top element is: " << arr[top] << "\n";
        }
    }

    void isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is empty.\n";
        }
        else
        {
            cout << "Stack is not empty.\n";
        }
    }

    void isFull()
    {
        if (top == 4)
        {
            cout << "Stack is full.\n";
        }
        else
        {
            cout << "Stack is not full.\n";
        }
    }
};

int main()
{
    Stack s;
    int choice, value;

    do
    {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Display Top\n4. Is Empty\n5. Is Full\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.displayTop();
            break;
        case 4:
            s.isEmpty();
            break;
        case 5:
            s.isFull();
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
