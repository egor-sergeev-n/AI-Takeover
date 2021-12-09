#include <gtest/gtest.h>
#include <ctime>
#include <random>
#include "gmock/gmock.h"
#include "Element.h"

using ::testing::ElementsAre;

// Tests for Hero

TEST(TEST_CREATE_HERO, right_input_test) {
    Hero hero(/faile1);
    hero.setPosition(sf::Vector2i(100, 30));
    ASSERT_ANY_THROW(std::exception);
    ASSERT_EQ( hero.getPosition(), sf::Vector2i(100, 30));
}

TEST(TEST_CREATE_HERO, wrong_input) {
    Hero hero(/faile1);
    hero.setPosition(sf::Vector2i(-7000, -7000));
    ASSERT_ANY_THROW(std::out_of_range);
 }

TEST(TEST_MOVE_HERO, input_test) {
    Hero hero(/faile1);
    hero.move();
    ASSERT_ANY_THROW(exception);
    ASSERT_EQ(hero.getSpeed(), sf::Vector2i(10, 0));
}

TEST(TEST_JUMP_HERO, input_test) {
    Hero hero(/faile1);
    hero.setPosition(sf::Vector2i(10, 10));
    hero.jump();
    ASSERT_ANY_THROW(exception);
    ASSERT_EQ(hero.getSpeed(), sf::Vector2i(10, -5));
}

TEST(TEST_COLLISION_HERO, input_test) {
    Hero hero(/faile1);
    hero.setPosition(sf::Vector2i(10, 10));

    Platform platform(/file2);
    platform.setPosition(sf::Vector2i(10, 10));

    ASSERT_ANY_THROW(exception);
    ASSERT_EQ(hero.getState(), state::"STAY");
}

TEST(TEST_FINISH_HERO, input_test) {
    Hero hero(/faile1);
    hero.setPosition(sf::Vector2i(10, 10));

    Finish finish(/file2);
    finish.setPosition(sf::Vector2i(10, 10));

    ASSERT_ANY_THROW(exception);
    ASSERT_EQ(hero.getState(), state::"FINISH");
}

TEST(TEST_CALL_HERO, test_methods) {
    Hero hero(/faile1);
   // don't do yet
    EXPECT_CALL(hero.handlInput(), hero.move());
}

// Tests for Platform

TEST(TEST_CREATE_PLATFORM, right_input_test) {
    Platform platform(/faile1);
    platform.setPosition(sf::Vector2i(100, 30));
    ASSERT_ANY_THROW(std::exception);
    ASSERT_EQ( platform.getPosition(), sf::Vector2i(100, 30));
}

TEST(TEST_CREATE_PLATFORM, wrong_input) {
    Platform platform(/faile1);
    platform.setPosition(sf::Vector2i(-7000, -7000));
    ASSERT_ANY_THROW(std::out_of_range);
}

// Tests for Finish

TEST(TEST_CREATE_FINISH, right_input_test) {
    Finish finish/faile1);
    finish.setPosition(sf::Vector2i(100, 30));
    ASSERT_ANY_THROW(std::exception);
    ASSERT_EQ( finish.getPosition(), sf::Vector2i(100, 30));
}

TEST(TEST_CREATE_FINISH, wrong_input) {
    Finish finish(/faile1);
    finish.setPosition(sf::Vector2i(-7000, -7000));
    ASSERT_ANY_THROW(std::out_of_range);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}