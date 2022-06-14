#include <iostream>
#include <math.h>
using namespace std;

class Histograma
{
    private:
        int* values;
        int length;
        int max = 0;
        int min;
    public:
        Histograma(int _length)
        {
            this->length = _length;
            this->values = new int[this->length];
            for (int i = 0; i < this->length; ++i)
            {
                cout << "[" << i + 1 << "] Valor: ";
                cin >> this->values[i];
                this->calculateMinMax(i);
            }
        }

        void calculateMinMax(int _i)
        {
            if (_i > 0)
            {
                if (this->values[_i] > this->max)
                {
                    this->max = this->values[_i];
                }
                else if (this->values[_i] < this->min)
                {
                    this->min = this->values[_i];
                }
            }
            else
            {
                this->max = this->values[_i];
                this->min = this->values[_i];
            }
        }

        void printHistograma()
        {
            for (int i = 0; i < this->length - 1; ++i)
            {
                cout << this->values[i] << " - ";
            }
            cout << this->values[this->length - 1] << endl;;
        }

        int* calculateIntervals(int _intervals)
        {
            int intervalsLength = ceil(float(this->length) / _intervals);
            int* intervalsValues = new int[_intervals];
            cout << intervalsLength << endl;

            for (int i = 0; i < _intervals; ++i)
            {
                int count = 0;
                for (int j = 0; j < this->length; ++j)
                {
                    if (this->values[j] >= this->min + (intervalsLength * i) && this->values[j] < this->min + (intervalsLength * (i + 1)))
                    {
                        ++count;
                    }
                }
                intervalsValues[i] = count;
            }

            return intervalsValues;
        }
};

int main()
{
    int length, intervals;
    cout << "Cantidad de datos: ";
    cin >> length;
    Histograma* hist = new Histograma(length);
    cout << endl << "HISTOGRAMA:" << endl;
    hist->printHistograma();
    cout << "Cantidad de intervalos a cortar: ";
    cin >> intervals;
    int* intervalsValues = hist->calculateIntervals(intervals);
    for (int i = 0; i < intervals - 1; ++i)
    {
        cout << intervalsValues[i] << " - ";
    }
    cout << intervalsValues[intervals - 1] << endl;
    return 0;
}
