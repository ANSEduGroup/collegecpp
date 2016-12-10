#include<iostream>
#include<exception>

using namespace std;

class StrExcp : public exception
{
public:
    const char* what() const throw()
    //what is a function that returns a
    //const char *. It is also a function
    //that never throws an exception.
    {
        return "String Not Found!";
    }
} ;

int main()
{
    string a;
    input:
        cout << "\nEnter the name of your country : ";
        cin >> a;
        try
        {
            if (a != "India")
            {
                StrExcp s;
                throw s;
            }
            else
                cout << "I am also from India.!! ";
        }catch(exception& e)
        {
            cout << e.what();
            goto input;
        }
    return 0;
}
