// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class TSet
{
    public:
        TSet(char* set);
        char getSet();
};


TSet::TSet(char* set)
{
  
    for(int i=0;i<256;i++){
        int min=i;
        for(int k=i+1;k<256;k++){
            if(set[k]<set[i]){
                char temp;
                temp=set[k];
                set[k]=set[i];
                set[i]=temp;
            }
                
        }
    }
    
    for(int i=0;i<256;i++){
        cout << set[i];
    }
}




int main() {
    // Write C++ code here
    int N=0; //Number of data
    
    cin >> N;
    
    char a[256]={'\0'};
    char b[256]={'\0'};
    char c[80]={'\0'};    
    
    for(int i=0;i<N;i++){    
        cin >> a >> b >> c;
    }
    
    
    
    for(int i=0;i<256;i++){
        cout << a[i] ;
    }
    cout << endl;
    for(int i=0;i<256;i++){
        cout << b[i] ;
    }
    cout << endl;
    for(int i=0;i<80;i++){
        cout << c[i]  ;
    }    
    cout << endl;
    
    TSet a1(a);  //!!重要!
    
    
    


           
        
  

    // for(int i=0;i<256;i++){
    //     cout << a[i];

    // }    
    // for(int i=0;i<N;i++){
    //     cout << a[i] << endl;
    //     cout << b[i] << endl;
    //     cout << c[i] << endl;
        
    // }    

    // std::cout << a << b;
    // char set[256]={}; 
    // std::cin >> set;
      
    
    // TSet();
   
    // for(int i=0;i<33;i++){
    //     set[i]="a";
    // }    
    // for(int i=0;i<5;i++){
    //     std::cout << set[i];
    // }
 
    // TSet(set);

    return 0;
}



// char TSet::getSet(char *set){
  
    
//     for(int i=0;i<256;i++){
//         int min=i;
//         for(int k=i+1;k<256;k++){
//             if(set[k]<set[i]){
//                 char temp;
//                 temp=set[k];
//                 set[k]=set[i];
//                 set[i]=temp;
//             }
                
//         }
//     }
    
//     for(int i=0;i<256;i++){
//         std::cout << std[i];
//     }
// }

