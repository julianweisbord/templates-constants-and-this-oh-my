#include <iostream>
#include <string>


template <class some_data_type>
class Test{
public:
  Test();
  some_data_type get_one() const;
  void set_one(some_data_type);
  void compare(Test);

private:
     some_data_type one;
     some_data_type two;
     int three;
};

int main(int argc, char**argv){

  Test<int> int_test;
  Test<char> char_test;
  int user_input_one;
  char user_input_two;

  std::cout <<"Enter your age variable one:" <<std::endl;
  std::cin >> user_input_one;

  int_test.set_one(user_input_one);
  std::cout << int_test.get_one()<<std::endl;
  std::cout <<"Enter your first initial for variable two:"<< std::endl;
  std::cin >>user_input_two;

  char_test.set_one(user_input_two);
  std::cout << char_test.get_one() << std::endl;

  int_test.compare(int_test);
  return 0;
}

// need template for every function declaration
template <class some_data_type>
void Test<some_data_type>::set_one(some_data_type const oneInput){
  one = oneInput;
}

template <class some_data_type>
Test<some_data_type>::Test(){
  one = 0U;
  two = 0U;
  three = 5;
}

template <class some_data_type>
some_data_type Test<some_data_type>::get_one() const{
  return one;
}

template <class some_data_type>
void Test<some_data_type>::compare(Test testing){
  if(this->get_one() > 40){
    std::cout << "You are getting old!"<<std::endl;
  }
  else {
    std::cout<< "You are still reasonably young!"<<std::endl;
  }

}
