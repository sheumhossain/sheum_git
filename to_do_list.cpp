#include <string>
#include<fstream>
using namespace std;
	
int positionInList = 0;
int listSize = 0;
struct list
{
   string name;
   string description;
   string Date;
};
struct list data[100];



int main()
{
   int choice = 0;
   while (1)
   {
      cout << "Enter you choice " << endl;
      cout << "1. add information" << endl;
      cout << "2. show information" << endl;
      cout << "3. Delete information"<<endl;
      cout << "4. exit"<<endl;
      cin >> choice;

      if (choice == 1)
      {
      	string name;
         string description;
         string Date;
         cin.ignore();
         cout<<"Entr your name : ";
         getline(cin,name);
         cout << "Enter your discription : ";
         getline(cin, description);
         cout << "Enter date :";
         cin >> Date;
         Add_in_file(name,description, Date);
      }
      else if (choice == 2)  Show_file();
      else if(choice == 3)  
      	{
      		cout<<"Enter which list you want Delete : ";
      		int y;
      		cin>>y;
      		Delete(y-1);
      	}
      else if(choice==4) return 0;
   }
   return 0;
}