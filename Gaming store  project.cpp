#include<iostream>
#include<exception>
using namespace std;

class GameShop
{
public:
    string station_type;
    string ph;
    int n, pri;
	static int Taken,GtaV,Fifa23;
	static int Gow,Rdp,Fortnite;
    void display()
    {
        cout << "\t\t\t\t\t**********\n";
        cout << "\t\t\t\t\tWelcome to Turk Game Store\n ";
        cout << "\t\t\t\t\t**********\n";
    }

    void get()
    {
        cout << "Which station do you want to checkout (Xbox or PS):" << endl;
        cout << "Enter 'Xbox' for Xbox or 'PS' for Play Station\n";
        cin >> station_type;
    }

    void Amount(int price)
    {
        pri = price;
        cout << station_type << " Price: Rs. " << pri << endl;
    }

    // Overloading the addition operator
    GameShop operator+(const GameShop& other)
    {
        GameShop result;
        result.pri = this->pri + other.pri;
        return result;
    }
};

	int GameShop::Taken=2;
    int GameShop::GtaV=2;
    int GameShop::Fifa23=2;

class xbox : public GameShop
{
public:
    void x()
    {
    	
    	
    
        
        cout << "We have the following games on Xbox. Please choose one: " << endl;
        cout << "1. Takken 7 Stock: "<<Taken<<"\n2. GTA V Stock: "<<GtaV<<"\n3. FIFA 23 Stock: "<<Fifa23<<"\n4. Exit" << endl;
        cout << "Enter the number: ";
        cin >> n;
        
        

        int price1 = 2000;
        int price2 = 3000;
        int price3 = 6000;
        
   		try
   		{
   			if(n==1)
        {
        	if(Taken<=0)
        	{
			cout<<"No more Games Left";
            }
            else{
        	Taken--;
        	GameShop::Amount(price1);
        	}
		}
		
		else if(n==2)
        {
        	if(GtaV<=0)
        	{
			cout<<"No more Games Left";
            }
            else{
        	GtaV--;
        	GameShop::Amount(price2);
        	}
		}
		
		else if(n==3)
        {
        	if(Fifa23<=0)
        	{
			cout<<"No more Games Left";
            }
            else{

        	Fifa23--;
        	GameShop::Amount(price3);
			}        	
		}
		
		else if(n==4)
		{
			    cout << "Thanks for visiting our shop..." << endl;
                cout << "Please enter your phone number (length 11): ";
                cin >> ph;

                while (ph.length() > 11 || ph.length() < 10)
                {
                    cout << "Phone number should consist of 10 or 11 digits." << endl;
                    cout << "Enter number: ";
                    cin >> ph;
                }
		}
		
		else
		{
			throw(n);
		}
		}
         catch(int num)
		{
			cout<<"Invalid choice."<< endl;
		}
    }
};

    int GameShop:: Gow=2;
    int GameShop:: Rdp=2;
    int GameShop:: Fortnite=2;

class PS : public GameShop
{
public:
    void p()
    {
        cout << "We have the following games on Play Station. Please choose one: " << endl;
        cout << "1. God of War Stock: "<<Gow<<"\n2. Red Dead Redemption Stock:"<<Rdp<<"\n3. Fortnite Stock: "<<Fortnite<<"\n4. Exit" << endl;
        cout << "Enter the number: ";
        cin >> n;

        int price1 = 5000;
        int price2 = 7000;
        int price3 = 9500;

        try
        {
        	if(n==1)
        {
        	if(Gow<=0)
        	{
			cout<<"No more Games Left";
            }
            else{
        	Gow--;
        	GameShop::Amount(price1);
        	}
		}
		
		else if(n==2)
        {
        	if(Rdp<=0)
        	{
			cout<<"No more Games Left";
            }
            else{
        	Rdp--;
        	GameShop::Amount(price2);
        	}
		}
		
		else if(n==3)
        {
        	if(Fortnite<=0)
        	{
			cout<<"No more Games Left";
            }
            else{
        	Fortnite--;
        	GameShop::Amount(price3);
			}        	
		}
		
		else if(n==4)
		{
			    cout << "Thanks for visiting our shop..." << endl;
                    cout << "Please enter your phone number (length 11): ";
                cin >> ph;

                while (ph.length() > 11 || ph.length() < 10)
                {
                    cout << "Phone number should consist of 10 or 11 digits."<<endl;
                    cin>>ph;
                }
		}
		else
		{
			throw(n);
		}
		}
		catch(int num)
		{
			cout<<"Invalid choice."<< endl;
		}
    }

};
int main()
{
	char opt;
	GameShop obj1, obj2, total;
	obj1.display();

	do
	{
		obj2.get();
		cout << "\n............................\n";

		if (obj2.station_type == "Xbox" || obj2.station_type == "xbox")
		{
			xbox obj3;
			obj3.x();
			total = total + obj3; // Add the current purchase to the total
		}
		else if (obj2.station_type == "PS" || obj2.station_type == "ps")
		{
			PS obj4;
			obj4.p();
			total = total + obj4; // Add the current purchase to the total
		}
		else
		{
			cout << "Invalid Choice! Please Try Again." << endl;
		}

		cout << "\n______________\n";
		cout << "\nDo you want to check other games? (Y/N)" << endl;
		cin >> opt;
	}
	while (opt == 'Y' || opt == 'y');

	cout << "Total Amount: Rs. " << total.pri << endl;
	cout << "Thanks for visiting Turk Game Store..." << endl;

	return 0;
}

