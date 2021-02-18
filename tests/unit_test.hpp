#ifndef __UNIT_TEST_HPP__
#define __UNIT_TEST_HPP__

#include "../src/rectangle.cpp"
#include "gtest/gtest.h"

TEST(ConstructorTest, ZeroWidthHeight){
	Rectangle* test = new Rectangle(0,0);
	EXPECT_EQ(test->get_width(), 0);
	EXPECT_EQ(test->get_height(), 0);
}

TEST(ConstructorTest, AccuracyWidthHeight){
	Rectangle* test = new Rectangle(1, 2);
	EXPECT_EQ(test->get_width(), 1);
	EXPECT_EQ(test->get_height(), 2);
}

TEST(ConstructorTest, AccuracyNegativeWidthHeight){
        Rectangle* test = new Rectangle(-1, -2);
        EXPECT_EQ(test->get_width(), -1);
        EXPECT_EQ(test->get_height(), -2);
}

TEST(AreaTest, PositiveArea){
	Rectangle* test = new Rectangle(1,2);
	EXPECT_EQ(test->area(), 2);
}

TEST(AreaTest, NegativeArea){
	Rectangle* test = new Rectangle(-1, 2);
	EXPECT_EQ(test->area(), -2);
}

TEST(AreaTest, ZeroArea){
	Rectangle* test = new Rectangle(0, 0);
	EXPECT_EQ(test->area(), 0);
}

TEST(PerimeterTest, PositivePerimeter){
	Rectangle* test = new Rectangle(1, 2);
	EXPECT_EQ(test->perimeter(), 6);
}

TEST(PerimeterTest, NegativePerimeter){
	Rectangle* test = new Rectangle(-1, 2);
	EXPECT_EQ(test->perimeter(), 2);
}

TEST(PerimeterTest, ZeroPerimeter){
	Rectangle* test = new Rectangle(0, 0);
	EXPECT_EQ(test->perimeter(), 0);
}

#endif //UNIT_HPP
