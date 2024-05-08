#include <chrono>
#include <iostream>
#include <vector>
#include <unistd.h>
#include <numeric>
#include <algorithm>


#include "SortingAlgorithm.hpp"

using namespace std;

int main(int argc, char ** argv)
{

    int size_t = std :: atoi (argv[1]);

    vector <int> v1(size_t);
    vector <int> v2(size_t);




    for (unsigned int i = 0; i < size_t; i++) {
        v1[i] = rand();
        v2[i] = rand();
        cout << v1[i] << endl;


    }

    unsigned int n = 20;

    vector <double> time;


    for (unsigned int j = 0; j < n; j ++) {

        chrono :: steady_clock :: time_point t_begin
                = chrono :: steady_clock :: now();

        SortLibrary :: BubbleSort(v1);

        sleep (1);

        chrono :: steady_clock :: time_point t_end
                = chrono :: steady_clock :: now();

        double timeElapsed = chrono :: duration_cast <chrono :: microseconds>
                (t_end-t_begin).count();

        time.push_back(timeElapsed);

    }

    double somma = 0;
    for (unsigned int i = 0; i<n; i++){
        somma = somma + time[i];
    }

    double media_tempi = somma * (1./n);

    cout <<"Tempo medio per il BubbleSort nel primo vettore: " << media_tempi << endl;

    time.clear();

    for (unsigned int j = 0; j < n; j ++) {

        chrono :: steady_clock :: time_point t_begin
                = chrono :: steady_clock :: now();

        SortLibrary :: BubbleSort(v2);

        sleep (1);

        chrono :: steady_clock :: time_point t_end
                = chrono :: steady_clock :: now();

        double timeElapsed = chrono :: duration_cast <chrono :: microseconds>
                (t_end-t_begin).count();

        time.push_back(timeElapsed);

    }

    somma = 0;
    for (unsigned int i =0; i<n; i++){
        somma = somma + time [i];
    }

    media_tempi = somma * (1./n);
    cout <<"Tempo medio per il BubbleSort nel secondo vettore: " << media_tempi << endl;

    time.clear();
    for (unsigned int j = 0; j < n; j ++) {

        chrono :: steady_clock :: time_point t_begin
                = chrono :: steady_clock :: now();

        SortLibrary :: MergeSort(v1);

        sleep (1);

        chrono :: steady_clock :: time_point t_end
                = chrono :: steady_clock :: now();

        double timeElapsed = chrono :: duration_cast <chrono :: microseconds>
                (t_end-t_begin).count();

        time.push_back(timeElapsed);

    }

    somma = 0;
    for (unsigned int i = 0; i<n; i++){
        somma = somma + time[i];
    }

    media_tempi = somma * (1./n);

    cout <<"Tempo medio per il MergeSort nel primo vettore: " << media_tempi << endl;

    time.clear();



    for (unsigned int j = 0; j < n; j ++) {

        chrono :: steady_clock :: time_point t_begin
                = chrono :: steady_clock :: now();

        SortLibrary :: MergeSort(v2);

        sleep (1);

        chrono :: steady_clock :: time_point t_end
                = chrono :: steady_clock :: now();

        double timeElapsed = chrono :: duration_cast <chrono :: microseconds>
                (t_end-t_begin).count();

        time.push_back(timeElapsed);

    }

    somma = 0;
    for (unsigned int i = 0; i<n; i++){
        somma = somma + time[i];
    }

    media_tempi = somma * (1./n);

    cout <<"Tempo medio per il MergeSort nel secondo vettore: " << media_tempi << endl;

    time.clear();


    return 0;
}

