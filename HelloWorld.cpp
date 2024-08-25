// C++ Program for changing the
// values of elements while traversing
// using references

#include <iostream>
#include <vector>

using namespace std;



int main()
{
 vector<int> vect{10,20,30,40,50};

//we will modify a copy 
for(int x :vect)
{ 
    x+=5;
    cout<< x <<" ";
}

cout<<endl;


//Print the orignal vector 
for(int y :vect)
{ 
    cout<< y <<" ";
}

cout<<endl;


//we will modify the vector by reference 
for(int& x :vect)
{ 
    x+=5;
    cout<< x <<" ";
}

cout<<endl;

//Print the orignal vector 
for(int y :vect)
{ 
    cout<< y <<" ";
}

cout<<endl;


}


