#include <iostream>
#include <stdio.h>
#include <string>

#include "XMLBase.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    XMLBase worldmap;
    string chemain = "teste.xml";
    worldmap.load_xml_file(chemain);
    cout << (worldmap.get_root(0))->get_element();
    return 0;
}
