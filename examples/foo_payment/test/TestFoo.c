#include "foo.h"
#include "unity.h"
#include "unity_fixture.h"

float minValue = 0.01f;
float maxValue = 99999.00f;
char statusRegular[15] = "regular";
char statusEstudante[15] = "estudante";
char statusAposentado[15] = "aposentado";
char statusVip[15] = "VIP";

TEST_GROUP(Foo);


TEST_SETUP(Foo)
{
}

TEST_TEAR_DOWN(Foo)
{
}

TEST(Foo, TestFoo1)
{
  TEST_ASSERT_EQUAL(0, payment(minValue, statusEstudante));
}

TEST(Foo, TestFoo2)
{
  TEST_ASSERT_EQUAL(0, payment(maxValue, statusRegular));  
}

TEST(Foo, TestFoo3)
{
  TEST_ASSERT_EQUAL(0, payment(0.02, statusAposentado));  
}

TEST(Foo, TestFoo4)
{
  TEST_ASSERT_EQUAL(0, payment(89999, statusVip));
}

TEST(Foo, TestFoo5)
{
  TEST_ASSERT_EQUAL(1, payment(0, statusEstudante));  
}

TEST(Foo, TestFoo6)
{
  TEST_ASSERT_EQUAL(1, payment(99999.01, statusEstudante));  
}

TEST(Foo, TestFoo7)
{
  TEST_ASSERT_EQUAL(1, payment(-1, statusEstudante));  
}

TEST(Foo, TestFoo8)
{
  TEST_ASSERT_EQUAL(2, payment(minValue, ""));
}

TEST(Foo, TestFoo9)
{
  TEST_ASSERT_EQUAL(2, payment(minValue, "teste"));  
}

TEST(Foo, TestFoo10)
{
  TEST_ASSERT_EQUAL(2, payment(minValue, "vip"));
}

TEST(Foo, TestFoo11)
{
  TEST_ASSERT_EQUAL(2, payment(5000.00, NULL));
}

TEST(Foo, TestFoo12)
{
  TEST_ASSERT_EQUAL(2, payment(6000, "asdgahsvdhasvdhasvdhasvdhasvhdvhasdvh"));
}

TEST(Foo, TestFoo13)
{
  TEST_ASSERT_EQUAL(0, payment(59999, statusAposentado));
}