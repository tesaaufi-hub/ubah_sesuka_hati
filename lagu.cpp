#include <cstdlib>
#include <string>

using namespace std;

// ===============================
// PUTAR MUSIK LATAR
// ===============================
void playBGM(const string &file) {
    system("pkill aplay > /dev/null 2>&1");

    string cmd =
        "aplay " + file + " > /dev/null 2>&1 &";

    system(cmd.c_str());
}

// ===============================
// STOP MUSIK
// ===============================
void stopBGM() {
    system("pkill aplay > /dev/null 2>&1");
}

// ===============================
// EFEK SUARA
// ===============================
void playSFX(const string &file) {
    string cmd =
        "aplay " + file + " > /dev/null 2>&1 &";
    system(cmd.c_str());
}
