/*
  Pow.h The skeleton of the power operator.
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

#ifndef EXPR_CALC_POW_H
#define EXPR_CALC_POW_H

#include <string>
#include "BinOp.h"

/**
 * Representation of the 
 * power binary operator. 
 */
class Pow: public BinOp
{
public:
  double eval() const;

  Pow(Expr* l, Expr* r);

  std::string strOperator() const;
};

#endif
