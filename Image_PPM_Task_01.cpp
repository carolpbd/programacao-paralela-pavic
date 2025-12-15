#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream image;

    image.open("Image.ppm");

    // Header do PPM (formato P3)
    image << "P3" << endl;
    image << "250 250" << endl;
    image << "255" << endl;

    // Geração da imagem
    for (int y = 0; y < 250; y++) {
        for (int x = 0; x < 250; x++) {
            image << x << " " << y << " " << x << endl;
        }
    }

    image.close();

    return 0;
}

