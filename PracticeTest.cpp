/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// Palindrome Testing
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("abaa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_single_character_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_complex_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("abababacedecabababa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_mixed_case_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("AbPdPBa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

// sortDescending Testing
TEST(PracticeTest, can_sort_ascending)
{
    Practice obj;
    int a = 1, b = 2, c = 3;

    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}

TEST(PracticeTest, can_sort_scrambled)
{
    Practice obj;
    int a = 1, b = 3, c = 2;

    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);

}

TEST(PracticeTest, can_sort_descending)
{
    Practice obj;
    int a = 3, b = 2, c = 1;

    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
}
