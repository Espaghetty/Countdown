/*

10/01/22 

This program is not only to test the limitaion of VS code but to 
practice on functions, and MAYBE... just maybe overload a function 
which will either be left with a very detailed comment or marked as 
a comment. 
*/

#include<iostream>
using namespace std; 

//Function creation
void func1( ){

    //Integer Declartion
    int num;
    int counter = 0;
    
    //Choose how much you want to countdown
    cout << "Pick a number; I promise I can count to it./n Enter Number: ";
    cin >> num ;
    
            cout <<"\nEasy! " <<num;
    
    //While loop
    while (num > counter)
    {
        
        num--;
        
        cout << "...";
        cout << num;
    }
}

int main()
{
    //function call
    func1();
    return 0;
} 
