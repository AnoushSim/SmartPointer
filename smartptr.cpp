#include <iostream>

template <typename T>
class SP {
  public:
  
   SP ();
   SP (T* ptr) { m_ptr = ptr; };
   ~SP () { delete m_ptr; std::cout << "Destructor is invoked"<<std::endl; };
   T& operator*() { return *m_ptr; };
   T* operator->() { return this; };
   
  private:
  
   T* m_ptr;

};


int main() 
{
  SP<int> obj(new int) ;
  int a;
  std::cin>>a;
  std::cout << *obj <<std::endl;
  SP<double> obj1(new double) ;
  *obj1 = a * 2;
  std::cout << *obj1<<std::endl;
  return 0;
}
