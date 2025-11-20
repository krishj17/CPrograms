#include<iostream>
using namespace std;

class test {
    public: 
    int arr[10];
    test(){
        for(int j=0; j<10; j++){
            arr[j]=0;
        }
    }
    void push(int i, int val){
        arr[i]=val;
    };
    void pop(int i){
        arr[i]=0;
    };
    void peek(){
        for(int j=0; j<10; j++){
            cout<<j<<"->"<<arr[j]<<endl;
        }
    };
};

main(){
    int i=0, val, choice;
    bool exit=false;
    test obj;
    cout<<"1-> push | 2-> pop | 3-> peek | 4-> exit"<<endl;

    while(exit==false){
        cout<<"Choice: "; cin>>choice;      // cout<<"index new iltiration="<<i<<endl;
        if(choice==1){
            cout<<"Enter Values: "; cin>>val;
            obj.push(i,val);
        }
        else if(choice==2){
            i--;    // cout<<"index after pop i--="<<i<<endl;
            obj.pop(i);
            i--;
        }
        else if(choice==3){
            i--;    // cout<<"index after peek i--="<<i<<endl;
            obj.peek();
        }
        else if(choice==4){
            exit=true;
        }
        else{
            i--;    // cout<<"index after invalid i--="<<i<<endl;
            cout<<"invalid choice"<<endl;
        }
        i++;    // cout<<"index after if else end i++="<<i<<endl;  
    }
    cout<<"Exited Successfully!";
}