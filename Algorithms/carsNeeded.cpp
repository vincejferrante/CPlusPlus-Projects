//A typical car can hold four passengers and one driver, allowing five people to travel around.
//Given n number of people, return how many cars are needed to seat everyone comfortably.


int carsNeeded(int n) {
    int cars = n / 5;
    if (n % 5 != 0) { // check if there's a remainder
        cars++; // add another car for the remaining people
    }
    return cars;
}
