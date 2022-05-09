#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec { 10, 20, 30 };
    
    char choice {};
    
    while (choice != 'Q' && choice != 'q') {
        cout << "P - Print numbers" << endl;
        cout << "A - Add number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display smallest number" << endl;
        cout << "L - Display largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        
        cin >>  choice;
        
        if (choice == 'P' || choice == 'p')
        {
            if (vec.size() == 0)
                cout << "[ ] - the list is empty" << endl;
            else
                for (int i =0; i < vec.size(); ++i)
                    cout << vec.at(i) << " ";
                
                cout << endl;
        }
        else if ( choice == 'A' || choice == 'a' )
        {
            int add_number {};
            cout << "Enter an integer to add to the list: ";
            cin >> add_number;
            
            vec.push_back(add_number);
        }
        else if (choice == 'M' || choice == 'm')
        {
            double mean {};
            for (int i = 0; i < vec.size(); ++i)
                    mean += vec.at(i);
            
            mean = mean / vec.size();
            cout << mean;
        }
        else if (choice == 'S' || choice == 's')
        {
            int smallest_number {INT16_MAX};
            
            for (int i = 0; i < vec.size(); ++i)
                if (vec.at(i) < smallest_number)
                    smallest_number = vec.at(i);
            
            cout << "The smallest number is: " << smallest_number << endl;
        }
        else if (choice == 'L' || choice == 'l')
        {
            int biggest_number {INT16_MIN};
            
            for (int i = 0; i < vec.size(); ++i)
                if (vec.at(i) > biggest_number)
                    biggest_number = vec.at(i);
            
            cout << "The largest number is: "<< biggest_number << endl;
        }
        else
            cout << "Unknown selection, please try again" << endl;
        
        
        cout << endl;
    }
    
    cout << "Goodbye." << endl;
    
    cout << endl;
     return 0;
}
