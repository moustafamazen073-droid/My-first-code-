#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "this is \"el_bashmohandes mazoon\" talking:)\n" << endl;
    cout << "please enter your name...\n";
    string username;
    getline(cin, username);
    int choice;
    float value;

    cout << "=====================================================\n"
         << "welcome " << username << " this program was made to help you convert between units of measurement\n"
         << "Available conversions...\n"
         << "\t1 : cm to m\n"
         << "\t2 : m to cm\n"
         << "\t3 : m to km\n"
         << "\t4 : km to m\n"
         << "\t5 : m/s to km/h\n"
         << "\t6 : km/h to m/s\n"
         << "\t7 : lb to kg\n"
         << "\t8 : kg to lb\n"
         << "\t9 : °F to °C\n"
         << "\t10: °C to °F\n"
         << "\t11: °C to K\n"
         << "\t12; K to °C\n"
         << "\t0 : Exit\n";

        cout << "=====================================================\n"
             << "please " << username << " enter the number of the conversion you want...\n"
             << "=====================================================\n";

        do {
            cin >> choice;
            
            if (choice == 0) {
                cout << "goodbye " << username << ":)\n"
                     << "I hope you got your answers 🙏 \n";
                break;
            }
            // افتكر ان كل مره هتزود عملية حسابية ف الكود هتكتبها فوق وتحطلها رقم و هتنزل ف السطر اللي تحتي ده على طول تزود الرينچ بتاع الاختيارات وهتشيل كومنت من اللي موجودين تحت و تحط فيه بيانات المسألة الجديده
            if (choice >= 1 && choice <= 12) {
                if (choice == 1) {
                    cout << "converting from cm to m...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value / 100 << " m\n";
                }
                else if (choice == 2) {
                    cout << "converting from m to cm...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value * 100 << " cm\n";
                }
                else if (choice == 3) {
                    cout << "converting from m to km...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value / 1000 << " km\n";
                }
                else if (choice == 4) {
                    cout << "converting from km to m...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value * 1000 << " m\n";
                }
                else if (choice == 5) {
                    cout << "converting from m/s to km/h...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value * 3.6 << " km/h\n";
                }
                else if (choice == 6) {
                    cout << "converting from km/h to m/s...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value / 3.6 << " m/s\n";
                }
                else if (choice == 7) {
                    cout << "converting from lb to kg...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value * 0.453592 << " kg\n";
                }
                else if (choice == 8) {
                    cout << "converting from kg to lb...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value / 0.453592 << " lb\n";
                }
                else if (choice == 9) {
                    cout << "converting from °F to °C...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << (value - 32) * 5 / 9 << " °C\n";
                }
                else if (choice == 10) {
                    cout << "converting from °C to °F...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << (value * 9 / 5) + 32 << " (°F)\n";
                }

                else if (choice == 11) {
                    cout << "converting from °C to K...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value + 273.15 << " ()\n";    
                }
                else if (choice == 12) {
                    cout << "converting from K to °C...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value -273.15 << " ()\n";    
                }
                /*else if (choice == ()) {
                    cout << "converting from () to ()...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value () << " ()\n";    
                }*/
                /*else if (choice == ()) {
                    cout << "converting from () to ()...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value () << " ()\n";    
                }*/
                /*else if (choice == ()) {
                    cout << "converting from () to ()...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value () << " ()\n";    
                }*/
                /*else if (choice == ()) {
                    cout << "converting from () to ()...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value () << " ()\n";    
                }*/
                /*else if (choice == ()) {
                    cout << "converting from () to ()...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value () << " ()\n";    
                }*/
                /*else if (choice == ()) {
                    cout << "converting from () to ()...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value () << " ()\n";    
                }*/
                /*else if (choice == ()) {
                    cout << "converting from () to ()...\n"
                         << " please enter the value ";
                    cin >> value;
                    cout << "        Your answer is " << value () << " ()\n";    
                }*/
                
            }
            else {
                cout << "WTF "<<username<<"!! 🤷 \n"
                     << "Invalid choice!\n"
                     << "try again...\n";
                continue;
            }

            cout << "=====================================================\n"
                 <<  "Choose another conversion or 0 to exit\n";

        } while (true);

    return 0;
}