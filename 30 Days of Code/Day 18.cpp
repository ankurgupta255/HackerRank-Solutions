#include <iostream>

using namespace std;

class Solution {
    //Write your code here
    public:
    char stack[1000];
    char queue[1000];
    int top=-1;
    int front=-1;
    int rear=-1;
    void pushCharacter(char a){
        top++;
        stack[top]=a;
    }
    void enqueueCharacter(char a){
        if(front==rear && front==-1){
            front=0;
            rear=0;
            queue[rear]=a;
        }
        else{
            rear++;
        queue[rear]=a;
        }
    }
    char popCharacter(){
        char c=stack[top];
        top--;
        return c;
    }
    char dequeueCharacter(){
        char c=queue[front];
        front++;
        return c;
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}