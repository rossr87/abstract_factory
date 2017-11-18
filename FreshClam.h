#ifndef FRESHCLAM_H_INCLUDED
#define FRESHCLAM_H_INCLUDED

#include "Clam.h"

using std::cout;
using std::endl;

class FreshClam : public Clam {
public:
    FreshClam() {cout << "Fresh Clam" << endl;}
};

#endif // FRESHCLAM_H_INCLUDED
