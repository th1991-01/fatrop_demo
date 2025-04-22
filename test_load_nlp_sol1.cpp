#include <casadi/casadi.hpp>
using namespace casadi;

int main()
{
  Function solver = nlpsol("solver", "fatrop", "nlp.so");

  auto inf = std::numeric_limits<double>::infinity();

  std::cout<<"solver:\n"<<solver<<std::endl;

  std::vector<double> x0 = {0, 0, 1.5708, 10, 0, 1, 0, 0.5, 1.5708, 10, 0, 1, 0, 1, 1.5708, 10, 0, 1, 0, 1.5, 1.5708, 10, 0, 1, 0, 2, 1.5708, 10, 0, 1, 0, 2.5, 1.5708, 10, 0, 1, 0, 3, 1.5708, 10, 0, 1, 0, 3.5, 1.5708, 10, 0, 1, 0, 4, 1.5708, 10, 0, 1, 0, 4.5, 1.5708, 10, 0, 1, 0, 5, 1.5708, 10, 0, 1, 0, 5.5, 1.5708, 10, 0, 1, 0, 6, 1.5708, 10, 0, 1, 0, 6.5, 1.5708, 10, 0, 1, 0, 7, 1.5708, 10, 0, 1, 0, 7.5, 1.5708, 10, 0, 1, 0, 8, 1.5708, 10, 0, 1, 0, 8.5, 1.5708, 10, 0, 1, 0, 9, 1.5708, 10, 0, 1, 0, 9.5, 1.5708, 10, 0, 1, 0, 10, 1.5708, 10};

  std::vector<double> lbg = {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 10};

  std::vector<double> ubg = {0, 0, 0, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 0, 0, 0, inf, 0, 10};

  std::vector<double> lbx = {-inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0, -0.523599, 0, -inf, -inf, -inf, 0};
  
  std::vector<double> ubx = {inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf, 0.523599, 1, inf, inf, inf, inf};

  std::vector<double> p = {0, 0, 1.5708};
 
  std::map<std::string, DM> arg = {{"x0", x0},
    {"lbg", lbg},
    {"ubg", ubg},
    {"lbx", lbx},
    {"ubx", ubx},
    {"p", p}};
 
  auto res = solver(arg);
 
  std::cout<<"res:\n"<<res<<std::endl;
 
  return 0;
}
