// Team: SUST_Noobnuts
// Score: 10,176,086

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

vector<pair<ll, ll> > scoreOfBooks;
map<ll, ll> scoreMap;

struct Library {
    ll noOfBooks, perDayBooks, signUpDays, allPoints, ID;
    vector<ll> books;
} libs[100000];

struct ANSWER {
    ll noOfBooks, ID;
    vector<ll> books;
};

bool sortByScore(ll b1, ll b2) {
    return scoreMap[b1] > scoreMap[b2];
}

bool sortBySUD(Library L1, Library L2) {
    return L1.allPoints > L2.allPoints;
}

int main() {
    ll B, L, D;
    // Input books, Libraries and No. of Days
    cin >> B >> L >> D;

    // Input : the score of the books
    for (ll i = 0; i < B; i++) {
        ll score;
        cin >> score;
        scoreOfBooks.push_back({score, i});
        scoreMap[i] = score;
    }

    // Input : Library Descriptions
    for(ll i = 0; i < L; i++) {
        ll noOfBooks, perDayBooks, signUpDays, allPoints = 0;
        cin >> noOfBooks >> signUpDays >> perDayBooks;
        vector<ll> books;
        for (ll j = 0; j < noOfBooks; j++) {
            ll bookID;
            cin >> bookID;
            books.push_back(bookID);
            allPoints += scoreMap[bookID];
        }

        sort(books.begin(), books.end(), sortByScore);
        
        libs[i].allPoints = allPoints;
        libs[i].books = books;
        libs[i].noOfBooks = noOfBooks;
        libs[i].perDayBooks = perDayBooks;
        libs[i].signUpDays = signUpDays;
        libs[i].ID = i;
    }

    sort(libs, libs+L, sortBySUD);

    ll libsTobeSignedUp = 0;
    ll days = 0, i = 0;
    // while(days <= D && i < L) {
    //     days += libs[i++].signUpDays;
    //     libsTobeSignedUp++;
    // }
    // cout << min(libsTobeSignedUp, L) << endl; 

    set<ll> scannedBooks;
    vector<ANSWER> answers;
    // Printing the answer
    for (int i = 0; i < L; i++) {
        Library curLib = libs[i];
        vector<ll> booksToBePrinted;
        ANSWER ans;

        for(auto book:curLib.books) {
            if(scannedBooks.find(book) == scannedBooks.end())
                booksToBePrinted.push_back(book);
        }

        ll noOfBooksToBeScanned = min( ((D - curLib.signUpDays) / curLib.perDayBooks), (ll)booksToBePrinted.size());
        // cout << curLib.ID << " " << noOfBooksToBeScanned << endl;
        if(noOfBooksToBeScanned == 0) continue;
        ans.ID = curLib.ID;
        ans.noOfBooks = noOfBooksToBeScanned;
        
        for (int j = 0; j < noOfBooksToBeScanned; j++) {
            // cout << booksToBePrinted[j] << " ";
            ans.books.push_back(booksToBePrinted[j]);
            scannedBooks.insert(booksToBePrinted[j]);
        }
        // cout << endl;
        answers.push_back(ans);
        D -= curLib.signUpDays;
        if(D <= 0) break;
    }

    cout << answers.size() << endl;
    for(auto ans : answers) {
        cout << ans.ID << " " << ans.noOfBooks << endl;
        for(auto book : ans.books) {
            cout << book << " ";
        }
        cout << endl;
    }
    
    return 0;
}
