#include"gtest/gtest.h"
#include "pch.h"

#include "../Vector/Vector.h"


//using namespace std;


TEST(TEST_SIZE, test1) {
	vector<int> vec(4);
	EXPECT_EQ(4, vec.m_size());
}

TEST(TEST_ASSIGNMENT, test1) {
	vector<int> vec(2);
	vec[0] = 1;
	vec[1] = 2;
	EXPECT_EQ(1, vec[0]);
	EXPECT_EQ(2, vec[1]);
}

TEST(TEST_PUSH_BACK, test1) {
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	EXPECT_EQ(1, vec[0]);
	EXPECT_EQ(2, vec[1]);
}

TEST(TEST_ERASE, test1) {
	vector<int> vec;
	vec.push_back(3);
	vec.push_back(7);
	vec.push_back(10);
	vec.erase(0);
	EXPECT_EQ(7, vec[0]);
}

TEST(TEST_ITERATOR, test1) {
	vector<int> myvector;
	int i = 1;
	//int i2 = 0;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	myvector.push_back(5);
	myvector.push_back(6);

	for (auto it = myvector.begin(); it != myvector.end(); ++it) {
		//i2 = it*;
		EXPECT_EQ(i, *it);
		i++;
	}
		
}

