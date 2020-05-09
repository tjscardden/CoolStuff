#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

/**
 * @class Rectangle
 *
 * The purpose of this class is to create a simple class that represents a rectangle
 */
class Rectangle
{
public:
  /**
   * @brief CTOR: Create a rectangle
   *
   * @param width Width of the rectangle
   * @param height Height of the rectangle
   */
  Rectangle(double width, double height);
  /**
   * @brief Calculate and return the area of the rectangle;
   *
   * @return double containing the area of the rectangle
   */
  double getArea(); 
  /**
   * @brief Calculate and return the area of the circumference;
   *
   * @return double containing the area of the circumference
   */
  double getCircumference(); 
private:
  double m_width{0};
  double m_height{0};
};

#endif /* RECTANGLE_HPP */


