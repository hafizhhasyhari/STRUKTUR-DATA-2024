#include<stdio.h>
#include<iostream>
#include<conio.h>
#define QSIZE 5
using namespace std;

int front = 0, rear = -1, q[QSIZE];

void insert(int x) {
    rear = (rear + 1) % QSIZE;
    q[rear] = x;
}

int del() {
    int t = 0;
    if (rear <= -1)
        cout << "\nQueue is empty.\n\n";
    else {
        t = q[front];
        if (front != rear)
            front = (front + 1) % QSIZE;
        else {
            front = 0;
            rear = -1;
        }
    }
    return t;
}

void display() {
    int i;
    if (rear <= -1)
        cout << "\nQueue is empty.\n\n";
    else {
        cout << "\nThe queue is\n";
        for (i = front; i != rear; i = (i + 1) % QSIZE)
            cout << q[i] << " \t";
        cout << q[i] << " \n";
    }
}

void destroy() {
    int i = 0;
    if (rear <= -1)
        cout << "\nQueue is empty.\n\n";
    else
        for (i = front; i <= rear; i = (front + 1) % QSIZE)
            del();
    if (i != 0)
        cout << "\nQueue is destroyed.\n\n";
}

void reset() {
    front = 0;
    rear = -1;
    cout << "\nQueue has been reset.\n\n";
}

int main() {
    int ch, in, d;
    system("CLS");
    do {
        cout << "\nMain Menu\n\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Destroy\n";
        cout << "5. Reset\n";
        cout << "6. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                system("CLS");
                if (front == (rear + 1) % QSIZE && rear >= QSIZE - 1)
                    cout << "\nQueue is full\n\n";
                else {
                    cout << "\nEnter the element to be inserted: ";
                    cin >> in;
                    insert(in);
                    system("CLS");
                }
                break;
            case 2:
                system("CLS");
                d = del();
                if (d != 0)
                    cout << "\nElement deleted = " << d << "\n\n";
                break;
            case 3:
                system("CLS");
                display();
                break;
            case 4:
                system("CLS");
                destroy();
                break;
            case 5:
                system("CLS");
                reset();
                break;
            case 6:
                break;
            default:
                system("CLS");
                cout << "\nEnter an appropriate choice.\n\n";
        }
    } while (ch != 6);
}
