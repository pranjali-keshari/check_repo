#include<iostream>
#include<vector>
#include<string.h>
#include<list>
#include<map>
using namespace std;
void display(list <int> &l1){
	list<int>::iterator it;
	for(it=l1.begin();it!=l1.end();it++){
		cout<<*it<<"  ";
	}
}
main()
{
   map<string,int> mm;
   mm["ram"]=89;
   mm["jack"]=77;
   mm["om"]=798;
   
   map<string,int> ::iterator it;
   for(it=mm.begin();it!=mm.end();it++){
   	cout<<(*it).first<<" "<<(*it).second;
   }
}



/*main(){
	list<int> l;
	l.push_back(2);
	l.push_back(4);
	l.push_back(4);
	l.push_back(6);
	l.push_back(9);
	l.push_back(8);
	display(l);
	cout<<endl;
	l.pop_front();
	display(l);
	cout<<endl;
	l.push_front(1);
	display(l);
	cout<<endl;
	list<int>::iterator it;
	it=l.begin();
	*it=23;
	it++;
	*it=7000;
	it++;
	cout<<endl;
	display(l);
	cout<<"\nthe size of vector is"<<l.size();
	l.remove(7000);
	cout<<endl;
	display(l);
		cout<<"\nthe size of vector is"<<l.size();
	l.sort();
	cout<<endl;
	display(l);
	list <int> l1(5);
//	l.merge(l1);
l.reverse()	;
	cout<<endl;
	display(l);
	l.swap(l1);
	cout<<endl;
	display(l);
}





//vector
display(vector<int>  &v)
{
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}

/*main(){
	vector<int> vec;
	int size,i,n;
    cout<<"Enter the size of the vector";
    cin>>size;
    for(i=0;i<size;i++)
    {
    	cout<<"Enter the elements in the vector";
    	cin>>n;
    	vec.push_back(n);
	}
	display(vec);
	
	//vector<int> vec1{1,2,3,4,5};
	std::vector<int> vec1 = {1, 2, 3, 4, 5};
std::vector<int> vec2(vec1.begin(), vec1.end()); // Initializes vec2 with elements from vec1.

	for(int i=0;i<5;i++) {
		cout<<vec1[i];
}
	display(vec1);
	
    // Default constructor
    std::vector<int> vec1;
    
    // Fill constructor
    std::vector<int> vec2(5, 10); // vec2 = {10, 10, 10, 10, 10}
    
    // Range constructor
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec3(arr, arr + 5); // vec3 = {1, 2, 3, 4, 5}
    
    // Copy constructor
    std::vector<int> vec4(vec3); // vec4 = {1, 2, 3, 4, 5}
    
    // Display the contents of vec4
   

   display(vec2);
   display(vec3);
    display(vec4);
    vec4.pop_back();
    display(vec4);
    cout<<endl;
	display(vec4);*
	
	string word;
	vector<string> mytext;
	while(cin>>word){
		mytext.push_back(word);
	}
	display1(mytext);
	
}
*/




