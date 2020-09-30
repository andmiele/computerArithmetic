//-----------------------------------------------------------------------------
// Copyright 2020 Andrea Miele
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//-----------------------------------------------------------------------------

#include<stdio.h>

typedef struct rational
{
	int n;
	int d;
} rational;

int compare(rational a, rational b)
{


	if(a.n * b.d > b.n * a.d)
		return 1;
	else

		if(a.n * b.d < b.n * a.d)
			return -1;
		else
			return 0;

}
int main()
{

	int Y = 1 << 3;
	int R = (1 << 5);
	rational values[11] = 
	{
		{-2, 3},
		{-5, 12},
		{-1, 3},
		{-1, 6},
		{-1, 12},
		{0, 1},
		{1, 12},
		{1, 6},
		{1, 3},
		{5, 12},
		{2, 3}
	};

	rational b = {2, 3};
	rational bn = {-2, 3};
	for(int y = Y; y < 2 * Y; y++)
		for(int r = -R ; r < R; r++)
		{


			rational vmax = {r + 1 , y * 2};
			rational vinf = {r + 1, (y + 1) * 2};
			rational vsup = {r, (y + 1) * 2};

			int rc = r < 0 ? (1 << 6) + r : r; 
			if ((compare(vinf, bn) > 0) && (compare(b, vsup) > 0))
			{


				if(compare(vinf, values[2]) <= 0){
					printf("// %d %d: -2\n", y, r);
					printf("{4'h%x, 6'h%x}: q2s = 3'b110;\n", y, rc);

				}
				else


					if(compare(vinf, values[4]) <= 0)
					{
						printf("// %d %d: -1\n", y, r);
						printf("{4'h%x, 6'h%x}: q2s = 3'b101;\n", y, rc);
					}
					else
						if(compare(vmax, values[7]) <= 0)
						{
							printf("// %d %d: 0\n", y, r);
							printf("{4'h%x, 6'h%x}: q2s = 3'b000;\n", y, rc);
						}

						else
							if(compare(vmax, values[9]) <= 0)
							{
								printf("// %d %d: 1\n", y, r);
								printf("{4'h%x, 6'h%x}: q2s = 3'b001;\n", y, rc);
							}

							else 
							{
								printf("// %d %d: 2\n", y, r);
								printf("{4'h%x, 6'h%x}: q2s = 3'b010;\n", y, rc);
							}



			}
		}
	return 0;
}
