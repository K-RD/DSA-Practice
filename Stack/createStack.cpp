//  Program to create a stack using array in c++
// Time Complexity: O(1) for all operations
// Space Complexity: O(n) for stack of size n

#include<iostream>

struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap =c;
        arr = new int[cap];
        top=-1;
    }
    void push(int x){
        if(top==cap-1){
            std::cout<<"Stack is full"<<std::endl;
        }else{
            top++;
            arr[top]=x;
        }
    }
    int pop(){
        if(top==-1){
            std::cout<<"Stack id empty"<<std::endl;
            return -1;
        }else{
            int res=arr[top];
            top--;
            return res;
        }
    }
    int peek(){
        if(top==-1){
            std::cout<<"Stack is empty"<<std::endl;
            return -1;
        }else{
            return arr[top];
        }
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return (top==-1);
    }
    void display(){
        for(int i=0;i<=top;i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
    }
};

int main(){
    MyStack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    std::cout<<"s.peek() = "<<s.peek()<<std::endl;
    std::cout<<"s.pop() = "<<s.pop()<<std::endl;
    std::cout<<"s.peek() = "<<s.peek()<<std::endl;
    std::cout<<"s.size() = "<<s.size()<<std::endl;
    std::cout<<"s.isEmpty() = "<<s.isEmpty()<<std::endl;
    return 0;
}