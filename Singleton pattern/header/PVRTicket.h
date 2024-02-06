#pragma once
class PVRTicket
{
public:
    static PVRTicket& getTicket();
    //delete copy constructor to avoid object duplication
    PVRTicket(const PVRTicket&) = delete;
    //delete copy assignment operator to prevent object assignment
    PVRTicket& operator=(const PVRTicket&) = delete;
private:
    // Private constructor to prevent external instantiation
    PVRTicket();
    // Private destructor to prevent external deletion
    ~PVRTicket();
    // Private static instance variable
     static PVRTicket* ticketInstance;
};