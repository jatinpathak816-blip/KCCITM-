#include<iostream>
using namespace std;
int main()
// {
//     int n;
//     cout<<"enter the size of the square";
  
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {                                  // sol 1 square pattern
//         for(int j=0;j<n;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// {
//     int n;
//     cout<<"enter the size of the hollow square";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {                                              // sol 2 hollow square pattern
//             if(i==0 || i==n-1 || j==0 || j==n-1)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }   
    
// }


// {
//     int n;
//     cout<<"enter the size of the right angle triangle";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {                                              // sol 3 right angle triangle pattern
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// {
//     int n;
//     cout<<"enter the size of the inverted right angle triangle";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i;j++)
//         {                                              // sol 4 inverted right angle triangle pattern
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// {
//     int n;
//     cout<<"enter the size of the pyramid";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             cout<<" ";                                  // sol 5 pyramid pattern
//         }
//         for(int j=0;j<2*i+1;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// {
//     int n;
//     cout << "Enter number of rows: ";
//     cin >> n;

   
//     for (int i = 0; i < n; i++)
//     {
       
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

       
//         for (int j = 0; j < 2 * i + 1; j++)              // sol 6 diamond pattern
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }


//     for (int i = n - 2; i >= 0; i--)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

        
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
        

// }   
 
// {
//       int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

   
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }                                       // sol 7 half diamond pattern
//         cout << endl;
//     }

    
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// {
//     int n;
//     cout << "Enter the number of rows for half diamond inverted pattern: ";
//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i; j++) {
//             cout << " ";                     // sol 8 half diamond inverted pattern
//         }
//         for(int j = 0; j < 2 * (n - i) - 1; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }