#include <iostream>
#include "Rectangle.hpp"

int main(int argc, char* argv[])
{
  std::cout << "Westons Cool Stuff:\n\n";

  double w = 15.34;
  double h = 12.77;

  if (argc < 2)
  {
     std::cout << "You can specify different values on the command line.\n";
     std::cout << "Try: " << argv[0] << " 3 4\n\n";
     std::cout << "Using default width=" << w << " height=" << h << "\n";
  }
  else if (argc == 3)
  {
    w = atof(argv[1]);
    h = atof(argv[2]);  
    std::cout << "Using values width=" << w << " height=" << h << "\n";
  }

  // Do some stuff with the rectangle
  Rectangle r(w, h);
  std::cout << "Area: " << r.getArea() << "\n";
  std::cout << "Circumference: " << r.getCircumference() << "\n";
}
