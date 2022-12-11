#include <iostream>
using namespace std;

int main()
{
    //Library
    string user, pass;
    string game;

    //Process
    cout << "Hello, world!" << endl;

    while (true)
    {
        cout << "Username : ";cin >> user;
        cout << "Password : ";cin >> pass;
        if (user == "user" && pass == "12345")
        {
            cout << "Hello, Let's play a Game!" << endl;
            while (true)
            {
                cout << "Select what game do you want to play" << endl;
                cout << " 1. Guess a word 2. Math game 3. Rock-Paper-Scissor 4. Exit " << endl;
                cin >> game;
                if (game == "1")
                {
                    cout << "Guess a word" << endl;
                    cout << "Question 1" << endl;
                    cout << "Who the first Indonesia president ?" << endl;
                    string qa1;
                    cin >> qa1;
                    if (qa1 == "Soekarno")
                    {
                        cout << "Congrats, you're right! ";
                    } else cout << "Wrong, try again!";
                } else if (game == "2")
                {
                    cout << "Math game" << endl;
                    cout << "Question 1" << endl;
                    cout << "2 x 8 ?" << endl;
                    string qb1;
                    cin >> qb1;
                    if (qb1 == "16")
                    {
                        cout << "Congrats, you're right! ";
                    } else cout << "Wrong, try again!";
                } else if (game == "3")
                {
                    cout << "Rock-Paper-Scissor" << endl;
                    cout << "Question 1" << endl;
                    cout << "Who the first Indonesia president ?" << endl;
                    string q1;
                    cin >> q1;
                    if (q1 == "Soekarno")
                    {
                        cout << "Congrats, you're right! ";
                    } else cout << "Wrong, try again!";
                } else if (game == "4")
                {
                    cout << "Do you really want to exit? (YES or NO)" << endl;
                    string exit;
                    cin >> exit;
                    if (exit == "YES")
                    {
                        return(0);
                    } else break;
                }
            }
        } else cout << "You input wrong username and password, please try again";
    }


    return 0;
}
