// newplace.cpp -- using placement new
#include <iostream>
#include <new> // for placement new
const int BUF = 512;
const int N = 5;
char buffer[BUF];      // chunk of memory
int main()
{
    using namespace std;
    double *pd1, *pd2;
    int i;
    cout << "Calling new and placement new:\n";
    pd1 = new double[N];           // use heap
    pd2 = new (buffer) double[N];  // use buffer array
	for (i = 0; i < N; i++)
	{
		pd2[i] = pd1[i] = 1000 + 20.0 * i;
	}
    cout << "Memory addresses:\n" << "  heap: " << pd1
        << "  static: " <<  (void *) buffer  <<endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }
    cout << "\nCalling new and placement new a second time:\n";
    double *pd3, *pd4;
    pd3= new double[N];            // find new address
    pd4 = new (buffer) double[N];  // overwrite old data
    for (i = 0; i < N; i++)
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd3[i] << " at " << &pd3[i] << "; ";
        cout << pd4[i] << " at " << &pd4[i] << endl;
    }
    cout << "\nCalling new and placement new a third time:\n";
    delete [] pd1;
    pd1= new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N]; 
    for (i = 0; i < N; i++)
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }
    delete [] pd1;
    delete [] pd3;
    // cin.get();
    return 0;
}

/*
Memory addresses:
heap: 00B42070  static: 00CFC2D8
Memory contents:
1000 at 00B42070; 1000 at 00CFC2D8
1020 at 00B42078; 1020 at 00CFC2E0
1040 at 00B42080; 1040 at 00CFC2E8
1060 at 00B42088; 1060 at 00CFC2F0
1080 at 00B42090; 1080 at 00CFC2F8

Calling new and placement new a second time:
Memory contents:
1000 at 00B41E80; 1000 at 00CFC2D8
1040 at 00B41E88; 1040 at 00CFC2E0
1080 at 00B41E90; 1080 at 00CFC2E8
1120 at 00B41E98; 1120 at 00CFC2F0
1160 at 00B41EA0; 1160 at 00CFC2F8

Calling new and placement new a third time:
Memory contents:
1000 at 00B42070; 1000 at 00CFC300
1060 at 00B42078; 1060 at 00CFC308
1120 at 00B42080; 1120 at 00CFC310
1180 at 00B42088; 1180 at 00CFC318
1240 at 00B42090; 1240 at 00CFC320
*/
