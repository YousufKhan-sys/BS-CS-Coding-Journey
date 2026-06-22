#include <iostream>
#include <fstream>
using namespace std;
struct Booking
{
    string name, room_type;
    int booking_id, room_number, nights;
};
struct Room
{
    string Room_type;
    int Room_number, Room_status;
};
void Available_Rooms()
{
    Room i[50];
    int count = 0;
    cout << "---Available Rooms---" << endl;
    ifstream fin("Room.txt");
    while (fin >> i[count].Room_number >> i[count].Room_type >> i[count].Room_status)
    {
        if (i[count].Room_type == "Single" && !i[count].Room_status)
        {
            cout << "Room Type: " << i[count].Room_type << " Room Number: " << i[count].Room_number << endl;
        }
        else if (i[count].Room_type == "Double" && !i[count].Room_status)
        {
            cout << "Room Type: " << i[count].Room_type << " Room Number: " << i[count].Room_number << endl;
        }
        else if (i[count].Room_type == "Luxury" && !i[count].Room_status)
        {
            cout << "Room Type: " << i[count].Room_type << " Room Number: " << i[count].Room_number << endl;
        }
        count++;
    }
    fin.close();
}
void Add_Booking()
{
    Room r[100];
    Booking i;
    int count = 0;
    int totalRooms = 0;
    bool validRoom = false;

    cout << "Enter Booking ID" << endl;
    cin >> i.booking_id;
    cout << "Enter Your Name" << endl;
    cin >> i.name;
    ifstream fin("Room.txt");
    while (fin >> r[totalRooms].Room_number >> r[totalRooms].Room_type >> r[totalRooms].Room_status)
        totalRooms++;
    fin.close();

    do
    {
        validRoom = false;
        Available_Rooms();
        cout << "Enter the Room number you want to book: ";
        cin >> i.room_number;

        for (int k = 0; k < totalRooms; k++)
        {
            if (r[k].Room_number == i.room_number)
            {
                if (r[k].Room_status == 0)
                {
                    r[k].Room_status = 1;
                    validRoom = true;

                    if (i.room_number == 101 || i.room_number == 102 || i.room_number == 103)
                        i.room_type = "Single";
                    else if (i.room_number == 201 || i.room_number == 202 || i.room_number == 203)
                        i.room_type = "Double";
                    else if (i.room_number == 301 || i.room_number == 302 || i.room_number == 303)
                        i.room_type = "Luxury";
                }
                else
                    cout << "Room already booked!" << endl;
                break;
            }
        }

        if (!validRoom)
            cout << "Invalid room number" << endl;

    } while (!validRoom);

    ofstream fout("Room.txt");
    for (int j = 0; j < totalRooms; j++)
        fout << r[j].Room_number << " " << r[j].Room_type << " " << r[j].Room_status << endl;
    fout.close();

    cout << "Enter the number of nights you want to stay" << endl;
    cin >> i.nights;

    ofstream fout1("Booking.txt", ios::app);
    fout1 << i.booking_id << " " << i.name << " " << i.room_type << " " << i.room_number << " " << i.nights << endl;
    fout1.close();

    cout << "Booking Added Succesfully" << endl;
}

void Update_Booking()
{
    Room r[100];
    Booking i[100];
    int rcount = 0;
    int icount = 0;
    bool flag = false;
    bool validRoom;
    int id_to_search;
    int oldRoom;

    cout << "Enter Booking ID" << endl;
    cin >> id_to_search;

    ifstream fin("Room.txt");
    while (fin >> r[rcount].Room_number >> r[rcount].Room_type >> r[rcount].Room_status)
        rcount++;
    fin.close();

    ifstream fin1("Booking.txt");
    while (fin1 >> i[icount].booking_id >> i[icount].name >> i[icount].room_type >> i[icount].room_number >> i[icount].nights)
    {
        if (i[icount].booking_id == id_to_search)
        {
            flag = true;
            oldRoom = i[icount].room_number;

            cout << "Enter Your Name" << endl;
            cin >> i[icount].name;

            do
            {
                validRoom = false;
                Available_Rooms();
                cout << "Enter the Room number you want to book: ";
                cin >> i[icount].room_number;

                for (int k = 0; k < rcount; k++)
                {
                    if (r[k].Room_number == oldRoom)
                        r[k].Room_status = 0;

                    if (r[k].Room_number == i[icount].room_number && r[k].Room_status == 0)
                    {
                        r[k].Room_status = 1;
                        validRoom = true;

                        if (i[icount].room_number == 101 || i[icount].room_number == 102 || i[icount].room_number == 103)
                            i[icount].room_type = "Single";
                        else if (i[icount].room_number == 201 || i[icount].room_number == 202 || i[icount].room_number == 203)
                            i[icount].room_type = "Double";
                        else if (i[icount].room_number == 301 || i[icount].room_number == 302 || i[icount].room_number == 303)
                            i[icount].room_type = "Luxury";
                        break;
                    }
                }

                if (!validRoom)
                    cout << "Invalid room number" << endl;

            } while (!validRoom);

            cout << "Enter the number of nights you want to stay" << endl;
            cin >> i[icount].nights;
            cout << "Booking Updated Successfully!" << endl;
        }
        icount++;
    }
    fin1.close();

    if (flag)
    {
        ofstream fout("Room.txt");
        for (int j = 0; j < rcount; j++)
            fout << r[j].Room_number << " " << r[j].Room_type << " " << r[j].Room_status << endl;
        fout.close();

        ofstream fout1("Booking.txt");
        for (int j = 0; j < icount; j++)
            fout1 << i[j].booking_id << " " << i[j].name << " " << i[j].room_type << " " << i[j].room_number << " " << i[j].nights << endl;
        fout1.close();
    }
    else
        cout << "Booking ID Not Found!" << endl;
}

void Cancel_Booking()
{
    Booking i[100];
    Room r[100];
    int count = 0;
    int rcount = 0;
    bool flag = false;
    int id_to_search;
    int roomToFree;

    cout << "Enter Booking ID" << endl;
    cin >> id_to_search;

    ifstream fin("Room.txt");
    while (fin >> r[rcount].Room_number >> r[rcount].Room_type >> r[rcount].Room_status)
        rcount++;
    fin.close();

    ifstream fin1("Booking.txt");
    while (fin1 >> i[count].booking_id >> i[count].name >> i[count].room_type >> i[count].room_number >> i[count].nights)
        count++;
    fin1.close();

    ofstream fout("Booking.txt");
    for (int j = 0; j < count; j++)
    {
        if (i[j].booking_id == id_to_search)
        {
            flag = true;
            roomToFree = i[j].room_number;
            cout << "Booking Cancelled!" << endl;
        }
        else
            fout << i[j].booking_id << " " << i[j].name << " " << i[j].room_type << " " << i[j].room_number << " " << i[j].nights << endl;
    }
    fout.close();

    if (flag)
    {
        for (int k = 0; k < rcount; k++)
        {
            if (r[k].Room_number == roomToFree)
                r[k].Room_status = 0;
        }

        ofstream fout1("Room.txt");
        for (int k = 0; k < rcount; k++)
        {
            fout1 << r[k].Room_number << " " << r[k].Room_type << " " << r[k].Room_status << endl;
        }
        fout1.close();
    }
    else
        cout << "Booking ID Not Found!" << endl;
}
void Booked_Rooms()
{
    Room i[50];
    int count = 0;
    cout << "---Booked Rooms---" << endl;
    ifstream fin("Room.txt");
    while (fin >> i[count].Room_number >> i[count].Room_type >> i[count].Room_status)
    {
        if (i[count].Room_type == "Single" && i[count].Room_status)
        {
            cout << "Room Type: " << i[count].Room_type << " Room Number: " << i[count].Room_number << endl;
        }
        else if (i[count].Room_type == "Double" && i[count].Room_status)
        {
            cout << "Room Type: " << i[count].Room_type << " Room Number: " << i[count].Room_number << endl;
        }
        else if (i[count].Room_type == "Luxury" && i[count].Room_status)
        {
            cout << "Room Type: " << i[count].Room_type << " Room Number: " << i[count].Room_number << endl;
        }
        count++;
    }
    fin.close();
}
void All_Rooms()
{
    Room i[50];
    int count = 0;
    cout << "---All Rooms---" << endl;
    ifstream fin("Room.txt");
    while (fin >> i[count].Room_number >> i[count].Room_type >> i[count].Room_status)
    {
        cout << "Room Type: " << i[count].Room_type << " Room Number: " << i[count].Room_number << endl;
        count++;
    }
    fin.close();
}
void Generate_Bill()
{
    Booking i[100];
    int id_to_search = 0, total_cost = 0;
    int count = 0;
    cout << "Enter the booking ID to Generate Bill" << endl;
    cin >> id_to_search;
    ifstream fin("Booking.txt");
    while (fin >> i[count].booking_id >> i[count].name >> i[count].room_type >> i[count].room_number >> i[count].nights)
    {
        if (i[count].booking_id == id_to_search)
        {
            if (i[count].room_type == "Single")
            {
                total_cost = i[count].nights * 7000;
            }
            else if (i[count].room_type == "Double")
            {
                total_cost = i[count].nights * 10000;
            }
            else if (i[count].room_type == "Luxury")
            {
                total_cost = i[count].nights * 15000;
            }
            cout << "\n====================================\n";
            cout << "              BILL                  \n";
            cout << "====================================\n";
            cout << "Booking ID     : " << i[count].booking_id << endl;
            cout << "Customer Name  : " << i[count].name << endl;
            cout << "Nights Stayed  : " << i[count].nights << endl;
            cout << "Room Type      : " << i[count].room_type << endl;
            cout << "------------------------------------\n";
            cout << "Total Cost     : Rs. " << total_cost << endl;
            cout << "====================================\n";

            ofstream fout("Bill.txt", ios::app);
            fout << i[count].booking_id << " " << i[count].name << " " << total_cost << endl;
            fout.close();
        }
        count++;
    }
    fin.close();
}
void checkout_customer()
{
    Generate_Bill();
    Booking i[100];
    Room r[100];
    int count = 0;
    int rcount = 0;
    bool flag = false;
    int id_to_search;
    int roomToFree;

    cout << "Enter Booking ID to Checkout" << endl;
    cin >> id_to_search;

    ifstream fin("Room.txt");
    while (fin >> r[rcount].Room_number >> r[rcount].Room_type >> r[rcount].Room_status)
        rcount++;
    fin.close();

    ifstream fin1("Booking.txt");
    while (fin1 >> i[count].booking_id >> i[count].name >> i[count].room_type >> i[count].room_number >> i[count].nights)
        count++;
    fin1.close();

    ofstream fout("Booking.txt");
    for (int j = 0; j < count; j++)
    {
        if (i[j].booking_id == id_to_search)
        {
            flag = true;
            roomToFree = i[j].room_number;
            cout << "Checked out successfully" << endl;
        }
        else
            fout << i[j].booking_id << " " << i[j].name << " " << i[j].room_type << " " << i[j].room_number << " " << i[j].nights << endl;
    }
    fout.close();

    if (flag)
    {
        for (int k = 0; k < rcount; k++)
        {
            if (r[k].Room_number == roomToFree)
                r[k].Room_status = 0;
        }

        ofstream fout1("Room.txt");
        for (int k = 0; k < rcount; k++)
        {
            fout1 << r[k].Room_number << " " << r[k].Room_type << " " << r[k].Room_status << endl;
        }
        fout1.close();
    }
    else
        cout << "Booking ID Not Found!" << endl;
}

int main()
{
    int choice, subChoice;

    do
    {
        cout << endl;
        cout << "========== HOTEL MANAGEMENT SYSTEM ==========" << endl;
        cout << "1. Booking Management" << endl;
        cout << "2. Room Management" << endl;
        cout << "3. Generate Bill" << endl;
        cout << "4. Checkout" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            do
            {
                cout << endl;
                cout << "--- Booking Management ---" << endl;
                cout << "1. Add Booking" << endl;
                cout << "2. Update Booking" << endl;
                cout << "3. Cancel Booking" << endl;
                cout << "4. Back to Main Menu" << endl;
                cout << "Enter your choice: ";
                cin >> subChoice;

                switch (subChoice)
                {
                case 1:
                    Add_Booking();
                    break;
                case 2:
                    Update_Booking();
                    break;
                case 3:
                    Cancel_Booking();
                    break;
                case 4:
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                }

            } while (subChoice != 4);
            break;

        case 2:
            do
            {
                cout << endl;
                cout << "--- Room Management ---" << endl;
                cout << "1. Available Rooms" << endl;
                cout << "2. Booked Rooms" << endl;
                cout << "3. All Rooms" << endl;
                cout << "4. Back to Main Menu" << endl;
                cout << "Enter your choice: ";
                cin >> subChoice;

                switch (subChoice)
                {
                case 1:
                    Available_Rooms();
                    break;
                case 2:
                    Booked_Rooms();
                    break;
                case 3:
                    All_Rooms();
                    break;
                case 4:
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                }

            } while (subChoice != 4);
            break;

        case 3:
            Generate_Bill();
            break;

        case 4:
            checkout_customer();
            break;

        case 5:
            cout << "Thank you for using the system!" << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
