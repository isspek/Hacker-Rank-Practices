// Write your Student class here
class Student
{
    private:
    int scores[5];
    public:
    void input()
    {
        int score;
        for(int i=0;i<5;i++)
        {
           cin>>score;
           scores[i]=score;
        }
    };
    int calculateTotalScore()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=scores[i];
        }
        return sum;
    };
    
};