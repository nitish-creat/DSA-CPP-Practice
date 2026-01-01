#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

void typeEffect(const string &text, int delayMicroseconds = 50000) {
    for (char ch : text) {
        cout << ch << flush;
        usleep(delayMicroseconds);
    }
}

int main() {
    string a = "Ki Puchhde O Haal Ho Jandia Kamaal";
    string b = "\nJado Baithe Mere Naal Fir Kise Di Na Bhaal";
    string c = "\nChehre Vaise Kayi Jodh Tera Mera Sahi";
    string d = "\nSanu Rabb Ne Bnaya Jive Ik Duje Lyi";
    string e = "\nGulzar Nu Bulava Kuj Tere Te Likhava";
    string f = "\nMeinu Sanghe Di Shayari Kamzor Lagdi";

    typeEffect(a);
    sleep(.5);
    typeEffect(b);
    sleep(.5);
    typeEffect(c);
    sleep(1);
    typeEffect(d);
    sleep(1);
    typeEffect(e);
    sleep(1);
    typeEffect(f);

    cout << endl;
    return 0;
}
