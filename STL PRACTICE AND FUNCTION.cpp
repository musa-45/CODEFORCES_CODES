#include<bits/stdc++.h>
using namespace std;
int main()
{
    //assign vector
    vector<int> v;

    // fill the vector with 10 five times
    v.assign(5,10);

    cout << "the vector elements are: ";
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i] << " ";
    }
    //insert 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\n The last element is: " << v[n-1];


    //removes last element
    v.pop_back();

    //print the vector
    cout << "\n The vector elements are: ";
    for(int i = 0 ; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // insert 5 at the beginning
     v.insert(v.begin() , 5);
     cout << "\nThe first element is: " << v[0];


     //removes the first element
     v.erase(v.begin());

     cout << "\n The first element is: " << v[0];

     //insert at the beginning

     v.emplace(v.begin(),5);
     cout <<"\n The first element is: "<< v[0];

     //insert 20 at the end
     v.emplace_back(20);
     n = v.size();

     cout << "\nThe last element is: " << v[n-1];

     //erases the vector
     v.clear();
     cout <<"\nvector size after clear() ; " << v.size();

     // two vector to perform swap
     vector<int> v1 , v2;

     v1.push_back(1);
     v1.push_back(2);
     v2.push_back(3);
     v2.push_back(4);

     cout <<"\n\n vector 1: ";
     for(int i = 0 ; i < v1.size();i++)
     {
         cout << v1[i] << " ";
     }
     cout <<"\n\n vector 2: ";
     for(int i = 0 ; i < v2.size();i++)
     {
         cout << v2[i] << " ";
     }

      //swaps v1 and v2

      v1.swap(v2);
       cout << "\nAfter swap \nVector 1: ";

       for(int i = 0 ; i < v1.size() ; i++)
       {
           cout << v1[i] <<" " ;

       }
        cout << " \nVector 2: ";

       for(int i = 0 ; i < v2.size() ; i++)
       {
           cout << v2[i] <<" " ;

       }


}
