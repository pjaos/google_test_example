#include "code_to_test.c"
#include <gtest/gtest.h>

TEST(ADD, 1_1) { 
    EXPECT_EQ(2, add(1,1));
}

TEST(ADD, 1_2) { 
    EXPECT_EQ(3, add(1,2));
}

TEST(SUB, 1_1) { 
    EXPECT_EQ(0, sub(1,1));
}

TEST(SUB, 1_2) { 
    EXPECT_EQ(-1, sub(1,2));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

