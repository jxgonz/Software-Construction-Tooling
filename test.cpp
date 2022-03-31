
#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, OneChar) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "a";
    EXPECT_EQ("a", echo(2,test_val));
}

TEST(EchoTest, NumTest) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "65"; test_val[2] = "66";
    EXPECT_EQ("65 66", echo(3,test_val));
}


TEST(EchoTest, SpecChar) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "@"; test_val[2] = "#";
    EXPECT_EQ("@ #", echo(3,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

