/*
  Sqrt.cc A representation of the square root operator.
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
#include <cmath>
#include "Sqrt.h"

using std::string;
using std::stringstream;
using std::domain_error;

/**
 * Evaluation of the square root
 * operator.
 *
 * @throw domain_error if the square
 * root of a negative number is asked
 * @return the square root of
 * the expression.
 */
double Sqrt::eval() const
{
  //\internal ensure that no negative number is given
  double t_eval = u_exp->eval();

  if (t_eval < 0)
    {
      throw domain_error ("You can't get the square root "
			  "of a negative number!");
    }

  return sqrt(t_eval);
}


/**
 * Initialisation of the 
 * square root operator 
 * with an expression.
 *
 * @param e a pointer to the
 * expression
 */
Sqrt::Sqrt(Expr* e): UnOp(e) {}


/**
 * A string representation
 * of the square root operator.
 * 
 * @return a <i>string</i>
 * instance of the square root
 * operator.
 */
string Sqrt::strOperator() const
{
  return "sqrt";
}
