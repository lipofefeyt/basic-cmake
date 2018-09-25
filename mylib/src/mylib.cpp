/**
 * Interprets PEKOE's bytecode
 *
 *  Created on: Apr 12, 2013
 *      Author: fmartins
 *
 */

#include <mylib/mylib.h>
#include <stdio.h>

namespace mylib {

    MyLib MyLibInstance;

    MyLib::MyLib() {
        stuff = 0;
        lib_state = STATE_OFF;
    }

    void MyLib::do_private_stuff() {
        int y = 10;
        for (int x = 0; x <= y; x++) {
            stuff++;
        }
    }

    void MyLib::set_lib_state(int new_lib_state) {
        lib_state = new_lib_state;
    }

} //namespace pekoevm
