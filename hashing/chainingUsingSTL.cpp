// Program to implements a hash table using separate chaining for collision resolution,
// including insertion, deletion and searching.

#include <list>
#include <iostream>
using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[b];
    }
    void insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }
    void remove(int key)
    {
        int i = key % BUCKET;
        table[i].remove(key);
    }
    bool search(int key)
    {
        int i = key % BUCKET;
        for (auto x : table[i])
        {
            if (x == key)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    struct MyHash *mh = new MyHash(7);

    mh->insert(70);
    mh->insert(71);
    mh->insert(9);
    mh->insert(56);
    mh->insert(72);
    mh->insert(100);

    cout << "Search 71 : " << mh->search(71) << endl;
    cout << "Search 9 : " << mh->search(9) << endl;
    cout << "Search 56 : " << mh->search(56) << endl;
    cout << "Search 67 : " << mh->search(67) << endl;
    cout << "Search 72 : " << mh->search(72) << endl;
    cout << "Search 100 : " << mh->search(100) << endl;
    cout << "Search 123 : " << mh->search(123) << endl;

    cout << endl;
    mh->remove(71);
    cout << "removed 71 " << endl;
    mh->remove(9);
    cout << "removed 9 " << endl;

    cout << endl;
    cout << "Search 71 : " << mh->search(71) << endl;
    cout << "Search 9 : " << mh->search(9) << endl;
    cout << "Search 72 : " << mh->search(72) << endl;
}