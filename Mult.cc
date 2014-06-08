/*
  Mult.cc A representation of the multiplication operator.
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
#include "Mult.h"

using std::string;
using std::stringstream;

/**
 * Evaluation of the multiplication
 * operator.
 * 
 * @return the multiplication result of
 * the left and right expressions. 
 */
double Mult::eval() const
{
  return (left->eval() * right->eval());
}


/**
 * Initialisation of the 
 * multiplication operator 
 * with two expressions.
 *
 * @param l a pointer to the
 * left expression
 * @param r a pointer to the
 * right epxression
 */
Mult::Mult(Expr* l, Expr* r): BinOp(l, r) {}


/**
 * A string representation
 * of the multiplication operator.
 * 
 * @return a <i>string</i>
 * instance of the multiplication
 * operator.
 */
string Mult::strOperator() const
{
  return "*";
}
