//BASIC PROGRAM 
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    cout << n;
    return 0;
}
*/






//dataTYPES

//primitve datatypes 
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float w ;
    long g;
    double k;
    char c;

    string str;
    
    cin >> n ;
    cout << n << endl;
    cin >> w ;
    cout << w << endl ;
    cin >> g;
    cout << g << endl;
    cin >> k;
    cout << k << endl;
    cin >> c;
    cout << c << endl;
    cin >> str;
    cout << str << endl;
    return 0;
}
*/








//if else statement
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>  n;
    if (n>10){
        cout << "rishi";
    }
        else  cout << "king";
        return 0;
    }

*/












//if else if statement
//lets say marks distribution
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cout << " enter the marks : " ;2
    cin >> n;
    

    if(n>35){
        cout << "pass";
    }
    else if (n>=35){
        cout << "average";
    }
    else  cout << "fail";
  cout << endl;
  return 0;
}
  */









  //for loop statement
  // for both string use getline
  // int 
 /* #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int r;
    cin >> r;
    for(int i =0;i<r;i++)
    {
        cout << "rishi is king" << endl;
    }
    return 0;
}
    */
   // string and int bth in one
/*

   #include<bits/stdc++.h>
   using namespace std;
   int main(){
    string str;
    int n;
    cout << "enter the number of times u need to print the statement :  ";
    cin >> n;
    cin.ignore();
    getline(cin,str);
    for(int i =0;i<=n;i++){
        cout << str << endl ;
    }
    return 0;

}
    
*/
//while loop

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;


    while(n>=0){
        cout << n << " " ;
        n++;
    }
    return 0;
}
*/







//switch case important uses cases


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cout << "enter the number nin akkan leyyy :  " ;
    cin >> c;


    switch(c){
        case 1 : cout << " fuck";
         break;
         case 2 : cout << " you " ;
         break ;
         default : cout << "nin amman " ;
         break ;
        
    }
    return 0;
}
                  
*/











//ARRAY 
/*

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={34,343,232,232,324};
    cin >> arr[1];
    for(int i = 0;i<=4;i++){
        cout << arr[i] << endl;
    }
    return 0;
}
*/
/*

// arrayy 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[]={"rsihs","rsijr"};
    cin >> str[1];
    cout << str[1]<<endl;
    for(int i=0;i<=1;i++){
        cout << str[i] << endl ;
    }
    return 0;
}
*/







//string 


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string firstname ="rishikesh";
    string secondname = " gowda";
    cout << firstname+secondname << endl;
    cout << firstname.length();
    return 0;
}

        


    


