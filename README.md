# System Verilog implementation of integer arithmetic
## Disclaimer
**The code provided in this repository is something I worked on in my free time for self-learning purposes and should not be considered production-level.**
## Content
* **integerArithmetic**
    * **adder_subtractor** - Carry Look Ahead adders/subtractors: 4-bit, generic 8-16-32-64-bit, 24-bit, 48-bit, 53-bit, 106-bit
    * **divider** - Generic radix-2 and radix-4 SRT signed/unsigned dividers based on Hennessy, Patterson, Computer Architecture a quantitative approach 7th edition, Appendix J
    * **intSqrt** - Simple generic radix-2 sequential integer square root unit
    * **multiplier** - Radix-4 hybrid Booth/Wallace Tree signed/unsigned combinational/pipelined multipliers: 16-bit, 24-bit, 32-bit, 53-bit, 64-bit

