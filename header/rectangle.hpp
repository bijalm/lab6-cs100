#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle(int w,int h);

	int get_width(){return width;}
	int get_height(){return height;}

        void set_width(int w){this->width = w;}
        void set_height(int h){this->height = h;}
        int area();
        int perimeter();
};

#endif // RECTANGLE_HPP
