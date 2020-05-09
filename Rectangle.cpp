#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double height) : m_width(width), m_height(height)
{
}

double Rectangle::getArea() 
{
  return m_width * m_height;
}

double Rectangle::getCircumference()
{
  return m_width * 2 +  m_height * 2;
}


