#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Class to handle investment calculations
class Investment 
{
public:
    // Here, I wrote this code to set up the initial investment, monthly deposit, annual interest, and number of years.
    Investment(double t_initialAmount, double t_monthlyDeposit, double t_annualInterest, int t_numYears)
        : m_initialAmount(t_initialAmount), m_monthlyDeposit(t_monthlyDeposit), m_annualInterest(t_annualInterest), m_numYears(t_numYears) {}

    // This part calculates yearly interest and updates the balance without considering monthly deposits.
    void calculateWithoutMonthlyDeposits()
    {
        double balance = m_initialAmount; // Here, I set the initial balance to the user's input.
        for (int year = 1; year <= m_numYears; ++year) 
        {
            double yearlyInterest = balance * (m_annualInterest / 100); // This line calculates the yearly interest.
            balance += yearlyInterest; // Here, I update the balance by adding the yearly interest.

            // Store yearly report
            // This part stores the yearly balance and interest in a vector for later use.
            m_reportsWithoutDeposits.push_back({ year, balance, yearlyInterest });
        }
    }

    // This part calculates the balance considering monthly deposits and monthly interest.
    void calculateWithMonthlyDeposits() 
    {
        double balance = m_initialAmount; // Here, I start with the initial investment amount.
        for (int year = 1; year <= m_numYears; ++year) 
        {
            double yearlyInterest = 0.0; // This line initializes the yearly interest to zero.
            // This loop processes each month of the year.
            for (int month = 1; month <= 12; ++month) 
            {
                balance += m_monthlyDeposit; // Here, I add the monthly deposit to the balance.
                double monthlyInterest = balance * ((m_annualInterest / 100) / 12); // This line calculates monthly interest.
                yearlyInterest += monthlyInterest; // This part accumulates the interest for the year.
                balance += monthlyInterest; // Here, I update the balance with the monthly interest.
            }

            // Store yearly report
            // Here, I store the yearly balance and total interest in the vector for display later.
            m_reportsWithDeposits.push_back({ year, balance, yearlyInterest });
        }
    }

    // This part displays the report showing balance and interest for each year without additional monthly deposits.
    void displayReportWithoutMonthlyDeposits() const 
    {
        cout << "\n===========================================================\n";
        cout << "   Balance and Interest Without Additional Monthly Deposits\n";
        cout << "===========================================================\n";
        cout << "Year\tYear End Balance\tYear End Earned Interest\n";
        cout << "-----------------------------------------------------------\n";

        // Here, I loop through and display each yearly report stored in the vector.
        for (const auto& report : m_reportsWithoutDeposits) 
        {
            cout << report.year << "\t$" << fixed << setprecision(2) << report.yearEndBalance
                << "\t\t\t$" << report.yearEndInterest << endl;
        }
    }

    // This part displays the report showing balance and interest for each year, considering monthly deposits.
    void displayReportWithMonthlyDeposits() const
    {
        cout << "\n===========================================================\n";
        cout << "   Balance and Interest With Additional Monthly Deposits\n";
        cout << "===========================================================\n";
        cout << "Year\tYear End Balance\tYear End Earned Interest\n";
        cout << "-----------------------------------------------------------\n";

        // Here, I loop through and display each yearly report stored in the vector.
        for (const auto& report : m_reportsWithDeposits) 
        {
            cout << report.year << "\t$" << fixed << setprecision(2) << report.yearEndBalance
                << "\t\t\t$" << report.yearEndInterest << endl;
        }
    }

private:
    double m_initialAmount; // Initial investment amount
    double m_monthlyDeposit; // Monthly deposit amount
    double m_annualInterest; // Annual interest rate in percentage
    int m_numYears; // Total number of years for investment

    // This is a structure to hold yearly report data
    struct YearlyReport 
    {
        int year;
        double yearEndBalance;
        double yearEndInterest;
    };

    vector<YearlyReport> m_reportsWithoutDeposits; // This is a Vector to store yearly reports without deposits
    vector<YearlyReport> m_reportsWithDeposits; // This is a Vector to store yearly reports with deposits
};

// This part gets input from the user and validates it to ensure it's a positive number.
double getPositiveInput(const string& prompt)
{
    double value;
    // Loop until a valid positive input is provided
    do 
    {
        cout << prompt; // Here, I prompt the user for input.
        cin >> value;
        if (cin.fail() || value < 0)  // This line checks for invalid input or negative numbers.
       {
            cout << "Invalid input. Please enter a positive number.\n"; // Here, I display an error message.
            cin.clear(); // This clear error flags to prevent infinite loop.
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // This ignores the invalid input.
        }
    } while (value < 0); // Continue until a valid positive input is provided.
    return value;
}

int main() 
{
    // This helps to get user input with validation
    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    double initialAmount = getPositiveInput("Initial Investment Amount: $"); // Here, I get the initial investment amount.
    double monthlyDeposit = getPositiveInput("Monthly Deposit: $"); // Here, I get the monthly deposit.
    double annualInterest = getPositiveInput("Annual Interest (%): "); // Here, I get the annual interest rate.
    int numYears = static_cast<int>(getPositiveInput("Number of Years: ")); // Here, I get the number of years for the investment.

    // This line creates an instance of the Investment class using the user inputs.
    Investment investment(initialAmount, monthlyDeposit, annualInterest, numYears);

    // Here, I call the methods to calculate investment growth with and without monthly deposits.
    investment.calculateWithoutMonthlyDeposits();
    investment.calculateWithMonthlyDeposits();

    // This part displays the calculated reports.
    investment.displayReportWithoutMonthlyDeposits();
    investment.displayReportWithMonthlyDeposits();

    return 0;
}
