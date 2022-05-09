#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec {};
    
    char choice {};
    
    cout << "List of integers" << endl;
    cout << "=========================================================" << endl;
    
    while (choice != 'Q' && choice != 'q') {
        cout << "\nP - Print numbers" << endl;
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
            {
                cout << "[ ";
                for (int i =0; i < vec.size(); ++i)
                    cout << vec.at(i) << " ";
                    
                    cout << "]" << endl;
            }
        }
        else if ( choice == 'A' || choice == 'a' )
        {
            int add_number {};
            cout << "Enter an integer to add to the list: ";
            cin >> add_number;
            
            vec.push_back(add_number);
            
            cout << add_number << " added" << endl;
        }
        else if (choice == 'M' || choice == 'm')
        {
            if (vec.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else {
            int mean {};
            for (int i = 0; i < vec.size(); ++i)
                    mean += vec.at(i);
            
            cout << "The mean is: " << static_cast<double>(mean) / vec.size() << endl;
            }
        }
        else if (choice == 'S' || choice == 's')
        {
            if (vec.size() == 0)
                cout << "Unable to determine the smallest - list is empty" << endl;
            else
            {
            int smallest_number {INT16_MAX};
            
            for (int i = 0; i < vec.size(); ++i)
                if (vec.at(i) < smallest_number)
                    smallest_number = vec.at(i);
            
            cout << "The smallest number is: " << smallest_number << endl;
            }
            
        }
        else if (choice == 'L' || choice == 'l')
        {
            if (vec.size() == 0)
                cout << "Unable to determine the largest - list is empty" << endl;
            else
            {
            int biggest_number {INT16_MIN};
            
            for (int i = 0; i < vec.size(); ++i)
                if (vec.at(i) > biggest_number)
                    biggest_number = vec.at(i);
            
            cout << "The largest number is: "<< biggest_number << endl;
            }
        }
        else if (choice != 'Q' && choice != 'q')
            cout << "Unknown selection, please try again" << endl;
    }
    
    cout << "\nGoodbye." << endl;
    
    cout << endl;
     return 0;
}
