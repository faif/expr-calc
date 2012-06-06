/*
    expr_calc A calculator that understands parenthesis.
    Copyright (C) 2008 Athanasios Kasampalis <faif at dtek period gr>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <stdexcept>
#include <vector>

#include "Num.h"
#include "Expr.h"
#include "Plus.h"
#include "Minus.h"
#include "Mult.h"
#include "Div.h"
#include "Sqrt.h"
#include "Exp.h"
#include "Pow.h"
#include "expr_calc.h"

using
  std::cout;
using
  std::cerr;
using
  std::endl;
using
  std::domain_error;
using
  std::vector;

typedef
  vector <
Expr * >::size_type
  vec_sz;			/// the size of a vector                                                         

void
mandatory2_test ()
{
  vector < Expr * >expressions;

  Num
  num5 (5);
  Num
  num1 (1);
  Num
  num2 (2);
  Num
  num0 (0);

  Plus
  ex_plus2_5 (&num2, &num5);
  Minus
  ex_minus (&ex_plus2_5, &num1);

  Mult
  ex_mul (&ex_plus2_5, &ex_minus);
  expressions.push_back (&ex_mul);

  Div
  ex_div7_5 (&ex_plus2_5, &num5);
  expressions.push_back (&ex_div7_5);

  Pow
  ex_pow (&num5, &num2);
  expressions.push_back (&ex_pow);

  Pow
  ex_pow2 (&num1, &ex_mul);
  expressions.push_back (&ex_pow2);

  Exp
  ex_exp (&num2);
  expressions.push_back (&ex_exp);

  Sqrt
  ex_sqrt (&num2);
  expressions.push_back (&ex_sqrt);

  Mult
  ex_ (&ex_pow, &ex_sqrt);
  expressions.push_back (&ex_);

  for (vec_sz i = 0; i != expressions.size (); ++i)
    cout << expressions[i]->toString () << " = "
      << expressions[i]->eval () << endl;

  Div
  ex_dbz (&num2, &num0);
  try
  {
    cout << ex_dbz.toString ();
    cout.flush ();
    ex_dbz.eval ();
  }
  catch (std::domain_error ex)
  {
    cout << "Exception: " << ex.what () << endl;
  }
}


int
main ()
{

  // number 5
  Num
  num5 (5);

  cout << num5.eval () << endl;

  Expr *
    expr5;

  expr5 = &num5;

  cout << (expr5->eval ()) << endl;

  Num
  num2 (2);



  // sum of number 5 and number 2
  Plus
  plus2_5 (&num2, &num5);

  cout << plus2_5.eval () << endl;



  // expression 2 * (3 + 4)

  Num
  num3 (3);
  Num
  num4 (4);

  Plus
  num3_4 (&num3, &num4);

  Mult
  expr_num (&num2, &num3_4);

  cout << expr_num.eval () << endl;

  cout << expr_num.toString () << endl;

  Num
  num0 (0);



  // check if division by zero is allowed
  Div
  div3_0 (&num3, &num0);

  try
  {
    cout << div3_0.eval () << endl;
  }
  catch (domain_error & e)
  {
    cerr << e.what () << endl;
  }



  // get the square root of a number
  Sqrt
  sqrt3 (&num3);

  Num
  num_min1 (-1);

  Sqrt
  sqrt_min1 (&num_min1);

  cout << sqrt3.toString () << ": ";

  try
  {
    cout << sqrt3.eval () << endl;
    cout << sqrt_min1.eval () << endl;
  }
  catch (domain_error & e)
  {
    cerr << e.what () << endl;
  }




  // get the exponent of a number
  Exp
  exp3 (&num3);

  cout << exp3.toString () << ": " << exp3.eval () << endl;


  // get the power of a number
  Pow
  pow3_2 (&num3, &num2);

  cout << pow3_2.toString () << ": ";

  try
  {
    cout << pow3_2.eval () << endl;
  }
  catch (domain_error & e)
  {
    cerr << e.what () << endl;
  }


  // start the mandatory test
  cout << endl << "-- The mandatory test --" << endl;

  mandatory2_test ();

  return 0;
}
