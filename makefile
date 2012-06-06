#    makefile Automatic project build file
#    Copyright (C) 2008 Athanasios Kasampalis <faif at dtek period org> 

#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.

#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.

#    You should have received a copy of the GNU General Public License
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.



CPP=g++				# full compile (assemble, link)
CC=g++ -c 			# compile, assemble, but do not link
RM=rm -f			# force removal of files

expr_calc:	Num.o BinOp.o Plus.o Minus.o Mult.o Div.o UnOp.o expr_calc.o \
		Sqrt.o Exp.o Pow.o
		$(CPP) expr_calc.o Num.o BinOp.o Plus.o Minus.o \
		Mult.o Div.o UnOp.o Sqrt.o Exp.o Pow.o -o expr_calc

expr_calc.o:	expr_calc.cpp expr_calc.h
		$(CC) expr_calc.cpp

Pow.o:		Pow.cc Pow.h
		$(CC) Pow.cc

Exp.o:		Exp.cc Exp.h
		$(CC) Exp.cc

Sqrt.o:		Sqrt.cc Sqrt.h
		$(CC) Sqrt.cc

UnOp.o:		UnOp.cc UnOp.h
		$(CC) UnOp.cc

Num.o:		Num.cc Num.h
		$(CC) Num.cc

BinOp.o:	BinOp.cc BinOp.h
		$(CC) BinOp.cc

Plus.o:		Plus.cc Plus.h
		$(CC) Plus.cc

Minus.o:        Minus.cc Minus.h
		$(CC) Minus.cc

Mult.o:        Mult.cc Mult.h
		$(CC) Mult.cc

Div.o:        	Div.cc Div.h
		$(CC) Div.cc

clean:
	$(RM) *.o expr_calc
