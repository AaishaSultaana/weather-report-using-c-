/*PROJECT -  WEATHER REPORT APP
NAME: AAISHA SULTAANA Z
COLLEGE: VIVEKANANDHA COLLEGE OF ENGINEERING FOR WOMEN*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class weather
{
    
    public:
    //function
    void heading()
    {
        cout<<"DAY"<<setw(10)<<"WEATHER"<<setw(10)<<"LOWTEMP"<<setw(10)<<"HIGHTEMP"<<setw(10)<<"RAIN POSSIBILITY"<<endl;
    }
    //function
    void yesterday()
    {
        cout<<"Today"<<setw(10)<<"Dry"<<setw(10)<<"27c"<<setw(10)<<"40c"<<setw(10)<<"15%"<<endl;
    }
    //function
    void today()
    {
        cout<<"Today"<<setw(10)<<"Cloudy"<<setw(10)<<"27c"<<setw(10)<<"40c"<<setw(10)<<"60%"<<endl;
    }
    //function
    void tommorrow()
    {
        cout<<"Tommorrow"<<setw(10)<<"Cloudy"<<setw(10)<<""<<setw(10)<<""<<setw(10)<<""<<endl;
    }
    //function
    void week()
    {
        cout<<"Sunday"<<setw(10)<<"Thunderstorm"<<setw(10)<<"25c"<<setw(10)<<"37c"<<setw(10)<<"80%"<<endl;
        cout<<"Monday"<<setw(10)<<"Rainy"<<setw(10)<<"24c"<<setw(10)<<"36c"<<setw(10)<<"92%"<<endl;
        cout<<"Tuesday"<<setw(10)<<"Cloudy"<<setw(10)<<"27c"<<setw(10)<<"40c"<<setw(10)<<"59%"<<endl;
        cout<<"Wedday"<<setw(10)<<"Cloudy"<<setw(10)<<"28c"<<setw(10)<<"43c"<<setw(10)<<"45%"<<endl;
        cout<<"Thursday"<<setw(10)<<"Dry"<<setw(10)<<"30c"<<setw(10)<<"48c"<<setw(10)<<"32%"<<endl;
        cout<<"Friday"<<setw(10)<<"Heavywaves"<<setw(10)<<"29c"<<setw(10)<<"41c"<<setw(10)<<"21%"<<endl;
        cout<<"Saturday"<<setw(10)<<"Dry"<<setw(10)<<"31c"<<setw(10)<<"45c"<<setw(10)<<"12%"<<endl;
    }
    
};
int main()
{

    string location;//variable declaration
    weather w;//creating objects
    int choice;
    cout<<"\nEnter your Location: ";
    cin>>location;
    cout<<"1.Today\n2.Yesterday\n3.Tommorrow\n4.Week Report\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    w.heading();//calling member function
    switch(choice)
    {
        case 1:
           w.today();//calling member function
           break;
        case 2:
           w.yesterday();
           break;
        case 3:
           w.tommorrow();
           break;
        case 4:
           w.week();
           break;
        default:
            cout<<"Invalid Choice";
            break;               
    }
    retrun 0;
}
