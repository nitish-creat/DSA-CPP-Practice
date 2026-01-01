// #include <iostream>  // Header file for input-output

// using namespace std;  // Avoids using std:: before every cout, cin

// int main() {
//     cout << "Hello, World!";  // Output statement
//     return 0;  // Exit status
// }


// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     string name;
//     int age;
//     cout<<"Enter your name: ";
//     getline(cin, name);   // takes full name with space

//     cout << "Enter your age: ";
//     cin >> age;

//     cout << "hello " << name <<"\n" <<"your age is "<<age;

//     return 0;
// }

// #include <bits/stdc++.h>
// #include<unistd.h>
// using namespace std;

// int main() {
//     int x=10;
//     string name;
//     cout<<"enter your name: ";
//     getline(cin,name);
//     sleep(2);
//     cout<< name<< " is the input";
//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int age;
//     cout<< "Enter your age: ";
//     cin>> age;

//     if(age<5){
//         cout<<"abhi baccha hai";
//     }
//     else if(age>5 && age<=15){
//         cout <<"hummm baccha bada hogya hai";
//     }
//     else if(age>15 && age<=17){
//         cout <<"hummm baccha thoda thoda mature hona shuru hogya hai";
//     }
//     else if(age>=18 && age<=30){
//        cout<< "adult hogya hai";
//     }
//     else{
//         cout<< "buddha hogya hai";
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// #include<unistd.h>
// using namespace std;

// int main() {
//     int day;
//     cout<<"Enter the day: ";
//     cin>>day;

//     switch (day)
//     {
//     case 1:
//         sleep(1);
//         cout<< "MONDAY";
//         break;
//     case 2:
//     sleep(1);
//         cout<< "TUESDAY";
//         break;
//     case 3:
//     sleep(1);
//         cout<< "WEDNESDAY";
//         break;
//     case 4:
//     sleep(1);
//         cout<< "THURSDAY";
//         break;
//     case 5:
//     sleep(1);
//         cout<< "FRIDAY";
//         break;
//     case 6:
//     sleep(1);
//         cout<< "SATURDAY";
//         break;
//     case 7:
//     sleep(1);
//         cout<< "SUNDAY";
//         break;
    
//     default:
//         cout<<"enter the number between 1 to 7";
//         break;
//     }
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[100]={2,3,4,51,2,34,2};

    for(int i=0;i<7-i;i++){
        for(int j=0;j<7-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i =0;i<7;i++){
        cout<<" "<< arr[i] ;
    }

    return 0;
}