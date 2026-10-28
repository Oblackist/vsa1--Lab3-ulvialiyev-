#include <bits/stdc++.h>
using namespace std;

struct Musteri {
    string ad;
    string derman;
};

void novbeyeElaveEt(queue<Musteri>& novbe, const string& ad, const string& derman) {
    novbe.push({ad, derman});
    cout << ad << " novbeye elave olundu (" << derman << ")\n";
}

void ilkMusteriniCixar(queue<Musteri>& novbe) {
    if (novbe.empty()) {
        cout << "Novbe bosdur!\n";
        return;
    }
    Musteri m = novbe.front();
    cout << m.ad << " dermanini (" << m.derman << ") aldi ve novbeden cixdi\n";
    novbe.pop();
}

void novbeniCapEt(queue<Musteri> novbe) {
    if (novbe.empty()) {
        cout << "Novbe bosdur!\n";
        return;
    }
    cout << "Novbe\n";
    int nomre = 1;
    while (!novbe.empty()) {
        cout << nomre++ << ". " << novbe.front().ad
             << " - " << novbe.front().derman << "\n";
        novbe.pop();
    }
}

int main() {
    queue<Musteri> novbe;

    novbeyeElaveEt(novbe, "Eli", "Paracetamol");
    novbeyeElaveEt(novbe, "Leyla", "Aspirin");
    novbeyeElaveEt(novbe, "Orxan", "Vitamin C");

    novbeniCapEt(novbe);

    ilkMusteriniCixar(novbe);

    novbeniCapEt(novbe);

    return 0;
}
