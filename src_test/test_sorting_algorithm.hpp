#pragma once

#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include "SortingAlgorithm.hpp"

using namespace SortLibrary;

namespace SortLibrary {

TEST(TestSorting, TestSelectionSort)
{
    std::vector<int> v = {9, 13, 5, 10, 2, 7, 9, 4, 6, 12};
    SelectionSort<int>(v);
    std::vector<int> sortedV = {2, 4, 5, 6, 7, 9, 9, 10, 12 ,13};
    EXPECT_EQ(v, sortedV);
}

TEST(TestSorting, TestInsertionSort)
{
    std::vector<int> v = {9, 13, 5, 10, 2, 7, 9, 4, 6, 12};
    InsertionSort<int>(v);
    std::vector<int> sortedV = {2, 4, 5, 6, 7, 9, 9, 10, 12 ,13};
    EXPECT_EQ(v, sortedV);
}
TEST(TestSorting, TestBubbleSort)
{
    std::vector<int> v = {9, 13, 5, 10, 2, 7, 9, 4, 6, 12};
    BubbleSort<int>(v);
    std::vector<int> sortedV = {2, 4, 5, 6, 7, 9, 9, 10, 12 ,13};
    EXPECT_EQ(v, sortedV);
}
TEST(TestSorting, TestHeapSort)
{
    std::vector<int> v = {9, 13, 5, 10, 2, 7, 9, 4, 6, 12};
    HeapSort<int>(v);
    std::vector<int> sortedV = {2, 4, 5, 6, 7, 9, 9, 10, 12 ,13};
    EXPECT_EQ(v, sortedV);
}
TEST(TestSorting, TestSelectionSortAscending)
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    SelectionSort<int>(v);
    std::vector<int> sortedV = {1, 2, 3, 4, 5};
    EXPECT_EQ(v, sortedV);
}
TEST(TestSorting, TestInsertionSortAscending)
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    InsertionSort<int>(v);
    std::vector<int> sortedV = {1, 2, 3, 4, 5};
    EXPECT_EQ(v, sortedV);
}
TEST(TestSorting, TestBubbleSortAscending)
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    BubbleSort<int>(v);
    std::vector<int> sortedV = {1, 2, 3, 4, 5};
    EXPECT_EQ(v, sortedV);
}
TEST(TestSorting, TestHeapSortAscending)
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    HeapSort<int>(v);
    std::vector<int> sortedV = {1, 2, 3, 4, 5};
    EXPECT_EQ(v, sortedV);
}
TEST(TestSorting, TestSelectionSortDescending)
{
    std::vector<int> v = {5, 4, 3, 2, 1};
    SelectionSort<int>(v);
    std::vector<int> sortedV = {1, 2, 3, 4, 5};
    EXPECT_EQ(v, sortedV);
}
TEST(TestSorting, TestInsertionSortDescending)
{
    std::vector<int> v = {5, 4, 3, 2, 1};
    InsertionSort<int>(v);
    std::vector<int> sortedV = {1, 2, 3, 4, 5};
    EXPECT_EQ(v, sortedV);
}
TEST(TestSorting, TestBubbleSortDescending)
{
    std::vector<int> v = {5, 4, 3, 2, 1};
    BubbleSort<int>(v);
    std::vector<int> sortedV = {1, 2, 3, 4, 5};
    EXPECT_EQ(v, sortedV);
}
TEST(TestSorting, TestHeapSortDescending)
{
    std::vector<int> v = {5, 4, 3, 2, 1};
    HeapSort<int>(v);
    std::vector<int> sortedV = {1, 2, 3, 4, 5};
    EXPECT_EQ(v, sortedV);
}
}


