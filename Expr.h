/*
  Expr.h The skeleton of a basic expression in the expression calculator.
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

#ifndef EXPR_CALC_EXPR_H
#define EXPR_CALC_EXPR_H

#include <string>

/**
 * An abstract class representing the structure of a basic
 * expression in the expression calculator.
 */

class Expr
{
public:
  /// Evaluation of  an expression
  virtual double eval () const = 0;

  /// A string representation of a formula
  virtual std::string toString () const = 0;

  /// A string representation of the operator used
  virtual std::string strOperator () const = 0;
};

#endif
