/*
  Div.cc A representation of the division operator.
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
#include <stdexcept>
#include "Div.h"

using std::string;
using std::stringstream;
using std::domain_error;

/**
 * Evaluation of the multiplication
 * operator.
 *
 * @throw domain_error if a division
 * by zero occurs 
 * @return the division result of
 * the left and right expressions.
 */
double Div::eval() const
{
  //\internal ensure that no division by zero occurs
  double r_eval = right->eval();

  if (r_eval == 0)
    {
      throw domain_error("Are you trying to divide by zero?");
    }

  return (left->eval() / r_eval);
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
Div::Div(Expr* l, Expr* r): BinOp(l, r) {}


/**
 * A string representation
 * of the division operator.
 * 
 * @return a <i>string</i>
 * instance of the division
 * operator.
 */
string Div::strOperator() const
{
  return "/";
}
