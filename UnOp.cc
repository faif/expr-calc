/*
  UnOp.cc An unary  operator in the expression calculator.
  Copyright (C) 2008-14 Sakis Kasampalis <s.kasampalis@zoho.com>
  (this file is part of the expression calculator).

  The expression calculator is free software: you can redistribute it 
  and/or modify it under the terms of the GNU General Public License 
  as published by the Free Software Foundation, either version 3 of the 
  License, or (at your option) any later version.

  The expression calculator is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with the expression calculator.  If not, see 
  <http://www.gnu.org/licenses/>.
*/

#include <string>
#include <sstream>
#include "UnOp.h"

using std::string;
using std::stringstream;

/**
 * Initialisation of an unary operator.
 * 
 * @param e a pointer to the expression
 * of the operator
 */
UnOp::UnOp(Expr* e): u_exp(e) {}


/**
 * A string representation
 * of the unary operator. 
 * 
 * @return a <i>string</i>
 * instance of the unary
 * operator.
 */
string UnOp::toString() const
{
  stringstream str;

  str << strOperator() << "(" << u_exp->toString() << ")";

  return str.str();
}
