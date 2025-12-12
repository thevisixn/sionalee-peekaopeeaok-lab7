//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string ans, name, stud_id, movie_name, str_date;
    unsigned int gear, year_studId;
    name = "?????";
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << name << ": ";
    getline(cin,ans);
    name = ans;
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    getline(cin,ans);
    stud_id = ans;
    year_studId = stoi(stud_id.substr(0, 2));
    gear = year_studId-12;
    cout << "Fahsai: I think you may be GEAR "<< gear << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,ans);
    movie_name = ans;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,ans);
    str_date = ans;
    cout << "Fahsai: " << str_date << "....that is OK!!! I'm looking forward to watching " << movie_name << " with you.\n";
    cout << name << ": ";
    getline(cin,ans);
    cout << "Fahsai: 555+ see you " << str_date << ". Bye Bye \\(^ ^)/";

    return 0;
}