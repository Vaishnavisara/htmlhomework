#include <iostream>
using namespace std;
#define MAX_SIZE 3

int stack[MAX_SIZE];
int* top = stack-1;

void push(int value){
    (*top)++=value;
     cout << "Pushed value: " << value << endl;
}

void pop(){
    (*top)++;
     cout << *top<< "got deleted"<<endl;
     
}

void diasplay(){
    if(top>=stack){
    int *i;
    for(i=top;i>=stack;i--){
        cout<<*i<<" ";
        cout<<endl;
    }
    }
    else{
        cout<<"stack is empty"<<endl;
    }
    
}
int main(){
   int ch; 
    while(ch!=4){
        cout<<"enter your choice :"<<endl;
        cout<<"1.push \t 2.pop\t 3.display\t 4.exit"<<endl;
        cin>>ch;
        
        switch(ch)
        {
          case 1:push(int value);
          cout<<"enter number to be  added in stack:"<<endl;
          cin>>value;
          break;
          
          case 2:pop();
          break;
          
          case 3:display();
          break;
          
          case 4:  cout <<"Exiting program.\n"
          break;
          
          default:cout<<"wrong choice"<<endl;
          break;
        }
    }
    return 0;
}
}











