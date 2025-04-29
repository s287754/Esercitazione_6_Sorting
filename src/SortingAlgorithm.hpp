#pragma once

#include <iostream>
#include <vector>

using namespace std;

namespace SortLibrary {
	template<typename T>
void BubbleSort(std::vector<T>& v)
{
    const unsigned int n = v.size();
    for (unsigned int i = 0; i < n - 1; ++i)
    {
        for (unsigned int j = 0; j < n - 1 - i; ++j)
        {
            if (v[j] > v[j + 1])
            {
                T tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }
}


template<typename T>
void Heapify(std::vector<T>& v, unsigned int n, unsigned int i)
{
    unsigned int largest = i;
    unsigned int left = 2 * i + 1;
    unsigned int right = 2 * i + 2;

    if (left < n && v[left] > v[largest])
        largest = left;
    if (right < n && v[right] > v[largest])
        largest = right;
    
    if (largest != i)
    {
        std::swap(v[i], v[largest]);
        Heapify(v, n, largest);
    }
}

template<typename T>
void HeapSort(std::vector<T>& v)
{
    unsigned int n = v.size();
    
   
    for (unsigned int i = n / 2 - 1; i >= 0; --i)
    {
        Heapify(v, n, i);
    }

    
    for (unsigned int i = n - 1; i > 0; --i)
    {
        std::swap(v[0], v[i]); 
        Heapify(v, i, 0);       
    }
}
template<typename T>
void SelectionSort(std::vector<T>& v)
{
    const unsigned int n = v.size();
    for (unsigned int i = 0; i < n - 1; ++i)
    {
        unsigned int minIndex = i;
        for (unsigned int j = i + 1; j < n; ++j)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        std::swap(v[i], v[minIndex]);
    }
}


template<typename T>
void InsertionSort(std::vector<T>& v)
{
    const unsigned int n = v.size();
    for (unsigned int i = 1; i < n; ++i)
    {
        T key = v[i];
        unsigned int j = i - 1;
        while (j >= 0 && v[j] > key)  
        {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}


}


