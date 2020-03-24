//********************************************************
// author D PORRAS
// date : 31/11/2019
// file: XMLBase.h
// base class for modify XML file
//********************************************************
#ifndef XMLBASE_H
#define XMLBASE_H

#include <XMLRoot.h>


class XMLBase : public XMLRoot
{
    public:
        XMLBase();
        XMLBase(string file);
        ~XMLBase();
        /** \brief This is a method for load XML file from path.
         *
         * \param	file The path of the file to load.
         *
         * This is a method for load XML file from a path specify in the file parameter.
        */
        void load_xml_file(string file);
        /** \brief This is a method for save XML file from path.
         *
         * \param	file The path of the return file.
         *
         * This is a method for save XML file in a path specify in the file parameter.
        */
        void save_xml_file(string file);

    protected:

    private:
        int save_helper(XMLRoot * parent , XMLRoot * child);
};

#endif // XMLBASE_H
