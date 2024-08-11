#include<bits/stdc++.h>
using namespace std;
class Student {
private:
    vector<int> scores;
public:
    void input()
    {
        for(int i=0;i<5;i++)
        {
            int score;
            cin>>score;
            scores.push_back(score);
        }
    }
    int calculateTotalScore()
    {
        int totalScore = 0;
        for (int score : scores)
        {
            totalScore += score;
        }
        return totalScore;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<Student> students(n);
    for(int i=0;i<n;i++)
    {
        students[i].input();
    }
    int kristen_score=students[0].calculateTotalScore();
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(students[i].calculateTotalScore()>kristen_score)
        {
            ++count;
        }
    }
    cout<<count<<endl;
    return 0;
}
