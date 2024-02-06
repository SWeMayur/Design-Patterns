#include <iostream>
#include "header/Client.h"

int main() {
    Client* client = new Client();

    client->buildOneDShapes();
    std::cout << "OneDShape: ";
    client->getOneDShape()->draw();

    delete client;
    return 0;
}
