//
//  main.cpp
//  sorting
//
//  Created by Muralidhar on 12/6/15.
//  Copyright © 2015 AppCoda. All rights reserved.
//

#include <iostream>
using namespace std;

void bubblesort();
void selectionsort();


int a[10] = {9,5,2,8,-29, 4,52,1,-1, -15};

int main(int argc, const char * argv[]) {
    
    cout<<"Input"<<"\n";
    for (int i=0; i<10;i++)
    {
        cout<<a[i] <<",";
    }
    
    //bubblesort();
    selectionsort();
    
    cout<<"\n"<<"Final Output"<<"\n";
    for (int i=0; i<10;i++)
    {
        cout<<a[i] <<",";
    }
  
    return 0;
}

void bubblesort(){
  
    cout << "\n\n"<<"Bubble Sort Output"<<"\n";
    
    for (int j=10; j>1; j--)
    {
        cout << "Outer loop: "<< j << "\n";
        for (int k=0; k<j-1; k++){
            
            if (a[k]> a[k+1]){
                int temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
            for (int i=0; i<10;i++)
            {
                cout<<a[i] <<",";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}

void selectionsort() {
    
    
    cout << "\n\n"<<"Selection Sort Output"<<"\n";
    
    for (int j=0; j<10; j++){
        cout <<endl;
        cout << "Outer loop: "<< j << "\n";
        
        int l = j;
        int min = a[l];
        for (int k=j; k<10; k++) {
            if (a[k+1]< min) {
                min = a[k+1];
                l= k+1;
            }
           /* for (int i=0; i<10;i++)
            {
                cout<<a[i] <<",";
                cout<<endl;
            }*/
        
            
        }
        for (int i=0; i<10;i++)
        {
            cout<<a[i] <<",";
            
        }
        cout<<endl;
        cout << "minimum value is: " << min << " located at: " << l<< endl;
        int temp = a[j];
        a[j] = min;
        a[l] = temp;
    }
}