#include<iostream>
using namespace std;

inline int lrg (int &a, int &b, int &c);
int main()
{
	int p = 50, q = 40, r = 30;
	cout<<lrg(p, q, r);

	return 0;
}
int lrg (int &a, int &b, int &c)
{
	int m;
	/* if (a>b){
		if(a>c)
			m = a;
		else
			m = c;
	}
	else {
	if (b>c)
		m = b;
	else
		m = c;
	} */
	m= ((a>b)? ((a>c)? a: c): ((b>c)? b: c)); // using conditional operator
	return m;
}
/*
Inline functions use the execution pattern like macro expansion and substitution instead of 
conventional function call and return mechanism, eliminating the overhead of saving 
processor's current state(e.g. registers' values such as program counter to get back 
the return address where the program control will return after execution of the 
called function body and so on), pushing function arguments into the program stack 
before jumping to the starting location of function body,storing return value into 
register or some predefined location and restoring processors' registers to return 
to the callee function, incurred during function call and return.

In brief,'inline' keyword preceding function prototype declaration or definition is treated 
by the compiler in a different way than the normal functions.It is a request to the compiler 
to expand the function body at the place of that function call statement and not to jump to 
function body. 
Compiler, if possible, executes the function as inline but it may ignore so and 
treat this as normal function.

Inline makes the program to run faster but space complexity may be increased 
if the function is called more than once.

When a member function defined inside the class, then it is automatically treated as inline.

There are certain constraints for an inline function.

1. Lines of code should be kept as minimum as possible(2-3 lines in general). 
That's why it shouldn't contain complex blocks like loop, switch or goto statements.

2. It shouldn't contain static variables. 

3. It shouldn't be recursive.

4. For functions not returning values,it shouldn't have any return statement.

5. For functions having return type other than void, it should have return statement 
in the function body.

If any of the above is not maintained, inline expansion/ substitution may not work.

ADVANTAGES--

1. Elimination of Function call overhead 

2. It also removes the overhead of push/pop variables on the stack during function call.

3. It also saves overhead of a return operation from a function.

4. When an inline function is encountered, compiler may perform context specific optimization 
on the body of the function. Other optimizations can be obtained by considering the flows of 
calling and called context.

5. Inline functions, if small, may be useful for embedded systems because inline can yield 
less code than the function call preamble and return. 

DISADVANTAGES--

1. The added variables from the inlined function consumes additional registers, after inlining, 
if variables' number which are going to use registers increases drastically then they may 
create overhead on register variable resource utilization.

2. Use of so many inline function-calls increases the size of the binary executable file due to 
duplication of same code.

3. Too  much inlining can reduce instruction cache hit rate, thus reducing the speed of 
instruction fetch from that of cache memory to that of primary memory.

4. Inline functions may increase compile time overhead if someone changes the code inside 
inline function then all the calling location has to be recompiled because compiler would 
require to replace all the code once again to reflect the changes, otherwise it will continue 
with old functionality.

5. Inline functions may not be useful for many embedded system where reduced code size is more 
important than speed.

6. Inline functions might cause thrashing because inlining might increase size of binary 
executable  file. Thrashing in memory causes performance of computer to degrade.

*/
