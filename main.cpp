// Taking Damage
// Demonstrates function inlining

#include <iostream>

int radiation(int health);

using namespace std;

int main() {
    int health = 80;
    cout << "Your health is " << health << "\n\n";

    health = radiation(health);
    cout << "After radiation exposure, your health is " << health << "\n\n";

    health = radiation(health);
    cout << "After radiation exposure, your health is " << health << "\n\n";

    health = radiation(health);
    cout << "After radiation exposure, your health is " << health << "\n\n";

    return 0;
}

inline int radiation(int health) {
    return (health / 2);
}


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int triple(int number);
//string triple(string text);
//
//int main() {
//    cout << "Tripling 5: " << triple(5) << "\n\n";
//    cout << "Tripling ’gamer’: " << triple("gamer ");
//
//    return 0;
//}
//
//int triple(int number) {
//    return (number * 3);
//}
//
//string triple(string text) {
//    return (text+text+text);
//}
