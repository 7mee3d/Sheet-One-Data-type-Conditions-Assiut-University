#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using LLi = long long int;
using ULLi = unsigned long long int;
using Simi_Big_Number_Size = signed int;
using Not_Include_Negative_Simi_Big_Number_Size = unsigned int;
using small_number_size = short int;
using Not_Include_Negative_Numbers_small_number_size = unsigned short int;

using this_is_string_Okey = string;

[[maybe_unused]] signed short int const kZERO{0};
[[maybe_unused]] signed short int const kNUMBER_TEN{10};
[[maybe_unused]] signed short int const kONE{1};
[[maybe_unused]] signed short int const kNUMBER_MAX_RANGE_INPUT{10000};
[[maybe_unused]] signed short int const kNUMBER_DIVISION_BY_TWO{2};
[[maybe_unused]] signed short int const kNUMBER_TWO_MULTIPLY_TEN{20};
[[maybe_unused]] signed int const kSIZE_ARRAY{3};
[[maybe_unused]] signed int const kNUMBER_FOUR{4}; 

this_is_string_Okey readWordInUser (void) {

    this_is_string_Okey name {""} ;
    cin >> name ; 

    return name ; 

}


void printSayHelloName ( this_is_string_Okey name ) {

    cout << "Hello, " << name <<endl; 

}

int main (void) {

    printSayHelloName (readWordInUser());
    return 0 ; 

}