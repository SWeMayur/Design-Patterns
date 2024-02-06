#include<iostream>
#include "../header/PVRTicket.h"

PVRTicket* PVRTicket::ticketInstance = nullptr;

PVRTicket::PVRTicket()
{
    ticketInstance = nullptr;
    std::cout << "PVRTicket instanace of ticket created!" << std::endl;
}

PVRTicket::~PVRTicket()
{}
    
PVRTicket& PVRTicket::getTicket()
{
    if(!ticketInstance)
    {
        ticketInstance = new PVRTicket();
    }
    else std::cout << "The ticket that you want to book has already been booked!" << std::endl;
    return *ticketInstance;
} 

