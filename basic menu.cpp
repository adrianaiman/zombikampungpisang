// ********************************************************* 
// Course: TCP1101 PROGRAMMING FUNDAMENTALS 
// Year: Trimester 1, 2022/23 (T2215) 
// Lab: TT7L 
// Names: AL_Arshad_Bin_Al_Hanisham | MEMBER_NAME_2 | MEMBER_NAME_3 
// IDs: MEMBER_ID_1 | MEMBER_ID_2 | MEMBER_ID_3 
// Emails: arshadhanisham@gmail.com| MEMBER_EMAIL_2 | MEMBER_EMAIL_3 
// Phones: 0164202003 | MEMBER_PHONE_2 | MEMBER_PHONE_3 
// ********************************************************* 

// TODO: Fill in the missing information above and delete this line.

//#include "pf/helper.h"
#include <iostream>
#include <string>

using namespace std;

void Menu()
{
    int decision;
    do
    {
        cout<<"=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
        cout<<"   Alien vs Zombie      "<<endl;
        cout<<"=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
        cout<<" 0) Play the game"<<endl;
        cout<<" 1) Load Game "<< endl;
        cout<<" 2) customize Game Settings "<<endl;
        cout<<" 3) Exit Game"<<endl;
        cout<<"=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
        cout<<"    BE PREPARED!!!      "<<endl;
        cout<<"=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
        cout<<" choose your fate =>";
        cin>>decision;
        switch (decision)
        {

            case 0: 
                cout<< " Welcome to ALien Vs Zomvie!!!\n";
                break;
            
            case 1: 
                cout <<" Please wait for game to Load \n";
                break;
            
            case 2:
                cout<<" How would you like to play\n ";
                break;

            case 3:
                cout<<" Press 1 to confirm exit of the game \n";
                break;

        }



    }
    while(decision !=3);
      
       

}

int main()
{

    Menu();
    // cout << "Assignment (Part 1)" << endl;
    // cout << "Let's Get Started!" << endl;
    //pf::Pause();
}
