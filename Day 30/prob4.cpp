/*Write a program to Develop complete mini project using arrays, strings and functions*/
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

struct Booking
{
    int bookingId;
    vector<string> bookedSeats;
    double totalAmount;
};

class TicketBookingSystem
{
private:
    int rows;
    int cols;
    double ticketPrice;
    int bookingCounter;
    vector<vector<bool>> seats;
    map<int, Booking> bookingLedger;

public:
    TicketBookingSystem(int r = 5, int c = 6, double price = 250.00)
    {
        rows = r;
        cols = c;
        ticketPrice = price;
        bookingCounter = 1001;
        seats.assign(rows, vector<bool>(cols, false));
    }

    void displaySeats()
    {
        cout << "\n=== SEAT ARRANGEMENT (Screen this way) ===\n\n     ";
        for (int c = 0; c < cols; ++c)
        {
            cout << "C" << (c + 1) << "   ";
        }
        cout << "\n";

        for (int r = 0; r < rows; ++r)
        {
            cout << "R" << (r + 1) << "  ";
            for (int c = 0; c < cols; ++c)
            {
                if (seats[r][c])
                {
                    cout << "[X]  ";
                }
                else
                {
                    cout << "[O]  ";
                }
            }
            cout << "\n\n";
        }
        cout << "------------------------------------------\n";
        cout << "[O] = Available  |  [X] = Booked\n\n";
    }

    void bookTickets()
    {
        displaySeats();

        int numTickets;
        cout << "Enter number of tickets to book: ";
        if (!(cin >> numTickets) || numTickets <= 0)
        {
            cout << "⚠️ Invalid number of tickets requested.\n\n";
            clearInputBuffer();
            return;
        }

        vector<pair<int, int>> selectedCoords;
        vector<string> seatLabels;

        for (int i = 0; i < numTickets; ++i)
        {
            int selectedRow, selectedCol;
            while (true)
            {
                cout << "\nBooking seat " << (i + 1) << " of " << numTickets << ":\n";
                cout << "Enter Row number (1-" << rows << "): ";
                if (!(cin >> selectedRow))
                {
                    clearInputBuffer();
                    continue;
                }

                cout << "Enter Column number (1-" << cols << "): ";
                if (!(cin >> selectedCol))
                {
                    clearInputBuffer();
                    continue;
                }

                int r = selectedRow - 1;
                int c = selectedCol - 1;

                if (r < 0 || r >= rows || c < 0 || c >= cols)
                {
                    cout << "⚠️ Seat coordinate out of boundary ranges! Try again.\n";
                    continue;
                }
                if (seats[r][c])
                {
                    cout << "⚠️ Seat already occupied by another customer! Choose another.\n";
                    continue;
                }

                pair<int, int> currentPair = make_pair(r, c);
                if (find(selectedCoords.begin(), selectedCoords.end(), currentPair) != selectedCoords.end())
                {
                    cout << "⚠️ You selected this seat position earlier in this session!\n";
                    continue;
                }

                selectedCoords.push_back(currentPair);
                seatLabels.push_back("R" + to_string(selectedRow) + "C" + to_string(selectedCol));
                break;
            }
        }

        double finalCost = numTickets * ticketPrice;
        cout << "\nTotal Price for " << numTickets << " ticket(s): ₹" << finalCost << "\n";
        cout << "Confirm booking application? (y/n): ";
        char confirm;
        cin >> confirm;

        if (confirm == 'y' || confirm == 'Y')
        {
            int currentId = bookingCounter++;

            for (const auto &coord : selectedCoords)
            {
                seats[coord.first][coord.second] = true;
            }

            Booking newBooking = {currentId, seatLabels, finalCost};
            bookingLedger[currentId] = newBooking;

            cout << "✅ Booking Successful! Your assigned unique Booking ID is: " << currentId << "\n\n";
        }
        else
        {
            cout << "❌ Booking transaction abandoned.\n\n";
        }
    }

    void cancelTickets()
    {
        int inputId;
        cout << "Enter your explicit Booking ID to process cancellation: ";
        if (!(cin >> inputId))
        {
            cout << "⚠️ Invalid numeric formatting supplied.\n\n";
            clearInputBuffer();
            return;
        }

        auto recordIterator = bookingLedger.find(inputId);
        if (recordIterator == bookingLedger.end())
        {
            cout << "⚠️ Provided Transaction Booking ID reference not found inside database registers.\n\n";
            return;
        }

        Booking matchedRecord = recordIterator->second;
        cout << "\nFound active structural booking details for ID " << inputId << ":\nSeats: ";
        for (const auto &seatStr : matchedRecord.bookedSeats)
        {
            cout << seatStr << " ";
        }
        cout << "\nTotal refundable amount value: ₹" << matchedRecord.totalAmount << "\n";
        cout << "Proceed with total records removal deletion routine? (y/n): ";
        char choice;
        cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            for (const auto &seatStr : matchedRecord.bookedSeats)
            {
                size_t cPos = seatStr.find('C');
                int targetR = stoi(seatStr.substr(1, cPos - 1)) - 1;
                int targetC = stoi(seatStr.substr(cPos + 1)) - 1;
                seats[targetR][targetC] = false;
            }

            bookingLedger.erase(recordIterator);
            cout << " Cancellation successful. Full reversal ledger adjustments committed.\n\n";
        }
        else
        {
            cout << "Cancellation execution safely halted.\n\n";
        }
    }

private:
    void clearInputBuffer()
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
};

int main()
{
    TicketBookingSystem cinemaManager(5, 6, 250.00);
    string userSelection;

    while (true)
    {
        cout << "====== TICKET BOOKING SYSTEM MENU ======\n";
        cout << "1. View Seat Matrix Map Configuration\n";
        cout << "2. Reserve Movie Tickets\n";
        cout << "3. Cancel Existing Booking Entries\n";
        cout << "4. Exit Application Lifecycle\n";
        cout << "Select valid index menu choice operational key (1-4): ";
        cin >> userSelection;

        if (userSelection == "1")
        {
            cinemaManager.displaySeats();
        }
        else if (userSelection == "2")
        {
            cinemaManager.bookTickets();
        }
        else if (userSelection == "3")
        {
            cinemaManager.cancelTickets();
        }
        else if (userSelection == "4")
        {
            cout << "Exiting. Thank you for utilizing cinema ticket manager engines!\n";
            break;
        }
        else
        {
            cout << "⚠️ Invalid menu lookup selection. Supply valid range indicators matching option structures.\n\n";
        }
    }
    return 0;
}