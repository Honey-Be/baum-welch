#ifndef VOCA_H_
#define VOCA_H_

#include <string>

#define N_VOCA 13
#define MAX_PHONES 6

using namespace std;

struct vocaType {
    string name;
    int n_phones;
    string phones[MAX_PHONES];
};

extern vocaType vocas[N_VOCA];

extern double unigram[N_VOCA];
extern double bigram[N_VOCA][N_VOCA];

void readUnigram();
void readBigram();

#endif