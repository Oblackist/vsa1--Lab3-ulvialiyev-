#include <bits/stdc++.h>
using namespace std;

struct Sernisin {
    string ad;
    int yas;
};

void novbeyeElaveEt(queue<Sernisin>& yaslilar, queue<Sernisin>& yasli_olmayanlar, const string& ad, int yas) {
    if (yas > 65) {
        yaslilar.push({ad, yas});
        cout << ad << " (" << yas << ") yaslilar novbesine elave olundu\n";
    } else {
        yasli_olmayanlar.push({ad, yas});
        cout << ad << " (" << yas << ") yasli olmayanlar novbeye elave olundu\n";
    }
}

void avtobusaMin(queue<Sernisin>& yaslilar, queue<Sernisin>& yasli_olmayanlar) {
    if (!yaslilar.empty()) {
        Sernisin s = yaslilar.front();
        yaslilar.pop();
        cout << s.ad << " (" << s.yas << ") prioritetle avtobusa mindi\n";
    } else if (!yasli_olmayanlar.empty()) {
        Sernisin s = yasli_olmayanlar.front();
        yasli_olmayanlar.pop();
        cout << s.ad << " (" << s.yas << ") avtobusa mindi\n";
    } else {
        cout << "Novbe bosdur!\n";
    }
}

void novbeniCapEt(queue<Sernisin> yaslilar, queue<Sernisin> yasli_olmayanlar) {
    cout << "Yaslilar novbesi\n";
    if (yaslilar.empty()) cout << "bosdur\n";
    int nomre = 1;
    while (!yaslilar.empty()) {
        cout << nomre++ << ". " << yaslilar.front().ad << " - " << yaslilar.front().yas << " yas\n";
        yaslilar.pop();
    }

    cout << " Normal novbe \n";
    if (yasli_olmayanlar.empty()) cout << "bosdur\n";
    nomre = 1;
    while (!yasli_olmayanlar.empty()) {
        cout << nomre++ << ". " << yasli_olmayanlar.front().ad << " - " << yasli_olmayanlar.front().yas << " yas\n";
        yasli_olmayanlar.pop();
    }
}

int main() {
    queue<Sernisin> yaslilar, yasli_olmayanlar;

    novbeyeElaveEt(yaslilar, yasli_olmayanlar, "Ramin", 25);
    novbeyeElaveEt(yaslilar, yasli_olmayanlar, "Elcin", 70);
    novbeyeElaveEt(yaslilar, yasli_olmayanlar, "Nihad", 30);
    novbeyeElaveEt(yaslilar, yasli_olmayanlar, "Nuri", 68);
    novbeyeElaveEt(yaslilar, yasli_olmayanlar, "Seid", 19);

    novbeniCapEt(yaslilar, yasli_olmayanlar);

    cout << "\n";
    avtobusaMin(yaslilar, yasli_olmayanlar);
    avtobusaMin(yaslilar, yasli_olmayanlar);
    avtobusaMin(yaslilar, yasli_olmayanlar);
    cout << "\n";

    novbeniCapEt(yaslilar, yasli_olmayanlar);

    return 0;
}
