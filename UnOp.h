/*
  UnOp.h The skeleton of an unary operator in the expression calculator.
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

#ifndef EXPR_CALC_UNOP_H
#define EXPR_CALC_UNOP_H

#include <string>
#include "Expr.h"

/**
 * An abstract class representing the structure of an
 * unary operator in the expression calculator.
 */

class UnOp:public Expr
{
protected:
  Expr * u_exp;			/**< the expression of the operator */

public:
  UnOp ();

  UnOp (Expr *);

  virtual double eval () const = 0;

    std::string strOperator () const = 0;

    std::string toString () const;
};


#endif
