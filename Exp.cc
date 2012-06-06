/*
  Exp.cc A representation of the exponential operator.
  Copyright (C) 2008 Athanasios Kasampalis <faif at dtek period gr>
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
#include <cmath>
#include "Exp.h"

using
  std::string;
using
  std::stringstream;


/**
 * Evaluation of the exponential
 * operator.
 *
 * @return the exponent of
 * the expression - e (2.7182818) 
 * raised to the expression.
 */

double
Exp::eval () const
{
  return exp (u_exp->eval ());
}




/**
 * Initialisation of the 
 * square root operator 
 * with an expression.
 *
 * @param e a pointer to the
 * expression
 */

Exp::Exp (Expr * e):UnOp (e)
{
}



/**
 * A string representation
 * of the exponential operator.
 * 
 * @return a <i>string</i>
 * instance of the exponential operator.
 */

string
Exp::strOperator () const
{
  return "exp";
}
