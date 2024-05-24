// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };
    
    std::cout << std::endl;
    std::cout << "1234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(50) << tours.title << std::endl;
    std::cout << std::endl;
    
    std::cout << std::setw(20) << std::left << "Country"
                << std::setw(20) << std::left << "City"
                << std::setw(15) << std::right << "Population"
                << std::setw(15) << std::right << "Price"
                << std::endl;
    std::cout << std::setw(70) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
    
    for(auto country : tours.countries) {   // loop through the countries
        for (size_t i = 0; i < country.cities.size(); ++i) { // loop through the cities for each country
            auto city = country.cities[i];
            std::cout << std::setw(20) << std::left << (i == 0 ? country.name : "")
                        << std::setw(20) << std::left << city.name
                        << std::setw(15) << std::right << city.population
                        << std::setw(15) << std::right << std::fixed << std::setprecision(2) << city.cost
                        << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}