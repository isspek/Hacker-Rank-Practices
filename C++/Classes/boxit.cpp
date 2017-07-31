
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private:
    int length;
    int breadth;
    int height;
    public:
    int getLength()
    {
        return length;
    };
    int getBreadth()
    {
        return breadth;
    };
    int getHeight()
    {
        return height;
    };
    long long CalculateVolume()
    {
        return 1LL*length*breadth*height;
    };
    bool operator<(Box& b)
    {
        if((this->length<b.getLength()) || (this->breadth<b.getBreadth() && this->length == b.getLength())
          || (this->height<b.getHeight() && this->breadth==b.getBreadth() && this->length==b.getBreadth()) )
        {
            return true;
        }
        else
        {
            return false;
        }
            
    };
    Box()
    {
        length=0;
        breadth=0; 
        height=0;
    };
    Box(int length, int breadth, int height)
    {
        this->length=length; 
        this->breadth=breadth; 
        this->height=height;
    };
 };
    ostream& operator<<(ostream& out,Box& b)
    {
        char c=' ';
        out<<b.getLength()<<c<<b.getBreadth()<<c<<b.getHeight();
        return out;
    };

