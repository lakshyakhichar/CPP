//pointers
//simple pointer's

/*
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num{100};
    
    cout << "Value of the num is : " << num << endl;  //10
    cout << "sizeof of the num is : " << sizeof num << " bits. " <<   endl;  
    cout << "Address of the num is : " << &num << endl; 
    
    int *p;
    
    cout << "\nValue of the p is : " << p << endl;  
    cout << "sizeof of the p is : " << sizeof p << " bits. " <<   endl;  
    cout << "Address of the p is : " << &p << endl;

   p = nullptr ;

   cout << "\nValue of the p is : " << p << endl;

   int *p1{nullptr};
   double *p2{nullptr};
   unsigned long long *p3{nullptr};
   vector <string> *p4{nullptr};
   string *p5{nullptr};

   cout << "\nsizeof of the p1 is : " <<sizeof p1 << endl; 
     cout << "sizeof of the p2 is : " <<sizeof p2 << endl; 
     cout << "sizeof of the p3 is : " <<sizeof p3 << endl; 
     cout << "sizeof of the p4 is : " <<sizeof p4 << endl; 
     cout << "sizeof of the p5 is : " <<sizeof p5 << endl;
     
    int score{100};
    double temp{100.35};
    
    int *score_ptr{nullptr};
    
    score_ptr = &score ;
    
    cout << "\nvalue of score_ptr : " << score_ptr << endl;
    cout << "Address of the score : " << &score << endl;
    cout << "value of score : " << score << endl;
    
    //score_ptr = temp ; // error 
    
  
    return 0;
}
*/

//Derefrencing pointer 

/*
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num {10};
    int *num_ptr{&num};
    
    cout << "num = " << num << endl;
    cout << "num_ptr = " << num_ptr << endl;
    cout << "*num_ptr = " << *num_ptr << endl;
    
    *num_ptr = 200 ;
    cout << "num = " << num << endl;
    cout << "*num_ptr = " << *num_ptr << endl;
    
    cout << "------------------------------" << endl;
    
    double high_temp{100.32};
    double low_temp{37.23};
    double *temp_ptr{&high_temp};
    
    cout << *temp_ptr << endl;
    
    temp_ptr = &low_temp ;
    
    cout << *temp_ptr << endl;
    
    cout << "-------------------------------" << endl;
    
    string name{"FRANK"};
    string *string_ptr{&name};
    string another{"moe"};
    cout << *string_ptr << endl;
    
    name="moe" ;
    cout << *string_ptr << endl;
    
    *string_ptr = "moe" ;
    cout << *string_ptr << endl;
    
    string_ptr = &another ;
    cout << *string_ptr << endl;
    
    cout << "---------------------" << endl;
    
    vector <string> stooges{"mr.","lakshya","choudhary"};
    vector <string> *vector_ptr{nullptr};
    
    vector_ptr = &stooges;
    
    cout << "stooges 1 : " << (*vector_ptr).at(0) << endl;
    cout << "stooges 2 : " << (*vector_ptr)[1] << endl;
    cout << "stooges 3 : " << (*vector_ptr)[2] << endl;
    
    cout << "stooges : " ;

   for(auto name : *vector_ptr)
      cout << name << " " ;
 cout << endl; 
    
    return 0;
}
*/

//Dynamic memory

/*
#include <iostream>

using namespace std;

int main() {
    
    int *num_ptr{nullptr};
    
    num_ptr = new int ;
    cout << "*num_ptr : " << *num_ptr << endl; // garbage value 
    cout << "num_ptr : "  << num_ptr << endl;  // address of num_ptr
    delete num_ptr;  
    
    cout << "\n-------------------------------\n" << endl;
    
    size_t size{} ;
    double *temp_ptr{nullptr};
    cout << "how much size of array do you need ?  " << endl; 
    cin >> size ;
    temp_ptr = new double[size];
    cout << temp_ptr << endl;
    delete [] temp_ptr ;
    
    
    
    cout << endl;
    return 0;
}
*/

//relationship b/w array and pointer 

/*
#include <iostream>

using namespace std;

int main() {
    int scores[]{100,12,16};
    
    cout << "score : " << scores << endl;
    cout << "*score : " << *scores << endl;
    
    int *score_ptr{scores} ;
    cout << "score : " << scores << endl;
    cout << "*score : " << *scores << endl;
    
    cout << endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    int nums[]{1,2,3,4,};
    cout << "value of num is : " << nums << endl;
    int *num_ptr{nums} ;
    cout << "num_ptr : " << num_ptr << endl;
    
    cout << "\nnarray subscript\n------------------" << endl;
    
    cout << nums[0] << endl; 
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    cout << nums[3] << endl;
    
    cout << "\npointer subscript\n------------------" << endl;
    
    cout << num_ptr << endl;
    cout << num_ptr[0] << endl;
    cout << num_ptr[1] << endl;
    cout << num_ptr[2] << endl;
    cout << num_ptr[3] << endl;
    
    cout << "\nnarray offset\n------------------" << endl;
    
    cout << *nums << endl;
    cout << *(nums+1) << endl;
    cout << *(nums+2) << endl;
    cout << *(nums+3) << endl;
    
    cout << "\npointer offset\n------------------" << endl;
    
    cout << *num_ptr << endl;
    cout << *(num_ptr+1) << endl;
    cout << *(num_ptr+2) << endl;
    cout << *(num_ptr+3) << endl;
    
    cout << endl;
    return 0;
}
*/

//pointer arithematic
/*
#include <iostream>
using namespace std;
int  main() {
    
    int score[] {100,99,64,28,-1};
    int *score_ptr{score};
    
    cout << score_ptr << endl;
    cout << *score_ptr << endl;
    cout << score_ptr[0] << endl;
    cout << "---------" << endl;
    while(*score_ptr != -1) {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    cout << "---------------" << endl;
    score_ptr= score ;
    while(*score_ptr != -1)
       cout << *score_ptr++ << endl;
    
    cout << "------------------------" << endl;
    
    string s1{"frank"};
    string s2{"frank"};
    string s3{"james"};
    
    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};
    
    cout << boolalpha ;
    cout << p1 << " == " << p2 << " : " << (p1==p2) << endl;
    cout << p1 << " == " << p3 << " : " << (p1==p3) << endl;
    
    cout << *p1 << " == " << *p2 << " : " << (*p1==*p2) << endl;
    cout << *p1 << " == " << *p3 << " : " << (*p1==*p3) << endl;    
    
    p2 = &s3 ;
    cout << *p2 << " == " << *p3 << " : " << (*p2==*p3) << endl;
    
    cout << "-------------------------------" <<endl;
    
    char name [] {"frank"};
    
    char *name_ptr1{nullptr};
    char *name_ptr2{nullptr};
    
     name_ptr1 = &name[0];
     name_ptr2 = &name[3];
     
    cout << "string " << *name_ptr2 << " is " << (name_ptr2-name_ptr1) << " away from " << *name_ptr1  << endl;
    cout << "string " << name[3] << " is " << (name_ptr2-name_ptr1) << " away from " << name[0] << endl;
    
    
    cout << endl;
    return 0;
}

*/

// passing pointer to functrion 

/*
#include <iostream>

using namespace std;
void double_data(int *int_ptr) {
    *int_ptr *= 2;
}

int main() {
    int value{};
    int *int_ptr{nullptr};
    cout << "enter value : " ;
    cin >> value ;
    double_data(&value);
    cout << value << endl;
    
    cout << "---------------" << endl;
    
    int_ptr = &value ;
    double_data(int_ptr) ;
    cout << "value : " << value << endl;

 
    cout << endl;
    return 0;
} 
 */
/*
#include <iostream>

using namespace std;

void swap(int,int);

void swap(int *a,int *b) {
    int temp {*a} ;
    *a = *b ;
    *b =temp;
}
int main() {
    int x{10} , y{20} ;
    cout << "\nx : " << x << endl;
    cout << "y : " << y << endl;
    
    cout << "-------------------" << endl;
    swap(&x,&y) ;
    
    cout << "\nx : " << x << endl;
    cout << "y : " << y << endl;
    return 0;
} 

 */
/* 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//void display(vector <string> *v);
void display(int,int) ;
//void display(vector <string> *v) {
   // for (auto str : *v)
        //cout << str << " " ;
    //cout << endl; }
    
void display(int *a , int b ) {
    while(*a != b ) 
        cout << *a++ << "\t" ;
    cout << endl;
    
}


int main() {
    //cout << "------------------" << endl;
    //vector <string> stooges{"larry","moe","curly"};
    //display(&stooges);
    
    cout << "----------------" << endl;
    
    int score[] {66,54,47,89,45,78,97,-1};
    display(score,-1);
    
    cout << endl;
    return 0;
}
 */
/*
#include <iostream>

using namespace std;

int *create_array(size_t size , int init_value ) {
    int *new_storage {nullptr};
    new_storage = new int[size];
    for (size_t i{0} ; i < size  ; ++i )
        *(new_storage + i ) = init_value ;
    return new_storage ;
} 

void display(int *array,size_t size) {
    for(size_t i{0} ; i< size ; ++i)
        cout << array[i] << "  " ;
    cout << endl;
}

int main() {
    int *my_array{nullptr};
    size_t size{0};
    int init_value{0};
    
    cout << "\nhow many int you would like to allocate : " ;
    cin >> size ;
    cout << "what value you would like to initialized to : " ;
    cin >> init_value ;
    
    my_array = create_array(size,init_value);    
    
    cout << "---------------------------------" << endl;
    
    display(my_array,size);
    delete [] my_array ;
    
    cout << endl;
    return 0 ;
}
*/

// REFREANCE

/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int num{100};
    int &ref{num};
    
    cout << "num : " << num << endl;
    cout << "ref : " << ref << endl;

    cout << "---------------" << endl;

    num = 200;
    
    cout << "num : " << num << endl;
    cout << "ref : " << ref << endl;

    cout << "---------------" << endl;
    
    ref = 300 ;    
    cout << "num : " << num << endl;
    cout << "ref : " << ref << endl;
    
    cout << "---------------" << endl;
    
    vector <string> stooges{"larry","moe","currly"};

    for (auto str : stooges)
        str = "FUNNY" ;

    for (auto str : stooges)    
        cout << str << " " ;

    cout << "\n---------------" << endl ;
    
    for (auto &str : stooges)
        str = "FUNNY" ;

    for (auto &str : stooges)    
        cout << str << " " ;
        
    cout << "------------------" << endl;
    cout << endl;
    return 0;
}
*/




 
