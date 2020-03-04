// file improve-generated-dx.cc
// contributed by Basile Starynkevitch
/***************************************************************************
 * License:
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/
#include <ostream>
#include <istream>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstring>


int main(int argc, char**argv)
{
  if (argc!=3) {
    std::clog << "usage " << argv[0] << "input output" << std::endl;
    exit(1);
  }
  std::ifstream inp(argv[1]);
  std::ofstream out(argv[2]);
  out << "/* transformed file by " << __FILE__
      << " from " << argv[1] << " to " << argv[2] << "*/"
      << std::endl;
  int nbdefines = 0; // counter of #define
  int nbvars = 0; // counter of variables
  do {
    std::string curlin;
    std::getline(inp,curlin);

    if (curlin.size()==0)
      out << std::endl;
    else if (0==std::strncmp(curlin.c_str(), "#define ", strlen("#define"))) {
      if (nbdefines==0)
	out << std::endl
	  << "/*@@@@@ corrected by " << argv[0] << "*/" << std::endl
	    <<"#ifndef CAIA_GLOBAL_VAR" << std::endl
	    << "#define CAIA_GLOBAL_VAR extern" << std::endl
	    << "#endif /*CAIA_GLOBAL_VAR @@@@*/" << std::endl
	    << std::endl;
      nbdefines++;
      out << curlin << std::endl;
    } // end if #define
    else if (std::strchr(curlin.c_str(), '(') != nullptr) {
      out << curlin << std::endl;
    } // end if open paren
    else if (std::strstr(curlin.c_str(), "CAIA_GLOBAL_VAR") != nullptr) {
      out << curlin << std::endl;
    } // end if open paren
    else if (nbdefines>0
	     && std::strchr(curlin.c_str(), ';') != nullptr) {
      if (nbvars == 0)
	out << std::endl << "/*** CAIA global variables: */" <<std::endl;
      out << "CAIA_GLOBAL_VAR " << curlin << std::endl;
      nbvars ++;
    } // end if long or int or left bracket after #define-s
    else
      out << curlin << std::endl;
  } while (!inp.eof());
  out << std::flush;
} /* end of main  */

/* end of improve-generated-dx.cc */

