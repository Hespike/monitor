#include <string>

using namespace std;

struct Monitor{
    string marka;
    string tipus_nev;
    float atmero;
};

bool operator==(Monitor& m1, Monitor& m2){
    if (m1.marka == m2.marka && m1.tipus_nev == m2.tipus_nev && m1.atmero == m2.atmero){
        return true;
    } else {
        return false;
    }
}
/*
#include <string>

using namespace std;

struct Monitor {
    string marka;
    string tipus_nev;
    float atmero;
};

bool operator==(const Monitor& m1, const Monitor& m2) {
    return m1.marka == m2.marka && m1.tipus_nev == m2.tipus_nev &&
        abs(m1.atmero - m2.atmero) < 0.0001f;
}
 */
