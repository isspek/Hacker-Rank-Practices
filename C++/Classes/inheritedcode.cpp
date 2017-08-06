/* Define the exception here */
class BadLengthException:public exception
{
    private:
    string n;
    public:
    BadLengthException(int n)
    {
        this->n=to_string(n);
    }
    const char * what () const throw () {
        return n.c_str(); 
    }
};