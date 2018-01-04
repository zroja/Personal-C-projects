// Zahin Roja
// Horoscope Project
// 1.4.18

#include <iostream>
using namespace std;

int main()
{
        int day, month;
        string rerun;


        cout << "Welcome to find you Zodiac Symbol" << endl;
        cout << "Please have your birth month and day handy to find your symbol" << endl;
        do
        {
        cout << "What is your birth month?(1-12)" << endl;
        cin >> month;
        cout << "What is your birth day?(1-31) " << endl;
        cin >> day;
        switch (month)
        {
        case 1:
                if(day >= 20 && day <= 31)
                        cout << "You are Aquarius" << endl;
                else
                        cout << "You are Capricorn" << endl;
        break;
        case 2:
                if(day >= 1 && day <= 18)
                        cout << "You are Aquarius" << endl;
                else
                        cout << "You are Pisces" << endl;
        break;
        case 3:
                if(day >= 1 && day <= 20)
                        cout << "You are Pisces" << endl;
                else
                        cout << "You are Aries" << endl;
        break;
        case 4:
                if (day >=1 && day <= 20)
                        cout << "You are Aries" << endl;
                else
                        cout << " You are Taurus" << endl;
        break;
        case 5:
                if (day >=1 && day <=20)
                        cout << "You are Taurus" << endl;
                else
                        cout << "You are Gemini" << endl;
        break;
        case 6:
                if(day >=1 && day <=20)
                        cout << "You are Gemini" << endl;
                else
                        cout << "You are Cancer" << endl;
        break;
        case 7:
                if(day >= 1 && day <=20)
                        cout << " You are Cancer" << endl;
                else
                        cout << "You are Leo" << endl;
        break;
        case 8:
                if(day >=1 && day <=20)
                        cout << " You are Leo" << endl;
                else
                        cout << "You are Virgo" << endl;
        break;
        case 9:
                if(day >= 1 && day <= 20)
                        cout << "You are Virgo" << endl;
                else
                        cout << "You are Libra" << endl;
        break;
        case 10:
                if(day >= 1 && day <= 20)
                        cout << "You are Libra" << endl;
                else
                        cout << "You are Scorpio" << endl;
        break;
        case 11:
                if (day >= 1 && day <=20)
                        cout << "You are Scorpio" << endl;
                else
                        cout << "You are Sagittarius" << endl;
        break;
        case 12:
                if (day >= 1 && day <=20)
                        cout << " You are Sagittarius" << endl;
                else
                        cout << " YOu are Capricorn" << endl;
        default:
                cout << "You have entered an incorrect month or day" << endl;
        break;
        }
        cout << "Would you like to go again? (yes or no)" << endl;
        cin >> rerun;

        }while(rerun == "yes" );

        cout << "Have a great day" << endl;
        return 0;
}
