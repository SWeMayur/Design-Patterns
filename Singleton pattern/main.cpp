#include <iostream>
#include "header/PVRTicket.h"

int main()
{
    //create instance first time
    PVRTicket& ticketInstance = PVRTicket::getTicket();
    //create instance second time
    PVRTicket& ticketInstance2 = PVRTicket::getTicket();
    //create instance third time
    PVRTicket& ticketInstance3 = PVRTicket::getTicket();
}