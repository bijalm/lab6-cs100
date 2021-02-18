#include "../header/rectangle.hpp"

Rectangle::Rectangle(int w, int h){
        Rectangle::set_width(w + 1);
        Rectangle::set_height(h + 1);

}

int Rectangle::area() {
        return this->width * this->height;
}

int Rectangle::perimeter() {
        return this->width * 2 + this->height * 2;
}
