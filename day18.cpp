#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
using namespace std;
class Palindrome {
    //Write your code here
    std::stack<char> charStack;
    std::queue<char> charQueue;
    public:
         //Pushes a character onto a stack.
        void pushCharacter(char ch) {
            charStack.push(ch);
        }
        //Enqueues a character in a queue.
        void enqueueCharacter(char ch) {
            charQueue.push(ch);
        }
        // Pops and returns the top character.
        char popCharacter() {
            char top = charStack.top();
            charStack.pop();
            return top;
        }
        char dequeueCharacter() {
            char front = charQueue.front();
            charQueue.pop();
            return front;
        }
};

