#include<iostream>
#include<stack>
using namespace std;
stack <char> st;
void backpush(char a);
void reversest(){
    if(st.size()>0){ 
    char a=st.top();
    st.pop();
    reversest();

    backpush(a);
    }
}
void backpush(char a){
    if(st.size()==0){
        st.push(a);
    }else{
        char b= st.top();
        st.pop();
        backpush(a);
        st.push(b);//cout<<a<<" ";
    }
}
int main(){
    st.push('1');st.push('2'); st.push('3');
    st.push('4');st.push('5'); st.push('6');

    reversest();

    while(st.size()!=0){
        char c=st.top();
        cout<<c<<" ";//same order means correct
        st.pop();
    }
    return 0;
}
/*
// C++ code to reverse stack using recursion
// #include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
// using std::stack for stack implementation
stack<char> st;
// initializing a string to store result of reversed stack
string ns;
// Below is a recursive function that inserts an element at the bottom of a stack.

void insert_at_bottom(char x){
	if(st.size() == 0){
	st.push(x); cout<<x<<" x at bottom0 "<<endl;
    }else{
//All items are held in Function CallStack until we reach end of the stackWhen the stack becomes empty, thest.size() becomes 0, the above ifpart is executed and the item isinserted at the bottom
      char a = st.top();cout<<a<<" a at bottom x is "<<x<<endl;
		st.pop();
		insert_at_bottom(x);
// push allthe items held in Function Call Stack once the item is inserted at the bottom
		st.push(a);
	}
}

// Below is the function that reverses the given stack using insert_at_bottom()
void reverse(){
	if(st.size()>0){	
// Hold all items in Function Call Stack until we reach end of the stack
		char x = st.top();cout<<x<<" x at reverse"<<endl;
		st.pop();
		reverse();
// Insert all the items held in Function Call Stack one by one from the bottom to top. Every item is inserted at the bottom
		cout<<x<<" x at reverse1"<<endl;
        insert_at_bottom(x);
	}
}
void addtobutton(char ch);
void reverse1();
int main(){
st.push('1');st.push('2');st.push('3');st.push('4');
	cout<<"Original Stack"<<endl;
	// print the elements of original stack
	cout<<"1"<<" "<<"2"<<" "<<"3"<<" "<<"4"<<endl;
	// function to reverse the stack
	reverse1();
	cout<<"Reversed Stack"<<endl;
	// storing values of reversed stack into a string for display
	while(!st.empty()){
		char p=st.top();
		st.pop();
		ns+=p;
	}
	//display of reversed stack
	cout<<ns[3]<<" "<<ns[2]<<" "
		<<ns[1]<<" "<<ns[0]<<endl;
	return 0;
}

void reverse1(){
    
    if(st.size()>0){
    
    char ch=st.top();
    st.pop();
    reverse1();

    addtobutton(ch);
    }
}
void addtobutton(char ch){
    
    if(st.size()==0){
        st.push(ch);
    }else{
    char ch1= st.top();
    st.pop();
    addtobutton(ch);

    st.push(ch1);
    }
}
*/