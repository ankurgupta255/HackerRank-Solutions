#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp = boost::multiprecision;
using namespace std;
int main()
{
    int n;
    cin >> n;
     mp::cpp_int f = 1;
    for(int i=1;i<=n;i++){
      f*=i;
    }
    cout<<f;
    return 0;
}

