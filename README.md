# System Verilog implementation of integer arithmetic
## Disclaimer
**The code provided in this repository is something I worked on in my free time to learn System Verilog and brush up on digital design from the point of view of someone who was a VHDL RTL research engineer in a previous life.
The code is not production level, not thoroughly tested or verified and most importantly was not written with any commercial intent in mind but purely as a self-learning experience.
I am sharing it with the hope that it could be a useful starting point or reference for folks who do research or self-learning in computer hardware.**
## Content
* **integerArithmetic**
    * **adder_subtractor** - Carry Look Ahead adders/subtractors: 4-bit, generic 8-16-32-64-bit, 24-bit, 48-bit, 53-bit, 106-bit
    * **divider** - Generic radix-2 and radix-4 SRT signed/unsigned dividers based on Hennessy, Patterson, Computer Architecture a quantitative approach 7th edition, Appendix J
    * **intSqrt** - Simple generic radix-2 sequential integer square root unit
    * **multiplier** - Radix-4 hybrid Booth/Wallace Tree signed/unsigned combinational/pipelined multipliers: 16-bit, 24-bit, 32-bit, 53-bit, 64-bit

