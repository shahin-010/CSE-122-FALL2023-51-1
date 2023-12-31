#include<iostream>
using namespace std;

class ManchesterUnited {
private:
    int coach;
    int player;

public:
    ManchesterUnited() : coach(0), player(0) {}

    void getData() {
        cout << "Coach: " << coach << ", Player: " << player << endl;
    }

    ManchesterUnited operator++() {
        ++coach;
        ++player;
        return *this;
    }

    bool operator>(const ManchesterUnited& other) {
        return (coach + player) > (other.coach + other.player);
    }
};

int main() {
    ManchesterUnited ronaldo, fernandes;

    ++ronaldo; // Incrementing both coach and player for Ronaldo

    cout << "Before setting values:" << endl;
    cout << "Ronaldo: ";
    ronaldo.getData();
    cout << "Fernandes: ";
    fernandes.getData();

    ronaldo.getData();
    fernandes.getData();

    ronaldo = ManchesterUnited(); // Resetting values for Ronaldo
    fernandes = ManchesterUnited(); // Resetting values for Fernandes

    ronaldo.getData();
    fernandes.getData();

    //ronaldo++; // Incrementing both coach and player for Ronaldo again

    cout << "After incrementing Ronaldo:" << endl;
    cout << "Ronaldo: ";
    ronaldo.getData();
    cout << "Fernandes: ";
    fernandes.getData();

    // Comparing Ronaldo and Fernandes using the '>' operator
    if (ronaldo > fernandes) {
        cout << "Ronaldo is equal to Fernandes." << endl;
    } else {
        cout << "Ronaldo is not equal to Fernandes." << endl;
    }

    return 0;
}
