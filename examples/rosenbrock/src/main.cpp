#include <lma/lma.hpp>

int main()
{
  auto functor = [&](double x, double y, double& r)
  {
    r = x * x + 100. * (y - x * x) * (y - x * x);
    return true;
  };

  // Initial solution
  double x[2] = {-1., -1.};

  std::cout << "Initial parameters : (" << x[0] << ", " << x[1] << ")" <<  std::endl;

  lma::Solver<decltype(functor)>()
  .add(functor, &x[0], &x[1])
  .solve(lma::DENSE, lma::enable_verbose_output());

  std::cout << "\nOptimized parameters : (" << x[0] << ", " << x[1] << ")" <<  std::endl;

  return EXIT_SUCCESS;
}
