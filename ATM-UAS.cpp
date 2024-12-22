#include <iostream>
using namespace std;

void menuIndonesia();
void menuEnglish();

int main() {
    int pilihan;

    // Tampilan menu bahasa
    cout << "=========================" << endl;
    cout << "      PILIH BAHASA       " << endl;
    cout << "=========================" << endl;
    cout << "1. Indonesia" << endl;
    cout << "2. English" << endl;
    cout << "0. Keluar / Exit" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            menuIndonesia();
            break;
        case 2:
            menuEnglish();
            break;
        case 0:
            cout << "Terima kasih telah menggunakan layanan kami!" << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia. Program selesai." << endl;
    }
    return 0;
}

void menuIndonesia() {
    int pin = 1234, inputPin, saldo = 500, pilihan, percobaanPin = 0;
    bool Running = true;

    // Verifikasi PIN
    while (percobaanPin < 3) {
        cout << "Masukkan PIN Anda: ";
        cin >> inputPin;

        if (inputPin == pin) {
            cout << "PIN benar. Selamat datang!" << endl;
            break;
        } else {
            percobaanPin++;
            cout << "PIN salah. Percobaan ke-" << percobaanPin << endl;
            if (percobaanPin == 3) {
                cout << "ATM Anda terblokir. Hubungi bank." << endl;
                return;
            }
        }
    }

    // Menu utama
    while (Running) {
        cout << "=========================" << endl;
        cout << "       MENU UTAMA        " << endl;
        cout << "=========================" << endl;
        cout << "1. Penarikan" << endl;
        cout << "2. Setor Tunai" << endl;
        cout << "3. Cek Saldo" << endl;
        cout << "0. Keluar" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int jumlah;
                cout << "Masukkan jumlah penarikan: ";
                cin >> jumlah;
                if (jumlah <= saldo) {
                    saldo -= jumlah;
                    cout << "Penarikan berhasil. Sisa saldo Anda: " << saldo << endl;
                } else {
                    cout << "Saldo tidak mencukupi. Saldo anda "<< saldo << endl;
                }
                break;
            }
            case 2: {
                int jumlah;
                cout << "Masukkan jumlah setoran: ";
                cin >> jumlah;
                saldo += jumlah;
                cout << "Setoran berhasil. Saldo Anda sekarang: " << saldo << endl;
                break;
            }
            case 3:
                cout << "Saldo Anda saat ini: " << saldo << endl;
                break;
            case 0:
                cout << "Terima kasih telah menggunakan layanan kami!" << endl;
                Running = false;
                break;
            default:
                cout << "Pilihan tidak tersedia. Coba lagi." << endl;
        }
    }
}

void menuEnglish() {
    int pin = 1234, inputPin, balance = 500, choice, pinAttempts = 0;
    bool Running = true;

    // PIN Verification
    while (pinAttempts < 3) {
        cout << "Enter your PIN: ";
        cin >> inputPin;

        if (inputPin == pin) {
            cout << "Correct PIN. Welcome!" << endl;
            break;
        } else {
            pinAttempts++;
            cout << "Incorrect PIN. Attempt " << pinAttempts << endl;
            if (pinAttempts == 3) {
                cout << "Your ATM card is blocked. Contact your bank." << endl;
                return;
            }
        }
    }

    // Main Menu
    while (Running) {
        cout << "=========================" << endl;
        cout << "         MAIN MENU       " << endl;
        cout << "=========================" << endl;
        cout << "1. Withdrawal" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Check Balance" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int amount;
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful. Your remaining balance: " << balance << endl;
                } else {
                    cout << "Insufficient balance." << endl;
                }
                break;
            }
            case 2: {
                int amount;
                cout << "Enter deposit amount: ";
                cin >> amount;
                balance += amount;
                cout << "Deposit successful. Your balance is now: " << balance << endl;
                break;
            }
            case 3:
                cout << "Your current balance is: " << balance << endl;
                break;
            case 0:
                cout << "Thank you for using our service!" << endl;
                Running = false;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}

