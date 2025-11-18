#include <iostream>
#include <algorithm>
#include <vector>
#include<numeric>
using namespace std;
int main()
{   vector <int> a={28,1,9,10,2}; //list bana rhe
    vector <int> list; //input the value from back
    list.push_back(10);
    list.push_back(30);
    list.push_back(20);
    list.push_back(15);
  
    //vector ki capacity
    //vector capacity double kr deta h when full
    cout<<"list ka size: "<<list.size()<<endl;
    cout<<"list ka capacity: "<<list.capacity()<<endl;

    //vector resize krna khud se
    list.resize(5,0); 
    cout<<"resize krne k baad: ";
    // size and resize same ho toh kuch nhi hota
    //null ki jagah value daal do koi sa like 0
    for(int i:list)cout<<i<<" "; 
    cout<<endl;
    list.resize(2);
    //reduces the size to 2 forcibly
    //data gyab space remains
    cout<<"resize krke space ghatana: ";
    for(int i:list)cout<<i<<" "; 
    cout<<endl;  

    list.shrink_to_fit();//data gyb space bhi gyb 
    cout<<"resize krke empty space hatana: "<<list.size()<<" "<<list.capacity()<<endl;

    //changing the value of all element of list
    list.assign(list.size(),7);
    cout<<"assign 7 to all values: ";
    //list.size()ki jagah value dalenge toh alag alag aayega result
    for(int i:list)cout<<i<<" ";
    cout<<endl;
    cout<<"vector ka size increase and assign value: ";
    list.assign(5,7); //list ka size change ho gya to 5
    for(int i:list)cout<<i<<" ";
    cout<<endl;
    //partial list replacement using fill
    cout<<"partial list replacement using fill: ";
    fill(list.begin()+2,list.end(),10);
    for(int i:list)cout<<i<<" ";
    cout<<endl;

    //max and min element find krna
    //sort krke first and last element show kr skte h
    cout<<"max of a:"<< *max_element(a.begin(),a.end())<<endl;
    cout<<"min of a:"<< *min_element(a.begin(),a.end())<<endl;


    //merge a and list
    a.insert(a.end(), list.begin(), list.end());
    cout<< "merged a: ";
    for(int i:a) cout<<i<<" ";
    cout<<endl;

    //remove duplicate elements
    vector<int> v = {1, 2, 3, 2, 4, 1, 5};
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    //unique function checks for duplicate of next element.
    //i and i+1 duplicate h ya nhi ye check krega.thats why sort
    cout<<"after erasing duplicate: ";
    for(int i:v)cout<< i <<" ";
    cout<<endl;


    //sum of all of vector 
    //numeric ka part h ye
    int sum = accumulate(a.begin(),a.end(),0);//inital value of sum=0
    cout<<"sum of all of a: "<<sum;


    //without vector remove duplicate
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = 7;
    int result[7];
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false; // false = not duplicate, true = duplicate
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = true; // mark as duplicate
                break; // stop checking further
            }
        }
        // If not duplicate, add to result array
        if (isDuplicate == 0) {
            result[newSize] = arr[i];
            newSize++;
        }
    }
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << result[i] << " ";
    }
    cout<<endl;



}