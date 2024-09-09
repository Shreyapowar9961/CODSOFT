#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int main()
{
    srand(time(0));
    int number =rand() % 100 + 1;
    int guess;
    int nooftries = 0;
    cout<<"HERE IS THE GAME OF NUMBER GUESSING"<<endl;
    cout<<"Number Has Been Selected Between 1 To 100"<<endl;
    do
    {
        cout<<"Enter The Number You Guess : " ;
        cin>>guess;
        nooftries++;
        if(guess > nooftries)
        {
            cout<<"Number is Greater! Try again"<<endl;
        }
            else if (guess < nooftries)
            {
                cout<<"Number is too Smaller! Try again "<<endl;

            }
            else
            {
                cout<<"Hey That's Great...! Congratulations...! You've Guessed The Number in "<<nooftries<<"Attempts"<<endl;
            }
            
            
            }
while (guess !=number);
return 0;
}