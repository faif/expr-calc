/*
  Num.h The skeleton of a number representation in the expression calculator.
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

#ifndef EXPR_CALC_NUM_H
#define EXPR_CALC_NUM_H

#include <string>
#include "Expr.h"

/**
 * Representation of a floating point number
 * in the expression calculator.
 */
class Num: public Expr
{
private:
  double value;			/**< the value of the number  */

public:
  double eval() const;

  std::string toString() const;

  std::string strOperator() const;

  Num();

  Num(double n);
};


#endif
