/*Write a program to Create quiz application*/
#include <iostream>
using namespace std;
struct quiz
{
    string question;
    string opt1;
    string opt2;
    string opt3;
    string opt4;
    int solution;
};
int main()
{
    int ans, score = 0;
    quiz question[3] = {{"What is the Capital of India?", "1. New Delhi", "2. Mumbai", "3. Chennai", "4. Kolkata", 1},
                        {"Which country won 2022 fifa world cup", "1. France", "2. Portugal", "3. Argentina", "4 . Brazil", 3},
                        {"What is 27*7", "1. 179", "2. 189", "3. 199", "4. 159", 2}};
    for (int i = 0; i < 3; i++)
    {
        cout << "Question " << i+1 << " : " << question[i].question << " (1-4)" << endl;
        cout << question[i].opt1 << endl
             << question[i].opt2 << endl
             << question[i].opt3 << endl
             << question[i].opt4 << endl;
        cout << "Your answer : ";
        cin >> ans;
        if (ans == question[i].solution)
        {
            score++;
        }
    }
    cout << "Your score is : " << score << "/" << 3;

    return 0;
}
