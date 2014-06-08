/*
  BinOp.cc A binary operator in the expression calculator.
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
#include "BinOp.h"

using std::string;
using std::stringstream;

/**
 * Initialisation of a binary operator.
 * 
 * @param l a pointer to the left sub-expression
 * of the operator
 * @param r a pointer to the right sub-expression
 * of the operator
 */
BinOp::BinOp(Expr* l, Expr* r): left(l), right(r) {}

/**
 * A string representation
 * of a binary expression. 
 * 
 * @return a <i>string</i>
 * instance of a binary
 * expression, enclosed by
 * parenthesis.
 */
string BinOp::toString() const
{
  stringstream str;

  str << "(" << left->toString() << strOperator()
      << right->toString() << ")";

  return str.str();
}
