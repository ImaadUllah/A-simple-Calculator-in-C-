   //Imaad Ullah
   //Email: imaad3358@gmail.com
   //A simple Calculater......
#include"iostream"
#include"conio.h"
#include"windows.h"
using namespace std;
int main()
{
 int j=0;    //Decleration of j
 while(j>=0)  //condition
    {
 
    int i;   //decleration of i
    for(i=1;i<=4;i++)   //assighning values to i
    cout<<"\t"<<i<<"  ";  //displaying i
    cout<<"    +"<<endl<<endl;  //displaying + operator
    for(i=5;i<=8;i++)   //assighning values to i
    cout<<"\t"<<i<<"  ";   //displaying i
    cout<<"    -"<<endl<<endl; //assighment of - operator
    cout<<"\t9       0       %       /      X\t"<<endl<<endl; //displaying different characters
    char operation;      //decleration of  variable operation
    cout<<"Enter + for Addition, - for Subtraction, * for Multiplication, / for Division, % for Modulus & Q to quit:    ";
    cin>>operation;
    system("cls");     //going to new screen
       {
    
        if(operation=='+')
           {
    	    int a,b,c;
	        cout<<"Enter the value of a:    ";
            cin>>a;
            cout<<"\nEnter the value of b:    ";
            cin>>b;
            cout<<"a  +   b  =   ";
            c=a+b;
            cout<<c;
           }
        else if(operation=='-')
           {
    	    int a,b,c;
	        cout<<"Enter the value of a:    ";
            cin>>a;
            cout<<"\nEnter the value of b:    ";
            cin>>b;
            cout<<"a  -   b  =   ";
            c=a-b;
            cout<<c;
           }    
        else if(operation=='*')
           {
    	    int a,b,c;
	        cout<<"Enter the value of a:    ";
            cin>>a;
            cout<<"\nEnter the value of b:    ";
            cin>>b;
            cout<<"a  *   b  =   ";
            c=a*b;
            cout<<c;
           }
        else if(operation=='/')
           {
    	    int a,b,c;
	        cout<<"Enter the value of a:    ";
            cin>>a;
            cout<<"\nEnter the value of b:    ";
            cin>>b;
            cout<<"a  /   b  =   ";
            c=a/b;
            cout<<c;
           }
        else if(operation=='%')
           {
    	    int a,b,c;
	        cout<<"Enter the value of a:    ";
            cin>>a;
            cout<<"\nEnter the value of b:    ";
            cin>>b;
            cout<<"a  %   b  =   ";
            c=a%b;
            cout<<c;
           }
        else if(operation=='q')
           {
    	    break;
           }
        else
           {
    	    cout<<"You've entered wrong operator";
           }
        getch();
       }
     system("cls");
     j++;
    }
 getch;
 return 0;
}
