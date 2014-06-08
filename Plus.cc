/*
  Plus.cc A representation of the plus operator.
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
#include "Plus.h"

using std::string;
using std::stringstream;

/**
 * Evaluation of the plus
 * operator.
 * 
 * @return the addition result of
 * the left and right expressions. 
 */
double Plus::eval() const
{
  return (left->eval() + right->eval());
}

/**
 * Initialisation of the Plus 
 * operator with two
 * expressions.
 *
 * @param l a pointer to the
 * left expression
 * @param r a pointer to the
 * right epxression
 */
Plus::Plus(Expr* l, Expr* r): BinOp(l, r) {}

/**
 * A string representation
 * of the addition operator.
 * 
 * @return a <i>string</i>
 * instance of the addition
 * operator.
 */
string Plus::strOperator() const
{
  return "+";
}
