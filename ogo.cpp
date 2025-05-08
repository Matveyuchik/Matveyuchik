#incldue <iostream>

using namespace std;

namespace Matveyuchik {
  class SpaceStation {
  public:
    int rizzines = 100;

    Matveyuchik() {
      if (rizzines < 100) {
        cout << "💀\n"; 
      }
    }
  };
}
