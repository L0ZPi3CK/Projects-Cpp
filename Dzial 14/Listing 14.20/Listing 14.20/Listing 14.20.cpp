#include <iostream>
using std::cout;
using std::endl;

template <typename T>

class beta
{
private:
    template <typename V>   // zagniezdzony szablon klasy jako skladowa
    
    class hold
    {
    private:
        V val;

    public:
        hold(V v = 0) : val(v) {};
        void show() const { cout << val << endl; };
        V Value() const { return val; };
    };
    hold<T> q;      // obiekt szablonu
    hold<int> n;    // obiekt szablonu

public:
    beta(T t, int i) : q(t), n(i) {};
    template <typename U>   // metoda szablonu
    U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; };
    void Show() const { q.show(); n.show(); };
};

int main()
{
    beta<double> guy(3.5, 3);
    cout << "T okreslono jako double\n";
    guy.Show();
    cout << "V najpierw okreslono jako T, czyli double , a nastepnie jako int\n";
    cout << guy.blab(10, 2.3) << endl;
    cout << "U okreslono jako int\n";
    cout << guy.blab(10.0, 2.3) << endl;
    cout << "U okreslono jako double\n";
    cout << "Koniec\n";
    return 0;
}