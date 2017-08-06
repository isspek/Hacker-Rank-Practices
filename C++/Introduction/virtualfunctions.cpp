class Person{
    public:
    virtual void getdata(){};
    virtual void putdata(){};
    protected:
    string name;
    int age,id;
};

class Professor:public Person{
    public:
    virtual void putdata() override
    {
        cout<<name<<" "<<age<<" "<<publications<<" "<<id<<endl;
    }
    virtual void getdata()
    {
        cur_id++;
        id=cur_id;
        cin>>name>>age>>publications;
    }
    static int cur_id;
    private:
    int publications;
    
};
int Professor::cur_id=0;

class Student:public Person{
    
    virtual void putdata() override
    {
        int sum=0;
        for(int i=0;i<6;i++)
        {
            sum+=marks[i];
        }
        cout<<name<<" "<<age<<" "<<sum<<" "<<id<<endl;
         
    }
    virtual void getdata()
    {
        cur_id++;
        id=cur_id;
        
        cin>>name>>age;
        
        for(int i=0;i<6;i++)
        {
            cin>>marks[i];
        }
    }
    static int cur_id;
    private:
    int marks[6];  
};
int Student::cur_id=0;