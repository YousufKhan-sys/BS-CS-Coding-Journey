# 🏨 Room Reservation System

A console-based hotel room reservation system built in **C++** as a Semester 1 Programming Fundamentals project.

## Features

- **Booking Management** – Add, update, and cancel room bookings
- **Room Management** – View available, booked, or all rooms
- **Bill Generation** – Generate bills based on room type and nights stayed
- **Checkout** – Bill + room release in one step
- **File-based persistence** using `Room.txt`, `Booking.txt`, and `Bill.txt`

## Room Types & Pricing

| Room Type | Room Numbers | Price per Night |
|-----------|-------------|----------------|
| Single    | 101–103     | Rs. 7,000      |
| Double    | 201–203     | Rs. 10,000     |
| Luxury    | 301–303     | Rs. 15,000     |

## How to Run

```bash
g++ main.cpp -o reservation_system
./reservation_system
```

> Make sure `Room.txt` is present in the same directory (it contains the initial room inventory).

## File Structure

- `main.cpp` – Application entry point and all logic
- `Room.txt` – Room inventory (number, type, status)
- `Booking.txt` – Active bookings
- `Bill.txt` – Generated bills
