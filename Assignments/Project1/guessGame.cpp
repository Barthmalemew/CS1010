#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char start;
    int num;
    int guess;

    srand(time(0));
    num = rand() % 100;

    cout << "**** Guessing Game! ****\n";
    cout << "**** S: To Start    ****\n";
    cout << "**** Q: To Quit     ****\n";
    cin >> start;
    
    if(start == 'Q')
    {exit(0);}

    while(start == 'S')
    {
        cout << "Guess: \n";
        cin >> guess;
        
        if(guess > num)
        {
            cout << "Too High \n";
        }
        else if(guess < num)
        {
            cout << "Too Low \n";
        }
        else
        {
            cout << "That is Correct\n";
            cout << "**** Play Again?   ****\n";
            cout << "**** S: Play Again ****\n";
            cout << "**** Q: Quit       ****\n";
            cin >> start;
        }
    }
}
