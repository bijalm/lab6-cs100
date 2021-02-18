#include "../header/rectangle.hpp"

Rectangle::Rectangle(int w, int h){
        Rectangle::set_width(w);
        Rectangle::set_height(h);

}

int Rectangle::area() {
        return this->width * this->height;
}

int Rectangle::perimeter() {
        return this->width * 2 + this->height * 2;
}
