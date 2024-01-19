#include <iostream>
using namespace std; 

int main()
{
    int qs, score=0; 
    cin >> qs; 

    char studentAnswers[qs]; 
    char teacherAnswers[qs]; 


    for(int i = 0; i < qs; i++)
    {
        cin >> studentAnswers[i]; 
    }
    for(int i = 0; i < qs; i++)
    {
        cin >> teacherAnswers[i]; 
    }


    for (int i = 0; i < qs; i++)
    {
        if (studentAnswers[i] == teacherAnswers[i])
        {
            score++;
        }
    }

    cout<<score; 

    vector<string> v;

    return 0;
}