#include <iostream>
using std::cout;
using std::endl;

// prototypy szablonow
template <typename T> void counts();
template <typename T> void report(T &);

// szablon klasy
template<typename TT>
class HasFriendT
{
private:
    TT item;
    static int ct;

public:
    HasFriendT(const TT& i) : item(i) { ct++; }
    ~HasFriendT() { ct--; }
    friend void counts<TT>();
    friend void report<>(HasFriendT<TT>&);
};

template <typename T>
int HasFriendT<T>::ct = 0;

// definicje szablonow funkcji zaprzyjaznionych
template <typename T>
void counts()
{
    cout << "Szablon sizeof: " << sizeof(HasFriendT<T>) << "; ";
    cout << "Szablon counts(): " << HasFriendT<T>::ct << endl;
}

template <typename T>
void report(T& hf)
{
    cout << hf.item << endl;
}

int main()
{
    counts<int>();
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double>hfdb(10.5);

    report(hfi1);   // tworzy funkcje report(HasFriendT<int> &)
    report(hfi2);   // tworzy funkcje report(HasFriendT<int> &)
    report(hfdb);   // tworzy funkcje report(HasFriendT<double> &)

    cout << "Wunik dzialania counts<int>():\n";
    counts<int>();
    cout << "wynik dzialania counts<double>():\n";
    counts<double>();
}