//
// Created by Clayton Wong on 2018-12-17.
//

#pragma once


#include <string>


const std::string SAMPLE_INPUT =
R"(Before: [2, 0, 0, 1]
15 3 1 3
After:  [2, 0, 0, 1]

Before: [3, 2, 3, 3]
4 3 3 0
After:  [3, 2, 3, 3]

Before: [3, 2, 1, 3]
12 3 0 0
After:  [1, 2, 1, 3]

Before: [1, 2, 2, 2]
2 0 2 0
After:  [0, 2, 2, 2]

Before: [0, 1, 2, 1]
10 1 0 1
After:  [0, 1, 2, 1]

Before: [2, 1, 3, 2]
11 0 3 3
After:  [2, 1, 3, 1]

Before: [1, 2, 1, 1]
9 2 0 2
After:  [1, 2, 2, 1]

Before: [3, 0, 1, 1]
15 3 1 3
After:  [3, 0, 1, 1]

Before: [0, 1, 1, 1]
10 1 0 3
After:  [0, 1, 1, 1]

Before: [1, 3, 2, 2]
2 0 2 2
After:  [1, 3, 0, 2]

Before: [0, 2, 2, 3]
13 3 2 3
After:  [0, 2, 2, 0]

Before: [2, 1, 3, 1]
12 2 3 2
After:  [2, 1, 0, 1]

Before: [2, 1, 2, 2]
7 0 2 1
After:  [2, 1, 2, 2]

Before: [2, 2, 0, 2]
11 0 3 2
After:  [2, 2, 1, 2]

Before: [3, 0, 3, 2]
3 3 3 3
After:  [3, 0, 3, 0]

Before: [1, 0, 1, 1]
9 2 0 2
After:  [1, 0, 2, 1]

Before: [0, 1, 1, 0]
5 1 3 0
After:  [1, 1, 1, 0]

Before: [1, 0, 1, 0]
9 2 0 3
After:  [1, 0, 1, 2]

Before: [2, 1, 0, 3]
0 1 3 0
After:  [0, 1, 0, 3]

Before: [2, 3, 2, 0]
12 2 0 3
After:  [2, 3, 2, 1]

Before: [0, 0, 3, 2]
1 0 0 0
After:  [0, 0, 3, 2]

Before: [2, 0, 2, 1]
14 3 2 2
After:  [2, 0, 1, 1]

Before: [0, 0, 2, 1]
15 3 1 3
After:  [0, 0, 2, 1]

Before: [2, 0, 1, 3]
13 3 2 3
After:  [2, 0, 1, 0]

Before: [3, 1, 3, 3]
7 2 3 2
After:  [3, 1, 1, 3]

Before: [1, 1, 1, 1]
3 2 3 3
After:  [1, 1, 1, 0]

Before: [1, 0, 2, 1]
14 3 2 1
After:  [1, 1, 2, 1]

Before: [1, 1, 2, 2]
2 0 2 3
After:  [1, 1, 2, 0]

Before: [2, 3, 0, 1]
3 3 3 2
After:  [2, 3, 0, 1]

Before: [1, 1, 2, 0]
2 0 2 2
After:  [1, 1, 0, 0]

Before: [2, 1, 3, 0]
5 1 3 3
After:  [2, 1, 3, 1]

Before: [2, 3, 2, 1]
3 3 3 0
After:  [0, 3, 2, 1]

Before: [0, 1, 0, 2]
10 1 0 2
After:  [0, 1, 1, 2]

Before: [1, 1, 2, 2]
4 2 2 3
After:  [1, 1, 2, 2]

Before: [3, 1, 0, 2]
6 1 3 1
After:  [3, 0, 0, 2]

Before: [3, 0, 3, 1]
15 3 1 0
After:  [1, 0, 3, 1]

Before: [3, 1, 2, 0]
8 1 2 0
After:  [0, 1, 2, 0]

Before: [1, 1, 1, 1]
9 2 3 2
After:  [1, 1, 2, 1]

Before: [0, 1, 3, 0]
5 1 3 3
After:  [0, 1, 3, 1]

Before: [3, 1, 1, 3]
7 0 3 3
After:  [3, 1, 1, 1]

Before: [1, 2, 2, 1]
14 3 2 0
After:  [1, 2, 2, 1]

Before: [2, 1, 2, 0]
5 1 3 0
After:  [1, 1, 2, 0]

Before: [0, 1, 1, 0]
5 1 3 1
After:  [0, 1, 1, 0]

Before: [2, 1, 1, 3]
13 3 2 1
After:  [2, 0, 1, 3]

Before: [2, 0, 1, 3]
15 2 1 0
After:  [1, 0, 1, 3]

Before: [2, 3, 2, 2]
11 0 3 3
After:  [2, 3, 2, 1]

Before: [3, 3, 2, 1]
14 3 2 0
After:  [1, 3, 2, 1]

Before: [2, 1, 1, 2]
6 1 3 1
After:  [2, 0, 1, 2]

Before: [3, 1, 0, 3]
7 0 3 0
After:  [1, 1, 0, 3]

Before: [0, 3, 1, 3]
13 3 3 2
After:  [0, 3, 1, 3]

Before: [2, 1, 3, 2]
6 1 3 2
After:  [2, 1, 0, 2]

Before: [3, 2, 2, 3]
13 3 1 0
After:  [0, 2, 2, 3]

Before: [1, 1, 1, 0]
5 1 3 1
After:  [1, 1, 1, 0]

Before: [3, 1, 2, 1]
14 3 2 0
After:  [1, 1, 2, 1]

Before: [3, 3, 0, 3]
4 3 3 1
After:  [3, 3, 0, 3]

Before: [0, 2, 0, 3]
13 3 3 3
After:  [0, 2, 0, 1]

Before: [1, 1, 2, 2]
2 0 2 1
After:  [1, 0, 2, 2]

Before: [1, 3, 1, 3]
9 2 0 2
After:  [1, 3, 2, 3]

Before: [3, 1, 1, 2]
6 1 3 2
After:  [3, 1, 0, 2]

Before: [0, 0, 1, 3]
13 0 0 3
After:  [0, 0, 1, 1]

Before: [1, 1, 2, 0]
8 1 2 0
After:  [0, 1, 2, 0]

Before: [2, 2, 2, 1]
12 2 0 1
After:  [2, 1, 2, 1]

Before: [1, 0, 2, 0]
15 0 1 1
After:  [1, 1, 2, 0]

Before: [1, 1, 3, 0]
5 1 3 3
After:  [1, 1, 3, 1]

Before: [0, 0, 2, 1]
14 3 2 2
After:  [0, 0, 1, 1]

Before: [1, 1, 0, 3]
4 3 3 3
After:  [1, 1, 0, 3]

Before: [0, 0, 2, 3]
1 0 0 2
After:  [0, 0, 0, 3]

Before: [2, 1, 2, 2]
8 1 2 3
After:  [2, 1, 2, 0]

Before: [0, 1, 0, 3]
10 1 0 1
After:  [0, 1, 0, 3]

Before: [1, 2, 2, 3]
2 0 2 3
After:  [1, 2, 2, 0]

Before: [2, 1, 0, 2]
11 0 3 3
After:  [2, 1, 0, 1]

Before: [0, 2, 0, 2]
1 0 0 0
After:  [0, 2, 0, 2]

Before: [1, 3, 2, 0]
2 0 2 1
After:  [1, 0, 2, 0]

Before: [1, 0, 2, 1]
3 3 3 0
After:  [0, 0, 2, 1]

Before: [1, 1, 2, 1]
4 2 2 1
After:  [1, 2, 2, 1]

Before: [1, 0, 2, 1]
15 0 1 0
After:  [1, 0, 2, 1]

Before: [0, 1, 1, 3]
10 1 0 1
After:  [0, 1, 1, 3]

Before: [0, 3, 1, 1]
3 3 3 1
After:  [0, 0, 1, 1]

Before: [0, 1, 1, 2]
6 1 3 1
After:  [0, 0, 1, 2]

Before: [0, 0, 3, 3]
1 0 0 1
After:  [0, 0, 3, 3]

Before: [1, 3, 1, 1]
9 2 0 2
After:  [1, 3, 2, 1]

Before: [0, 1, 3, 3]
10 1 0 0
After:  [1, 1, 3, 3]

Before: [2, 0, 1, 3]
4 3 3 2
After:  [2, 0, 3, 3]

Before: [2, 1, 1, 1]
9 2 3 0
After:  [2, 1, 1, 1]

Before: [3, 0, 3, 3]
12 3 2 3
After:  [3, 0, 3, 1]

Before: [3, 1, 0, 2]
6 1 3 3
After:  [3, 1, 0, 0]

Before: [0, 3, 1, 3]
4 3 3 3
After:  [0, 3, 1, 3]

Before: [3, 0, 1, 3]
12 3 0 3
After:  [3, 0, 1, 1]

Before: [3, 1, 3, 3]
0 1 3 1
After:  [3, 0, 3, 3]

Before: [2, 1, 2, 2]
8 1 2 0
After:  [0, 1, 2, 2]

Before: [2, 2, 3, 1]
3 3 3 1
After:  [2, 0, 3, 1]

Before: [1, 0, 1, 0]
9 2 0 2
After:  [1, 0, 2, 0]

Before: [3, 1, 2, 0]
8 1 2 2
After:  [3, 1, 0, 0]

Before: [3, 2, 1, 3]
7 0 3 1
After:  [3, 1, 1, 3]

Before: [0, 1, 0, 1]
10 1 0 1
After:  [0, 1, 0, 1]

Before: [1, 1, 3, 3]
13 3 1 2
After:  [1, 1, 0, 3]

Before: [3, 1, 0, 3]
13 3 3 2
After:  [3, 1, 1, 3]

Before: [0, 0, 0, 2]
3 3 3 3
After:  [0, 0, 0, 0]

Before: [2, 0, 3, 2]
11 0 3 3
After:  [2, 0, 3, 1]

Before: [3, 1, 3, 3]
12 3 2 2
After:  [3, 1, 1, 3]

Before: [2, 0, 2, 1]
4 2 2 0
After:  [2, 0, 2, 1]

Before: [0, 3, 3, 1]
12 2 3 3
After:  [0, 3, 3, 0]

Before: [2, 1, 2, 1]
8 1 2 2
After:  [2, 1, 0, 1]

Before: [2, 2, 2, 2]
11 0 3 1
After:  [2, 1, 2, 2]

Before: [1, 2, 1, 2]
3 3 3 2
After:  [1, 2, 0, 2]

Before: [3, 2, 1, 1]
9 2 3 3
After:  [3, 2, 1, 2]

Before: [3, 0, 3, 1]
3 3 3 1
After:  [3, 0, 3, 1]

Before: [2, 2, 0, 2]
11 0 3 0
After:  [1, 2, 0, 2]

Before: [2, 2, 1, 1]
3 2 3 3
After:  [2, 2, 1, 0]

Before: [1, 1, 2, 2]
6 1 3 2
After:  [1, 1, 0, 2]

Before: [1, 1, 2, 2]
6 1 3 0
After:  [0, 1, 2, 2]

Before: [2, 1, 2, 0]
7 0 2 1
After:  [2, 1, 2, 0]

Before: [1, 1, 2, 2]
6 1 3 3
After:  [1, 1, 2, 0]

Before: [3, 0, 2, 3]
7 0 3 2
After:  [3, 0, 1, 3]

Before: [3, 1, 2, 1]
8 1 2 2
After:  [3, 1, 0, 1]

Before: [1, 0, 2, 3]
15 0 1 2
After:  [1, 0, 1, 3]

Before: [1, 0, 2, 3]
15 0 1 1
After:  [1, 1, 2, 3]

Before: [2, 2, 1, 2]
11 0 3 2
After:  [2, 2, 1, 2]

Before: [0, 2, 1, 1]
9 2 3 0
After:  [2, 2, 1, 1]

Before: [0, 0, 1, 1]
15 2 1 0
After:  [1, 0, 1, 1]

Before: [1, 2, 2, 0]
2 0 2 1
After:  [1, 0, 2, 0]

Before: [0, 0, 2, 3]
13 0 0 3
After:  [0, 0, 2, 1]

Before: [2, 0, 1, 2]
11 0 3 0
After:  [1, 0, 1, 2]

Before: [3, 0, 2, 1]
14 3 2 0
After:  [1, 0, 2, 1]

Before: [0, 3, 3, 3]
7 2 3 3
After:  [0, 3, 3, 1]

Before: [0, 2, 1, 3]
0 2 3 1
After:  [0, 0, 1, 3]

Before: [3, 1, 0, 2]
6 1 3 2
After:  [3, 1, 0, 2]

Before: [2, 3, 2, 2]
11 0 3 1
After:  [2, 1, 2, 2]

Before: [2, 1, 1, 0]
5 1 3 2
After:  [2, 1, 1, 0]

Before: [2, 1, 2, 0]
8 1 2 3
After:  [2, 1, 2, 0]

Before: [1, 1, 2, 3]
4 3 3 1
After:  [1, 3, 2, 3]

Before: [1, 1, 1, 0]
9 2 0 3
After:  [1, 1, 1, 2]

Before: [2, 1, 2, 2]
11 0 3 1
After:  [2, 1, 2, 2]

Before: [0, 0, 1, 1]
1 0 0 1
After:  [0, 0, 1, 1]

Before: [2, 1, 2, 2]
6 1 3 0
After:  [0, 1, 2, 2]

Before: [0, 1, 1, 0]
5 1 3 3
After:  [0, 1, 1, 1]

Before: [1, 2, 2, 1]
2 0 2 1
After:  [1, 0, 2, 1]

Before: [2, 1, 2, 1]
8 1 2 0
After:  [0, 1, 2, 1]

Before: [1, 1, 2, 0]
4 2 2 2
After:  [1, 1, 2, 0]

Before: [0, 2, 1, 1]
9 2 3 3
After:  [0, 2, 1, 2]

Before: [1, 0, 1, 3]
9 2 0 1
After:  [1, 2, 1, 3]

Before: [2, 3, 2, 1]
14 3 2 0
After:  [1, 3, 2, 1]

Before: [0, 1, 2, 1]
14 3 2 3
After:  [0, 1, 2, 1]

Before: [0, 1, 3, 3]
4 3 3 2
After:  [0, 1, 3, 3]

Before: [0, 2, 1, 3]
0 1 3 3
After:  [0, 2, 1, 0]

Before: [0, 1, 0, 0]
10 1 0 2
After:  [0, 1, 1, 0]

Before: [0, 1, 2, 2]
10 1 0 0
After:  [1, 1, 2, 2]

Before: [1, 1, 0, 0]
5 1 3 0
After:  [1, 1, 0, 0]

Before: [0, 0, 1, 3]
0 2 3 0
After:  [0, 0, 1, 3]

Before: [1, 3, 2, 2]
2 0 2 0
After:  [0, 3, 2, 2]

Before: [0, 1, 0, 3]
10 1 0 0
After:  [1, 1, 0, 3]

Before: [3, 1, 2, 0]
5 1 3 2
After:  [3, 1, 1, 0]

Before: [0, 0, 2, 1]
14 3 2 0
After:  [1, 0, 2, 1]

Before: [1, 3, 2, 2]
2 0 2 3
After:  [1, 3, 2, 0]

Before: [0, 3, 2, 1]
1 0 0 1
After:  [0, 0, 2, 1]

Before: [1, 1, 1, 2]
9 2 0 1
After:  [1, 2, 1, 2]

Before: [0, 1, 1, 1]
10 1 0 2
After:  [0, 1, 1, 1]

Before: [2, 3, 1, 1]
9 2 3 0
After:  [2, 3, 1, 1]

Before: [1, 0, 1, 1]
15 3 1 0
After:  [1, 0, 1, 1]

Before: [0, 1, 1, 2]
10 1 0 2
After:  [0, 1, 1, 2]

Before: [1, 1, 2, 1]
14 3 2 0
After:  [1, 1, 2, 1]

Before: [3, 1, 1, 3]
4 3 3 1
After:  [3, 3, 1, 3]

Before: [3, 0, 0, 3]
7 0 3 2
After:  [3, 0, 1, 3]

Before: [1, 3, 3, 3]
4 3 3 3
After:  [1, 3, 3, 3]

Before: [0, 1, 3, 2]
10 1 0 3
After:  [0, 1, 3, 1]

Before: [0, 3, 3, 3]
13 3 3 1
After:  [0, 1, 3, 3]

Before: [0, 0, 1, 2]
3 3 3 2
After:  [0, 0, 0, 2]

Before: [3, 2, 3, 3]
12 3 0 0
After:  [1, 2, 3, 3]

Before: [1, 1, 3, 3]
7 2 3 0
After:  [1, 1, 3, 3]

Before: [2, 0, 1, 3]
15 2 1 1
After:  [2, 1, 1, 3]

Before: [0, 3, 2, 3]
0 2 3 1
After:  [0, 0, 2, 3]

Before: [2, 1, 2, 2]
7 0 2 3
After:  [2, 1, 2, 1]

Before: [2, 1, 0, 0]
5 1 3 2
After:  [2, 1, 1, 0]

Before: [3, 3, 2, 1]
3 3 3 0
After:  [0, 3, 2, 1]

Before: [1, 1, 2, 0]
5 1 3 3
After:  [1, 1, 2, 1]

Before: [1, 1, 2, 1]
2 0 2 1
After:  [1, 0, 2, 1]

Before: [2, 0, 1, 1]
9 2 3 3
After:  [2, 0, 1, 2]

Before: [1, 0, 2, 0]
2 0 2 2
After:  [1, 0, 0, 0]

Before: [3, 1, 2, 1]
8 1 2 0
After:  [0, 1, 2, 1]

Before: [1, 3, 1, 3]
13 3 2 1
After:  [1, 0, 1, 3]

Before: [0, 1, 3, 0]
10 1 0 0
After:  [1, 1, 3, 0]

Before: [0, 2, 2, 2]
1 0 0 2
After:  [0, 2, 0, 2]

Before: [1, 1, 0, 1]
3 3 3 2
After:  [1, 1, 0, 1]

Before: [3, 1, 3, 3]
12 3 2 1
After:  [3, 1, 3, 3]

Before: [2, 2, 2, 3]
12 2 1 1
After:  [2, 1, 2, 3]

Before: [0, 1, 0, 0]
5 1 3 0
After:  [1, 1, 0, 0]

Before: [1, 0, 1, 1]
9 2 3 3
After:  [1, 0, 1, 2]

Before: [0, 1, 3, 2]
6 1 3 1
After:  [0, 0, 3, 2]

Before: [2, 0, 2, 1]
14 3 2 0
After:  [1, 0, 2, 1]

Before: [1, 0, 2, 0]
2 0 2 3
After:  [1, 0, 2, 0]

Before: [0, 1, 1, 2]
6 1 3 3
After:  [0, 1, 1, 0]

Before: [0, 0, 2, 0]
1 0 0 0
After:  [0, 0, 2, 0]

Before: [0, 0, 3, 1]
15 3 1 1
After:  [0, 1, 3, 1]

Before: [1, 0, 1, 3]
9 2 0 3
After:  [1, 0, 1, 2]

Before: [1, 2, 2, 1]
12 2 1 0
After:  [1, 2, 2, 1]

Before: [3, 1, 1, 1]
9 2 3 1
After:  [3, 2, 1, 1]

Before: [2, 1, 2, 0]
5 1 3 3
After:  [2, 1, 2, 1]

Before: [3, 2, 1, 3]
0 1 3 2
After:  [3, 2, 0, 3]

Before: [3, 1, 2, 3]
12 3 0 0
After:  [1, 1, 2, 3]

Before: [0, 0, 0, 1]
3 3 3 3
After:  [0, 0, 0, 0]

Before: [0, 2, 2, 1]
1 0 0 3
After:  [0, 2, 2, 0]

Before: [1, 1, 2, 1]
8 1 2 0
After:  [0, 1, 2, 1]

Before: [2, 1, 3, 0]
5 1 3 2
After:  [2, 1, 1, 0]

Before: [1, 1, 2, 0]
8 1 2 1
After:  [1, 0, 2, 0]

Before: [3, 0, 2, 3]
0 2 3 1
After:  [3, 0, 2, 3]

Before: [0, 3, 2, 1]
14 3 2 0
After:  [1, 3, 2, 1]

Before: [2, 2, 2, 3]
0 2 3 3
After:  [2, 2, 2, 0]

Before: [3, 1, 2, 2]
6 1 3 0
After:  [0, 1, 2, 2]

Before: [1, 2, 1, 1]
9 2 0 3
After:  [1, 2, 1, 2]

Before: [3, 1, 0, 3]
12 3 0 3
After:  [3, 1, 0, 1]

Before: [1, 2, 1, 1]
9 2 3 1
After:  [1, 2, 1, 1]

Before: [2, 0, 2, 0]
7 0 2 3
After:  [2, 0, 2, 1]

Before: [3, 2, 0, 3]
12 3 0 1
After:  [3, 1, 0, 3]

Before: [2, 3, 2, 0]
7 0 2 1
After:  [2, 1, 2, 0]

Before: [1, 1, 1, 3]
0 2 3 3
After:  [1, 1, 1, 0]

Before: [1, 1, 2, 0]
2 0 2 0
After:  [0, 1, 2, 0]

Before: [1, 3, 2, 1]
14 3 2 3
After:  [1, 3, 2, 1]

Before: [1, 2, 1, 3]
9 2 0 2
After:  [1, 2, 2, 3]

Before: [3, 1, 2, 3]
8 1 2 2
After:  [3, 1, 0, 3]

Before: [0, 3, 3, 3]
12 3 2 0
After:  [1, 3, 3, 3]

Before: [1, 0, 2, 2]
15 0 1 2
After:  [1, 0, 1, 2]

Before: [2, 2, 3, 2]
11 0 3 0
After:  [1, 2, 3, 2]

Before: [3, 1, 2, 1]
14 3 2 2
After:  [3, 1, 1, 1]

Before: [1, 1, 1, 0]
5 1 3 0
After:  [1, 1, 1, 0]

Before: [3, 1, 1, 1]
3 2 3 1
After:  [3, 0, 1, 1]

Before: [2, 1, 3, 3]
7 2 3 0
After:  [1, 1, 3, 3]

Before: [1, 1, 2, 3]
2 0 2 2
After:  [1, 1, 0, 3]

Before: [3, 1, 2, 0]
5 1 3 0
After:  [1, 1, 2, 0]

Before: [2, 2, 1, 1]
9 2 3 1
After:  [2, 2, 1, 1]

Before: [2, 0, 2, 0]
4 2 2 2
After:  [2, 0, 2, 0]

Before: [0, 2, 1, 2]
3 3 3 3
After:  [0, 2, 1, 0]

Before: [3, 0, 1, 3]
7 0 3 1
After:  [3, 1, 1, 3]

Before: [2, 2, 3, 2]
11 0 3 3
After:  [2, 2, 3, 1]

Before: [2, 2, 2, 3]
0 2 3 1
After:  [2, 0, 2, 3]

Before: [0, 1, 3, 0]
5 1 3 2
After:  [0, 1, 1, 0]

Before: [3, 1, 2, 2]
6 1 3 2
After:  [3, 1, 0, 2]

Before: [0, 2, 0, 3]
4 3 3 3
After:  [0, 2, 0, 3]

Before: [2, 2, 3, 3]
7 2 3 3
After:  [2, 2, 3, 1]

Before: [0, 3, 1, 2]
3 3 3 2
After:  [0, 3, 0, 2]

Before: [0, 3, 3, 0]
1 0 0 0
After:  [0, 3, 3, 0]

Before: [0, 3, 3, 3]
13 0 0 0
After:  [1, 3, 3, 3]

Before: [3, 0, 1, 2]
3 3 3 3
After:  [3, 0, 1, 0]

Before: [0, 1, 1, 1]
3 2 3 1
After:  [0, 0, 1, 1]

Before: [2, 2, 2, 1]
12 2 1 2
After:  [2, 2, 1, 1]

Before: [2, 2, 3, 2]
11 0 3 2
After:  [2, 2, 1, 2]

Before: [0, 1, 0, 3]
4 3 3 0
After:  [3, 1, 0, 3]

Before: [0, 3, 1, 1]
9 2 3 3
After:  [0, 3, 1, 2]

Before: [2, 1, 0, 0]
5 1 3 1
After:  [2, 1, 0, 0]

Before: [0, 1, 3, 2]
6 1 3 0
After:  [0, 1, 3, 2]

Before: [2, 3, 0, 2]
11 0 3 2
After:  [2, 3, 1, 2]

Before: [2, 1, 2, 1]
14 3 2 0
After:  [1, 1, 2, 1]

Before: [2, 1, 2, 3]
7 0 2 2
After:  [2, 1, 1, 3]

Before: [2, 1, 3, 3]
7 2 3 2
After:  [2, 1, 1, 3]

Before: [1, 2, 1, 1]
3 2 3 2
After:  [1, 2, 0, 1]

Before: [2, 3, 1, 1]
9 2 3 2
After:  [2, 3, 2, 1]

Before: [0, 1, 2, 1]
8 1 2 3
After:  [0, 1, 2, 0]

Before: [3, 2, 2, 1]
14 3 2 0
After:  [1, 2, 2, 1]

Before: [2, 1, 2, 3]
8 1 2 1
After:  [2, 0, 2, 3]

Before: [2, 1, 2, 1]
14 3 2 3
After:  [2, 1, 2, 1]

Before: [0, 0, 3, 0]
1 0 0 0
After:  [0, 0, 3, 0]

Before: [3, 2, 2, 3]
7 0 3 1
After:  [3, 1, 2, 3]

Before: [1, 3, 2, 0]
2 0 2 2
After:  [1, 3, 0, 0]

Before: [1, 2, 0, 3]
13 3 1 0
After:  [0, 2, 0, 3]

Before: [2, 3, 0, 2]
11 0 3 3
After:  [2, 3, 0, 1]

Before: [1, 2, 2, 1]
14 3 2 2
After:  [1, 2, 1, 1]

Before: [0, 1, 0, 3]
4 3 3 3
After:  [0, 1, 0, 3]

Before: [0, 1, 2, 0]
5 1 3 1
After:  [0, 1, 2, 0]

Before: [0, 2, 2, 3]
1 0 0 3
After:  [0, 2, 2, 0]

Before: [2, 1, 3, 1]
12 2 3 0
After:  [0, 1, 3, 1]

Before: [0, 1, 2, 0]
10 1 0 1
After:  [0, 1, 2, 0]

Before: [1, 1, 1, 3]
0 1 3 2
After:  [1, 1, 0, 3]

Before: [2, 2, 2, 2]
11 0 3 0
After:  [1, 2, 2, 2]

Before: [0, 2, 1, 0]
1 0 0 2
After:  [0, 2, 0, 0]

Before: [0, 3, 1, 1]
9 2 3 2
After:  [0, 3, 2, 1]

Before: [0, 3, 3, 1]
13 0 0 0
After:  [1, 3, 3, 1]

Before: [0, 1, 3, 3]
4 3 3 3
After:  [0, 1, 3, 3]

Before: [0, 2, 2, 0]
1 0 0 1
After:  [0, 0, 2, 0]

Before: [0, 1, 1, 3]
0 1 3 0
After:  [0, 1, 1, 3]

Before: [1, 3, 1, 3]
9 2 0 3
After:  [1, 3, 1, 2]

Before: [3, 1, 1, 1]
3 3 3 2
After:  [3, 1, 0, 1]

Before: [3, 1, 2, 3]
0 1 3 1
After:  [3, 0, 2, 3]

Before: [1, 3, 1, 1]
9 2 3 0
After:  [2, 3, 1, 1]

Before: [3, 0, 1, 1]
15 2 1 3
After:  [3, 0, 1, 1]

Before: [2, 0, 3, 2]
11 0 3 1
After:  [2, 1, 3, 2]

Before: [1, 2, 1, 3]
4 3 3 2
After:  [1, 2, 3, 3]

Before: [0, 3, 1, 3]
1 0 0 2
After:  [0, 3, 0, 3]

Before: [0, 1, 2, 3]
8 1 2 2
After:  [0, 1, 0, 3]

Before: [2, 3, 3, 1]
12 2 3 2
After:  [2, 3, 0, 1]

Before: [1, 1, 2, 2]
6 1 3 1
After:  [1, 0, 2, 2]

Before: [0, 2, 2, 3]
4 3 3 0
After:  [3, 2, 2, 3]

Before: [3, 1, 2, 1]
8 1 2 3
After:  [3, 1, 2, 0]

Before: [2, 0, 1, 2]
11 0 3 3
After:  [2, 0, 1, 1]

Before: [0, 0, 0, 2]
1 0 0 0
After:  [0, 0, 0, 2]

Before: [0, 3, 0, 1]
1 0 0 1
After:  [0, 0, 0, 1]

Before: [0, 1, 1, 2]
6 1 3 2
After:  [0, 1, 0, 2]

Before: [0, 0, 1, 2]
1 0 0 1
After:  [0, 0, 1, 2]

Before: [3, 0, 0, 3]
12 3 0 3
After:  [3, 0, 0, 1]

Before: [0, 1, 0, 0]
5 1 3 2
After:  [0, 1, 1, 0]

Before: [0, 0, 3, 3]
1 0 0 0
After:  [0, 0, 3, 3]

Before: [2, 1, 1, 2]
11 0 3 0
After:  [1, 1, 1, 2]

Before: [1, 1, 0, 2]
6 1 3 3
After:  [1, 1, 0, 0]

Before: [0, 1, 2, 2]
6 1 3 1
After:  [0, 0, 2, 2]

Before: [1, 2, 2, 0]
2 0 2 2
After:  [1, 2, 0, 0]

Before: [1, 1, 0, 2]
3 3 3 1
After:  [1, 0, 0, 2]

Before: [2, 0, 1, 1]
15 3 1 3
After:  [2, 0, 1, 1]

Before: [1, 2, 1, 0]
9 2 0 1
After:  [1, 2, 1, 0]

Before: [3, 1, 2, 2]
6 1 3 1
After:  [3, 0, 2, 2]

Before: [1, 3, 2, 3]
13 3 3 0
After:  [1, 3, 2, 3]

Before: [1, 3, 2, 2]
2 0 2 1
After:  [1, 0, 2, 2]

Before: [0, 1, 2, 2]
6 1 3 2
After:  [0, 1, 0, 2]

Before: [3, 0, 2, 2]
13 2 2 1
After:  [3, 1, 2, 2]

Before: [0, 0, 1, 1]
3 3 3 3
After:  [0, 0, 1, 0]

Before: [1, 1, 0, 1]
3 3 3 1
After:  [1, 0, 0, 1]

Before: [0, 2, 2, 1]
14 3 2 2
After:  [0, 2, 1, 1]

Before: [3, 1, 3, 1]
12 2 3 2
After:  [3, 1, 0, 1]

Before: [2, 0, 2, 2]
7 0 2 2
After:  [2, 0, 1, 2]

Before: [2, 1, 2, 2]
11 0 3 3
After:  [2, 1, 2, 1]

Before: [0, 1, 1, 0]
10 1 0 0
After:  [1, 1, 1, 0]

Before: [3, 3, 2, 2]
13 2 2 1
After:  [3, 1, 2, 2]

Before: [1, 0, 1, 1]
15 0 1 3
After:  [1, 0, 1, 1]

Before: [0, 0, 1, 2]
15 2 1 0
After:  [1, 0, 1, 2]

Before: [2, 1, 0, 2]
6 1 3 2
After:  [2, 1, 0, 2]

Before: [0, 1, 0, 3]
10 1 0 3
After:  [0, 1, 0, 1]

Before: [2, 0, 0, 2]
11 0 3 0
After:  [1, 0, 0, 2]

Before: [0, 1, 1, 2]
13 0 0 3
After:  [0, 1, 1, 1]

Before: [0, 2, 3, 0]
13 0 0 0
After:  [1, 2, 3, 0]

Before: [3, 3, 1, 3]
4 3 3 1
After:  [3, 3, 1, 3]

Before: [1, 1, 3, 2]
6 1 3 2
After:  [1, 1, 0, 2]

Before: [2, 0, 2, 1]
14 3 2 1
After:  [2, 1, 2, 1]

Before: [1, 1, 2, 2]
8 1 2 1
After:  [1, 0, 2, 2]

Before: [1, 1, 2, 0]
8 1 2 2
After:  [1, 1, 0, 0]

Before: [3, 0, 1, 3]
0 2 3 1
After:  [3, 0, 1, 3]

Before: [2, 0, 2, 2]
7 0 2 3
After:  [2, 0, 2, 1]

Before: [1, 3, 2, 0]
13 2 2 1
After:  [1, 1, 2, 0]

Before: [0, 1, 3, 3]
10 1 0 1
After:  [0, 1, 3, 3]

Before: [0, 1, 0, 3]
0 1 3 3
After:  [0, 1, 0, 0]

Before: [1, 3, 2, 3]
2 0 2 1
After:  [1, 0, 2, 3]

Before: [0, 1, 0, 2]
10 1 0 0
After:  [1, 1, 0, 2]

Before: [2, 0, 1, 3]
0 2 3 0
After:  [0, 0, 1, 3]

Before: [3, 0, 3, 1]
12 2 3 3
After:  [3, 0, 3, 0]

Before: [2, 1, 1, 0]
5 1 3 3
After:  [2, 1, 1, 1]

Before: [0, 1, 2, 0]
10 1 0 0
After:  [1, 1, 2, 0]

Before: [2, 0, 2, 1]
15 3 1 1
After:  [2, 1, 2, 1]

Before: [2, 3, 2, 1]
14 3 2 2
After:  [2, 3, 1, 1]

Before: [1, 1, 2, 1]
8 1 2 1
After:  [1, 0, 2, 1]

Before: [3, 0, 0, 3]
12 3 0 1
After:  [3, 1, 0, 3]

Before: [0, 2, 1, 1]
9 2 3 2
After:  [0, 2, 2, 1]

Before: [0, 1, 2, 0]
10 1 0 2
After:  [0, 1, 1, 0]

Before: [2, 0, 2, 1]
15 3 1 3
After:  [2, 0, 2, 1]

Before: [3, 1, 0, 2]
6 1 3 0
After:  [0, 1, 0, 2]

Before: [3, 0, 2, 1]
14 3 2 2
After:  [3, 0, 1, 1]

Before: [1, 0, 2, 0]
15 0 1 2
After:  [1, 0, 1, 0]

Before: [0, 2, 2, 1]
14 3 2 1
After:  [0, 1, 2, 1]

Before: [0, 0, 2, 3]
0 2 3 0
After:  [0, 0, 2, 3]

Before: [0, 2, 3, 1]
3 3 3 3
After:  [0, 2, 3, 0]

Before: [1, 0, 2, 2]
2 0 2 3
After:  [1, 0, 2, 0]

Before: [2, 3, 2, 3]
13 3 2 3
After:  [2, 3, 2, 0]

Before: [1, 3, 2, 1]
14 3 2 1
After:  [1, 1, 2, 1]

Before: [3, 1, 3, 3]
12 3 0 1
After:  [3, 1, 3, 3]

Before: [0, 0, 2, 0]
1 0 0 3
After:  [0, 0, 2, 0]

Before: [2, 0, 3, 3]
7 2 3 2
After:  [2, 0, 1, 3]

Before: [1, 3, 2, 3]
0 2 3 2
After:  [1, 3, 0, 3]

Before: [3, 0, 2, 1]
14 3 2 1
After:  [3, 1, 2, 1]

Before: [1, 0, 3, 1]
15 3 1 0
After:  [1, 0, 3, 1]

Before: [2, 3, 1, 1]
3 2 3 0
After:  [0, 3, 1, 1]

Before: [3, 1, 3, 1]
12 2 3 0
After:  [0, 1, 3, 1]

Before: [2, 1, 0, 1]
3 3 3 0
After:  [0, 1, 0, 1]

Before: [0, 1, 0, 3]
13 0 0 2
After:  [0, 1, 1, 3]

Before: [3, 1, 2, 2]
8 1 2 0
After:  [0, 1, 2, 2]

Before: [2, 3, 1, 2]
11 0 3 0
After:  [1, 3, 1, 2]

Before: [1, 0, 1, 3]
13 3 3 2
After:  [1, 0, 1, 3]

Before: [3, 2, 3, 3]
13 3 1 0
After:  [0, 2, 3, 3]

Before: [3, 0, 1, 1]
9 2 3 1
After:  [3, 2, 1, 1]

Before: [1, 0, 2, 2]
2 0 2 2
After:  [1, 0, 0, 2]

Before: [3, 0, 3, 3]
7 0 3 3
After:  [3, 0, 3, 1]

Before: [0, 1, 0, 2]
6 1 3 3
After:  [0, 1, 0, 0]

Before: [3, 1, 2, 3]
8 1 2 1
After:  [3, 0, 2, 3]

Before: [1, 1, 2, 3]
2 0 2 3
After:  [1, 1, 2, 0]

Before: [0, 3, 0, 2]
1 0 0 3
After:  [0, 3, 0, 0]

Before: [2, 2, 2, 2]
12 2 1 3
After:  [2, 2, 2, 1]

Before: [2, 1, 3, 2]
11 0 3 2
After:  [2, 1, 1, 2]

Before: [0, 1, 2, 2]
6 1 3 3
After:  [0, 1, 2, 0]

Before: [2, 1, 3, 2]
11 0 3 0
After:  [1, 1, 3, 2]

Before: [3, 1, 3, 2]
6 1 3 3
After:  [3, 1, 3, 0]

Before: [2, 3, 2, 0]
7 0 2 2
After:  [2, 3, 1, 0]

Before: [3, 3, 2, 1]
14 3 2 1
After:  [3, 1, 2, 1]

Before: [1, 2, 2, 1]
14 3 2 1
After:  [1, 1, 2, 1]

Before: [0, 1, 0, 2]
6 1 3 1
After:  [0, 0, 0, 2]

Before: [2, 1, 2, 0]
5 1 3 2
After:  [2, 1, 1, 0]

Before: [2, 3, 3, 3]
7 2 3 1
After:  [2, 1, 3, 3]

Before: [3, 1, 0, 3]
0 1 3 0
After:  [0, 1, 0, 3]

Before: [0, 3, 2, 3]
4 2 2 1
After:  [0, 2, 2, 3]

Before: [2, 0, 0, 2]
11 0 3 1
After:  [2, 1, 0, 2]

Before: [0, 2, 2, 3]
13 0 0 2
After:  [0, 2, 1, 3]

Before: [1, 1, 1, 0]
9 2 0 1
After:  [1, 2, 1, 0]

Before: [1, 1, 3, 3]
0 1 3 0
After:  [0, 1, 3, 3]

Before: [2, 2, 2, 3]
0 2 3 0
After:  [0, 2, 2, 3]

Before: [3, 1, 2, 3]
0 2 3 0
After:  [0, 1, 2, 3]

Before: [2, 2, 2, 2]
7 0 2 3
After:  [2, 2, 2, 1]

Before: [1, 1, 2, 1]
14 3 2 2
After:  [1, 1, 1, 1]

Before: [0, 0, 2, 0]
4 2 2 3
After:  [0, 0, 2, 2]

Before: [3, 3, 0, 3]
13 3 3 3
After:  [3, 3, 0, 1]

Before: [0, 2, 3, 1]
13 0 0 2
After:  [0, 2, 1, 1]

Before: [2, 3, 2, 0]
7 0 2 3
After:  [2, 3, 2, 1]

Before: [0, 1, 0, 2]
1 0 0 3
After:  [0, 1, 0, 0]

Before: [2, 2, 0, 2]
3 3 3 1
After:  [2, 0, 0, 2]

Before: [1, 3, 2, 3]
2 0 2 2
After:  [1, 3, 0, 3]

Before: [1, 1, 3, 3]
13 3 3 3
After:  [1, 1, 3, 1]

Before: [0, 0, 1, 1]
15 3 1 3
After:  [0, 0, 1, 1]

Before: [1, 1, 3, 0]
5 1 3 1
After:  [1, 1, 3, 0]

Before: [2, 0, 3, 2]
11 0 3 2
After:  [2, 0, 1, 2]

Before: [3, 0, 3, 3]
7 2 3 0
After:  [1, 0, 3, 3]

Before: [0, 1, 2, 1]
10 1 0 3
After:  [0, 1, 2, 1]

Before: [2, 0, 0, 2]
11 0 3 3
After:  [2, 0, 0, 1]

Before: [1, 2, 2, 3]
2 0 2 1
After:  [1, 0, 2, 3]

Before: [1, 2, 1, 2]
9 2 0 1
After:  [1, 2, 1, 2]

Before: [0, 2, 2, 1]
1 0 0 0
After:  [0, 2, 2, 1]

Before: [0, 1, 1, 0]
5 1 3 2
After:  [0, 1, 1, 0]

Before: [2, 0, 3, 3]
13 3 3 0
After:  [1, 0, 3, 3]

Before: [1, 1, 2, 0]
5 1 3 1
After:  [1, 1, 2, 0]

Before: [3, 1, 2, 1]
14 3 2 1
After:  [3, 1, 2, 1]

Before: [0, 1, 0, 2]
10 1 0 3
After:  [0, 1, 0, 1]

Before: [1, 1, 3, 0]
5 1 3 2
After:  [1, 1, 1, 0]

Before: [2, 1, 2, 3]
8 1 2 2
After:  [2, 1, 0, 3]

Before: [3, 3, 3, 3]
12 3 0 1
After:  [3, 1, 3, 3]

Before: [1, 0, 1, 0]
15 0 1 3
After:  [1, 0, 1, 1]

Before: [2, 0, 1, 1]
15 3 1 0
After:  [1, 0, 1, 1]

Before: [1, 1, 0, 0]
5 1 3 1
After:  [1, 1, 0, 0]

Before: [0, 0, 2, 1]
14 3 2 1
After:  [0, 1, 2, 1]

Before: [0, 1, 0, 0]
5 1 3 1
After:  [0, 1, 0, 0]

Before: [2, 2, 2, 3]
0 1 3 3
After:  [2, 2, 2, 0]

Before: [1, 0, 2, 1]
14 3 2 0
After:  [1, 0, 2, 1]

Before: [1, 0, 1, 3]
9 2 0 0
After:  [2, 0, 1, 3]

Before: [3, 0, 1, 0]
15 2 1 3
After:  [3, 0, 1, 1]

Before: [0, 3, 2, 1]
14 3 2 3
After:  [0, 3, 2, 1]

Before: [0, 3, 0, 0]
13 0 0 2
After:  [0, 3, 1, 0]

Before: [1, 2, 1, 1]
9 2 0 0
After:  [2, 2, 1, 1]

Before: [1, 1, 0, 3]
0 1 3 1
After:  [1, 0, 0, 3]

Before: [0, 0, 1, 3]
15 2 1 1
After:  [0, 1, 1, 3]

Before: [3, 1, 1, 3]
0 1 3 0
After:  [0, 1, 1, 3]

Before: [0, 1, 3, 0]
13 0 0 0
After:  [1, 1, 3, 0]

Before: [1, 1, 3, 3]
7 2 3 1
After:  [1, 1, 3, 3]

Before: [1, 0, 2, 3]
2 0 2 3
After:  [1, 0, 2, 0]

Before: [2, 0, 2, 1]
15 3 1 2
After:  [2, 0, 1, 1]

Before: [2, 0, 2, 3]
4 3 3 0
After:  [3, 0, 2, 3]

Before: [0, 1, 0, 1]
13 0 0 1
After:  [0, 1, 0, 1]

Before: [0, 1, 2, 2]
10 1 0 3
After:  [0, 1, 2, 1]

Before: [1, 2, 2, 2]
12 2 1 1
After:  [1, 1, 2, 2]

Before: [0, 2, 2, 3]
0 2 3 2
After:  [0, 2, 0, 3]

Before: [2, 1, 2, 2]
8 1 2 1
After:  [2, 0, 2, 2]

Before: [0, 1, 2, 0]
8 1 2 0
After:  [0, 1, 2, 0]

Before: [3, 3, 2, 0]
4 2 2 2
After:  [3, 3, 2, 0]

Before: [2, 0, 1, 2]
11 0 3 1
After:  [2, 1, 1, 2]

Before: [0, 1, 2, 3]
10 1 0 2
After:  [0, 1, 1, 3]

Before: [3, 3, 1, 1]
9 2 3 2
After:  [3, 3, 2, 1]

Before: [2, 0, 1, 2]
11 0 3 2
After:  [2, 0, 1, 2]

Before: [0, 1, 0, 0]
10 1 0 0
After:  [1, 1, 0, 0]

Before: [0, 1, 3, 1]
3 3 3 0
After:  [0, 1, 3, 1]

Before: [1, 1, 3, 3]
7 2 3 2
After:  [1, 1, 1, 3]

Before: [2, 1, 2, 2]
6 1 3 2
After:  [2, 1, 0, 2]

Before: [1, 0, 2, 1]
15 3 1 0
After:  [1, 0, 2, 1]

Before: [3, 1, 1, 0]
5 1 3 2
After:  [3, 1, 1, 0]

Before: [3, 0, 3, 3]
7 2 3 3
After:  [3, 0, 3, 1]

Before: [3, 0, 3, 3]
12 3 2 2
After:  [3, 0, 1, 3]

Before: [1, 1, 2, 1]
14 3 2 3
After:  [1, 1, 2, 1]

Before: [3, 1, 1, 1]
3 3 3 0
After:  [0, 1, 1, 1]

Before: [0, 0, 3, 3]
12 3 2 3
After:  [0, 0, 3, 1]

Before: [2, 3, 2, 1]
14 3 2 1
After:  [2, 1, 2, 1]

Before: [1, 2, 2, 0]
2 0 2 0
After:  [0, 2, 2, 0]

Before: [2, 1, 3, 3]
4 3 3 0
After:  [3, 1, 3, 3]

Before: [0, 1, 2, 0]
1 0 0 2
After:  [0, 1, 0, 0]

Before: [0, 2, 2, 2]
3 3 3 1
After:  [0, 0, 2, 2]

Before: [2, 2, 2, 3]
12 2 1 3
After:  [2, 2, 2, 1]

Before: [1, 1, 0, 0]
5 1 3 2
After:  [1, 1, 1, 0]

Before: [2, 1, 1, 2]
6 1 3 3
After:  [2, 1, 1, 0]

Before: [1, 3, 2, 3]
2 0 2 3
After:  [1, 3, 2, 0]

Before: [3, 0, 3, 1]
15 3 1 3
After:  [3, 0, 3, 1]

Before: [0, 1, 3, 2]
1 0 0 1
After:  [0, 0, 3, 2]

Before: [2, 0, 2, 0]
12 2 0 0
After:  [1, 0, 2, 0]

Before: [3, 3, 1, 3]
4 3 3 2
After:  [3, 3, 3, 3]

Before: [3, 0, 2, 3]
13 2 2 0
After:  [1, 0, 2, 3]

Before: [3, 2, 2, 3]
0 1 3 3
After:  [3, 2, 2, 0]

Before: [3, 0, 2, 0]
4 2 2 3
After:  [3, 0, 2, 2]

Before: [1, 0, 2, 1]
15 3 1 3
After:  [1, 0, 2, 1]

Before: [3, 3, 2, 1]
14 3 2 3
After:  [3, 3, 2, 1]

Before: [1, 3, 1, 2]
9 2 0 3
After:  [1, 3, 1, 2]

Before: [2, 1, 2, 3]
8 1 2 0
After:  [0, 1, 2, 3]

Before: [2, 2, 2, 2]
7 0 2 1
After:  [2, 1, 2, 2]

Before: [1, 1, 0, 2]
6 1 3 0
After:  [0, 1, 0, 2]

Before: [3, 1, 1, 2]
6 1 3 3
After:  [3, 1, 1, 0]

Before: [0, 1, 3, 1]
10 1 0 3
After:  [0, 1, 3, 1]

Before: [0, 2, 2, 0]
12 2 1 2
After:  [0, 2, 1, 0]

Before: [1, 2, 1, 1]
3 3 3 3
After:  [1, 2, 1, 0]

Before: [2, 3, 2, 3]
12 2 0 1
After:  [2, 1, 2, 3]

Before: [0, 1, 2, 2]
8 1 2 0
After:  [0, 1, 2, 2]

Before: [0, 1, 1, 2]
6 1 3 0
After:  [0, 1, 1, 2]

Before: [2, 3, 3, 2]
11 0 3 1
After:  [2, 1, 3, 2]

Before: [2, 0, 0, 1]
3 3 3 2
After:  [2, 0, 0, 1]

Before: [2, 0, 3, 2]
11 0 3 0
After:  [1, 0, 3, 2]

Before: [0, 1, 1, 1]
10 1 0 0
After:  [1, 1, 1, 1]

Before: [1, 3, 2, 3]
0 2 3 1
After:  [1, 0, 2, 3]

Before: [3, 1, 1, 2]
6 1 3 0
After:  [0, 1, 1, 2]

Before: [0, 1, 0, 0]
10 1 0 3
After:  [0, 1, 0, 1]

Before: [1, 1, 1, 0]
5 1 3 2
After:  [1, 1, 1, 0]

Before: [2, 1, 2, 2]
8 1 2 2
After:  [2, 1, 0, 2]

Before: [0, 1, 1, 1]
9 2 3 2
After:  [0, 1, 2, 1]

Before: [2, 1, 2, 2]
6 1 3 3
After:  [2, 1, 2, 0]

Before: [0, 1, 2, 1]
14 3 2 0
After:  [1, 1, 2, 1]

Before: [1, 1, 2, 1]
2 0 2 0
After:  [0, 1, 2, 1]

Before: [1, 1, 2, 0]
8 1 2 3
After:  [1, 1, 2, 0]

Before: [1, 1, 2, 1]
14 3 2 1
After:  [1, 1, 2, 1]

Before: [1, 2, 2, 1]
4 2 2 2
After:  [1, 2, 2, 1]

Before: [2, 1, 0, 2]
11 0 3 1
After:  [2, 1, 0, 2]

Before: [3, 2, 2, 0]
4 2 2 2
After:  [3, 2, 2, 0]

Before: [0, 1, 0, 1]
10 1 0 0
After:  [1, 1, 0, 1]

Before: [2, 2, 0, 2]
3 3 3 3
After:  [2, 2, 0, 0]

Before: [2, 2, 2, 2]
11 0 3 2
After:  [2, 2, 1, 2]

Before: [2, 3, 2, 1]
14 3 2 3
After:  [2, 3, 2, 1]

Before: [1, 1, 3, 2]
6 1 3 1
After:  [1, 0, 3, 2]

Before: [0, 1, 2, 3]
10 1 0 3
After:  [0, 1, 2, 1]

Before: [3, 0, 2, 2]
4 2 2 2
After:  [3, 0, 2, 2]

Before: [0, 1, 2, 1]
14 3 2 1
After:  [0, 1, 2, 1]

Before: [3, 1, 3, 2]
6 1 3 1
After:  [3, 0, 3, 2]

Before: [1, 1, 2, 0]
2 0 2 1
After:  [1, 0, 2, 0]

Before: [1, 1, 2, 1]
2 0 2 2
After:  [1, 1, 0, 1]

Before: [1, 3, 2, 1]
13 2 2 3
After:  [1, 3, 2, 1]

Before: [3, 3, 2, 0]
13 2 2 2
After:  [3, 3, 1, 0]

Before: [2, 2, 1, 3]
0 1 3 3
After:  [2, 2, 1, 0]

Before: [1, 0, 0, 2]
15 0 1 0
After:  [1, 0, 0, 2]

Before: [3, 2, 1, 1]
3 3 3 3
After:  [3, 2, 1, 0]

Before: [3, 2, 1, 3]
0 1 3 1
After:  [3, 0, 1, 3]

Before: [3, 3, 2, 3]
7 0 3 0
After:  [1, 3, 2, 3]

Before: [0, 2, 0, 2]
1 0 0 1
After:  [0, 0, 0, 2]

Before: [2, 0, 2, 1]
7 0 2 1
After:  [2, 1, 2, 1]

Before: [3, 2, 2, 1]
14 3 2 2
After:  [3, 2, 1, 1]

Before: [1, 1, 2, 3]
8 1 2 3
After:  [1, 1, 2, 0]

Before: [1, 1, 0, 2]
6 1 3 2
After:  [1, 1, 0, 2]

Before: [2, 1, 3, 2]
6 1 3 1
After:  [2, 0, 3, 2]

Before: [1, 0, 3, 3]
4 3 3 1
After:  [1, 3, 3, 3]

Before: [0, 2, 3, 3]
0 1 3 0
After:  [0, 2, 3, 3]

Before: [2, 1, 1, 3]
0 2 3 1
After:  [2, 0, 1, 3]

Before: [1, 0, 0, 1]
15 3 1 2
After:  [1, 0, 1, 1]

Before: [0, 3, 3, 2]
1 0 0 2
After:  [0, 3, 0, 2]

Before: [2, 1, 2, 3]
7 0 2 1
After:  [2, 1, 2, 3]

Before: [0, 0, 3, 2]
13 0 0 3
After:  [0, 0, 3, 1]

Before: [0, 1, 2, 0]
5 1 3 2
After:  [0, 1, 1, 0]

Before: [0, 2, 2, 1]
12 2 1 0
After:  [1, 2, 2, 1]

Before: [0, 1, 2, 1]
8 1 2 2
After:  [0, 1, 0, 1]

Before: [0, 1, 1, 0]
10 1 0 3
After:  [0, 1, 1, 1]

Before: [0, 3, 1, 0]
1 0 0 2
After:  [0, 3, 0, 0]

Before: [2, 1, 1, 2]
11 0 3 1
After:  [2, 1, 1, 2]

Before: [3, 3, 2, 1]
14 3 2 2
After:  [3, 3, 1, 1]

Before: [3, 1, 2, 2]
4 2 2 3
After:  [3, 1, 2, 2]

Before: [1, 1, 2, 3]
0 2 3 2
After:  [1, 1, 0, 3]

Before: [2, 2, 2, 3]
0 1 3 1
After:  [2, 0, 2, 3]

Before: [3, 3, 2, 3]
4 3 3 2
After:  [3, 3, 3, 3]

Before: [2, 1, 2, 0]
7 0 2 3
After:  [2, 1, 2, 1]

Before: [0, 2, 1, 1]
9 2 3 1
After:  [0, 2, 1, 1]

Before: [2, 1, 0, 3]
0 1 3 2
After:  [2, 1, 0, 3]

Before: [0, 1, 0, 3]
13 3 3 0
After:  [1, 1, 0, 3]

Before: [0, 0, 3, 1]
3 3 3 2
After:  [0, 0, 0, 1]

Before: [1, 0, 0, 0]
15 0 1 0
After:  [1, 0, 0, 0]

Before: [0, 0, 1, 3]
0 2 3 1
After:  [0, 0, 1, 3]

Before: [1, 1, 1, 3]
9 2 0 1
After:  [1, 2, 1, 3]

Before: [3, 0, 1, 3]
0 2 3 2
After:  [3, 0, 0, 3]

Before: [3, 1, 3, 2]
6 1 3 0
After:  [0, 1, 3, 2]

Before: [3, 3, 1, 3]
12 3 0 1
After:  [3, 1, 1, 3]

Before: [3, 1, 1, 3]
0 2 3 0
After:  [0, 1, 1, 3]

Before: [2, 1, 1, 2]
6 1 3 2
After:  [2, 1, 0, 2]

Before: [0, 1, 0, 2]
10 1 0 1
After:  [0, 1, 0, 2]

Before: [0, 1, 1, 0]
10 1 0 1
After:  [0, 1, 1, 0]

Before: [3, 2, 1, 3]
13 3 1 3
After:  [3, 2, 1, 0]

Before: [2, 1, 1, 0]
5 1 3 0
After:  [1, 1, 1, 0]

Before: [0, 1, 3, 1]
10 1 0 1
After:  [0, 1, 3, 1]

Before: [0, 0, 3, 1]
12 2 3 2
After:  [0, 0, 0, 1]

Before: [1, 1, 2, 3]
0 2 3 0
After:  [0, 1, 2, 3]

Before: [1, 1, 2, 3]
0 2 3 3
After:  [1, 1, 2, 0]

Before: [1, 3, 2, 1]
14 3 2 0
After:  [1, 3, 2, 1]

Before: [0, 1, 2, 3]
10 1 0 0
After:  [1, 1, 2, 3]

Before: [2, 3, 3, 1]
12 2 3 3
After:  [2, 3, 3, 0]

Before: [2, 0, 2, 2]
11 0 3 2
After:  [2, 0, 1, 2]

Before: [3, 1, 0, 2]
3 3 3 2
After:  [3, 1, 0, 2]

Before: [0, 1, 2, 0]
1 0 0 3
After:  [0, 1, 2, 0]

Before: [0, 3, 2, 1]
14 3 2 2
After:  [0, 3, 1, 1]

Before: [3, 2, 3, 3]
12 3 2 1
After:  [3, 1, 3, 3]

Before: [3, 2, 2, 1]
3 3 3 2
After:  [3, 2, 0, 1]

Before: [2, 0, 3, 2]
3 3 3 2
After:  [2, 0, 0, 2]

Before: [1, 1, 2, 1]
8 1 2 2
After:  [1, 1, 0, 1]

Before: [3, 1, 2, 0]
5 1 3 1
After:  [3, 1, 2, 0]

Before: [1, 1, 1, 1]
9 2 3 0
After:  [2, 1, 1, 1]

Before: [2, 0, 2, 0]
13 2 2 1
After:  [2, 1, 2, 0]

Before: [0, 0, 2, 2]
13 2 2 3
After:  [0, 0, 2, 1]

Before: [2, 1, 2, 1]
8 1 2 3
After:  [2, 1, 2, 0]

Before: [2, 1, 0, 2]
3 3 3 3
After:  [2, 1, 0, 0]

Before: [0, 2, 3, 0]
1 0 0 1
After:  [0, 0, 3, 0]

Before: [3, 2, 1, 3]
12 3 0 1
After:  [3, 1, 1, 3]

Before: [0, 1, 3, 2]
1 0 0 2
After:  [0, 1, 0, 2]

Before: [2, 2, 2, 3]
0 1 3 2
After:  [2, 2, 0, 3]

Before: [3, 0, 1, 0]
15 2 1 2
After:  [3, 0, 1, 0]

Before: [1, 0, 3, 1]
12 2 3 2
After:  [1, 0, 0, 1]

Before: [0, 1, 1, 2]
10 1 0 1
After:  [0, 1, 1, 2]

Before: [3, 1, 1, 3]
13 3 2 2
After:  [3, 1, 0, 3]

Before: [1, 0, 2, 0]
2 0 2 0
After:  [0, 0, 2, 0]

Before: [1, 2, 0, 3]
0 1 3 1
After:  [1, 0, 0, 3]

Before: [0, 3, 2, 3]
4 2 2 2
After:  [0, 3, 2, 3]

Before: [2, 2, 1, 2]
11 0 3 3
After:  [2, 2, 1, 1]

Before: [1, 0, 1, 2]
3 3 3 0
After:  [0, 0, 1, 2]

Before: [0, 1, 2, 0]
8 1 2 3
After:  [0, 1, 2, 0]

Before: [2, 0, 3, 3]
12 3 2 1
After:  [2, 1, 3, 3]

Before: [2, 1, 3, 2]
11 0 3 1
After:  [2, 1, 3, 2]

Before: [1, 2, 1, 2]
9 2 0 0
After:  [2, 2, 1, 2]

Before: [2, 2, 2, 0]
12 2 0 1
After:  [2, 1, 2, 0]

Before: [2, 3, 0, 2]
3 3 3 3
After:  [2, 3, 0, 0]

Before: [1, 1, 3, 1]
12 2 3 3
After:  [1, 1, 3, 0]

Before: [1, 0, 3, 1]
15 0 1 0
After:  [1, 0, 3, 1]

Before: [1, 0, 1, 1]
9 2 0 1
After:  [1, 2, 1, 1]

Before: [0, 1, 3, 2]
10 1 0 0
After:  [1, 1, 3, 2]

Before: [0, 1, 1, 2]
10 1 0 3
After:  [0, 1, 1, 1]

Before: [3, 1, 3, 1]
3 3 3 2
After:  [3, 1, 0, 1]

Before: [0, 0, 3, 3]
12 3 2 0
After:  [1, 0, 3, 3]

Before: [3, 0, 1, 1]
9 2 3 3
After:  [3, 0, 1, 2]

Before: [2, 2, 0, 3]
13 3 3 3
After:  [2, 2, 0, 1]

Before: [0, 3, 1, 3]
13 3 2 2
After:  [0, 3, 0, 3]

Before: [0, 1, 0, 2]
6 1 3 0
After:  [0, 1, 0, 2]

Before: [2, 2, 2, 1]
14 3 2 0
After:  [1, 2, 2, 1]

Before: [3, 1, 1, 0]
5 1 3 1
After:  [3, 1, 1, 0]

Before: [0, 1, 3, 3]
0 1 3 3
After:  [0, 1, 3, 0]

Before: [0, 0, 0, 1]
15 3 1 1
After:  [0, 1, 0, 1]

Before: [3, 1, 2, 3]
7 0 3 1
After:  [3, 1, 2, 3]

Before: [1, 1, 2, 1]
2 0 2 3
After:  [1, 1, 2, 0]

Before: [0, 0, 2, 1]
13 0 0 2
After:  [0, 0, 1, 1]

Before: [0, 0, 1, 3]
13 3 3 0
After:  [1, 0, 1, 3]

Before: [1, 0, 1, 2]
9 2 0 3
After:  [1, 0, 1, 2]

Before: [2, 0, 3, 3]
7 2 3 3
After:  [2, 0, 3, 1]

Before: [0, 3, 1, 3]
0 2 3 0
After:  [0, 3, 1, 3]

Before: [2, 1, 1, 1]
9 2 3 3
After:  [2, 1, 1, 2]

Before: [0, 0, 1, 0]
15 2 1 0
After:  [1, 0, 1, 0]

Before: [1, 0, 2, 1]
2 0 2 0
After:  [0, 0, 2, 1]

Before: [0, 0, 1, 3]
4 3 3 3
After:  [0, 0, 1, 3]

Before: [0, 1, 1, 2]
10 1 0 0
After:  [1, 1, 1, 2]

Before: [2, 2, 2, 2]
11 0 3 3
After:  [2, 2, 2, 1]

Before: [2, 3, 3, 1]
3 3 3 3
After:  [2, 3, 3, 0]

Before: [1, 1, 2, 3]
2 0 2 0
After:  [0, 1, 2, 3]

Before: [3, 1, 2, 1]
8 1 2 1
After:  [3, 0, 2, 1]

Before: [2, 2, 0, 2]
11 0 3 3
After:  [2, 2, 0, 1]

Before: [2, 2, 3, 1]
12 2 3 2
After:  [2, 2, 0, 1]

Before: [2, 2, 2, 3]
13 2 2 3
After:  [2, 2, 2, 1]

Before: [2, 0, 2, 1]
14 3 2 3
After:  [2, 0, 2, 1]

Before: [0, 0, 2, 3]
1 0 0 1
After:  [0, 0, 2, 3]

Before: [0, 1, 2, 0]
5 1 3 3
After:  [0, 1, 2, 1]

Before: [2, 2, 2, 2]
12 2 1 1
After:  [2, 1, 2, 2]

Before: [3, 2, 0, 3]
7 0 3 3
After:  [3, 2, 0, 1]

Before: [0, 1, 1, 3]
4 3 3 0
After:  [3, 1, 1, 3]

Before: [1, 1, 1, 2]
6 1 3 1
After:  [1, 0, 1, 2]

Before: [1, 1, 1, 2]
6 1 3 3
After:  [1, 1, 1, 0]

Before: [1, 0, 3, 1]
12 2 3 1
After:  [1, 0, 3, 1]

Before: [1, 0, 2, 1]
2 0 2 2
After:  [1, 0, 0, 1]

Before: [1, 0, 1, 0]
15 2 1 2
After:  [1, 0, 1, 0]

Before: [1, 3, 3, 3]
4 3 3 1
After:  [1, 3, 3, 3]

Before: [1, 0, 1, 1]
9 2 3 2
After:  [1, 0, 2, 1]

Before: [0, 2, 2, 3]
0 2 3 1
After:  [0, 0, 2, 3]

Before: [3, 2, 2, 3]
0 2 3 0
After:  [0, 2, 2, 3]

Before: [0, 1, 2, 2]
8 1 2 3
After:  [0, 1, 2, 0]

Before: [3, 1, 0, 0]
5 1 3 2
After:  [3, 1, 1, 0]

Before: [2, 0, 2, 2]
7 0 2 0
After:  [1, 0, 2, 2]

Before: [1, 2, 1, 3]
0 2 3 2
After:  [1, 2, 0, 3]

Before: [0, 0, 2, 2]
4 2 2 1
After:  [0, 2, 2, 2]

Before: [1, 0, 1, 1]
15 0 1 0
After:  [1, 0, 1, 1]

Before: [1, 0, 2, 0]
2 0 2 1
After:  [1, 0, 2, 0]

Before: [1, 0, 0, 1]
15 0 1 1
After:  [1, 1, 0, 1]

Before: [0, 1, 3, 0]
10 1 0 1
After:  [0, 1, 3, 0]

Before: [2, 3, 0, 2]
11 0 3 0
After:  [1, 3, 0, 2]

Before: [1, 0, 2, 2]
15 0 1 3
After:  [1, 0, 2, 1]

Before: [3, 0, 1, 1]
15 3 1 2
After:  [3, 0, 1, 1]

Before: [0, 0, 2, 1]
3 3 3 1
After:  [0, 0, 2, 1]

Before: [1, 3, 2, 0]
2 0 2 3
After:  [1, 3, 2, 0]

Before: [0, 1, 2, 0]
10 1 0 3
After:  [0, 1, 2, 1]

Before: [3, 2, 2, 3]
13 3 1 1
After:  [3, 0, 2, 3]

Before: [3, 0, 3, 2]
3 3 3 1
After:  [3, 0, 3, 2]

Before: [0, 0, 2, 3]
13 2 2 1
After:  [0, 1, 2, 3]

Before: [1, 1, 1, 2]
6 1 3 2
After:  [1, 1, 0, 2]

Before: [2, 3, 2, 1]
12 2 0 2
After:  [2, 3, 1, 1]

Before: [0, 0, 0, 1]
15 3 1 3
After:  [0, 0, 0, 1]

Before: [2, 2, 2, 1]
14 3 2 2
After:  [2, 2, 1, 1]

Before: [0, 1, 2, 3]
13 3 2 0
After:  [0, 1, 2, 3]

Before: [2, 1, 0, 1]
3 3 3 2
After:  [2, 1, 0, 1]

Before: [0, 1, 2, 0]
5 1 3 0
After:  [1, 1, 2, 0]

Before: [3, 3, 1, 3]
0 2 3 3
After:  [3, 3, 1, 0]

Before: [1, 2, 3, 3]
0 1 3 2
After:  [1, 2, 0, 3]

Before: [0, 1, 2, 2]
10 1 0 1
After:  [0, 1, 2, 2]

Before: [2, 1, 1, 3]
13 3 1 0
After:  [0, 1, 1, 3]

Before: [1, 0, 3, 3]
4 3 3 0
After:  [3, 0, 3, 3]

Before: [2, 3, 1, 1]
9 2 3 3
After:  [2, 3, 1, 2]

Before: [2, 2, 2, 0]
7 0 2 2
After:  [2, 2, 1, 0]

Before: [0, 0, 3, 1]
15 3 1 0
After:  [1, 0, 3, 1]

Before: [0, 2, 2, 1]
14 3 2 0
After:  [1, 2, 2, 1]

Before: [1, 1, 3, 2]
6 1 3 3
After:  [1, 1, 3, 0]

Before: [2, 2, 1, 1]
9 2 3 2
After:  [2, 2, 2, 1]

Before: [1, 0, 0, 1]
15 0 1 3
After:  [1, 0, 0, 1]

Before: [1, 1, 3, 1]
3 3 3 0
After:  [0, 1, 3, 1]

Before: [3, 2, 2, 3]
0 1 3 0
After:  [0, 2, 2, 3]

Before: [3, 2, 3, 3]
12 3 0 2
After:  [3, 2, 1, 3]

Before: [1, 2, 2, 1]
2 0 2 2
After:  [1, 2, 0, 1]

Before: [3, 1, 1, 1]
9 2 3 0
After:  [2, 1, 1, 1]

Before: [1, 2, 1, 2]
3 3 3 1
After:  [1, 0, 1, 2]

Before: [3, 0, 2, 2]
13 2 2 0
After:  [1, 0, 2, 2]

Before: [2, 3, 2, 2]
3 3 3 2
After:  [2, 3, 0, 2]

Before: [1, 0, 2, 3]
2 0 2 1
After:  [1, 0, 2, 3]

Before: [2, 3, 2, 2]
7 0 2 0
After:  [1, 3, 2, 2]

Before: [2, 3, 0, 2]
11 0 3 1
After:  [2, 1, 0, 2]

Before: [1, 1, 2, 0]
4 2 2 1
After:  [1, 2, 2, 0]

Before: [2, 1, 0, 2]
11 0 3 0
After:  [1, 1, 0, 2]

Before: [0, 1, 2, 0]
1 0 0 1
After:  [0, 0, 2, 0]

Before: [2, 1, 1, 0]
5 1 3 1
After:  [2, 1, 1, 0]

Before: [0, 1, 2, 2]
13 2 2 2
After:  [0, 1, 1, 2]

Before: [0, 3, 2, 1]
14 3 2 1
After:  [0, 1, 2, 1]

Before: [1, 1, 1, 0]
5 1 3 3
After:  [1, 1, 1, 1]

Before: [1, 0, 0, 0]
15 0 1 1
After:  [1, 1, 0, 0]

Before: [0, 1, 0, 3]
1 0 0 3
After:  [0, 1, 0, 0]

Before: [2, 1, 2, 0]
5 1 3 1
After:  [2, 1, 2, 0]

Before: [3, 1, 0, 3]
7 0 3 2
After:  [3, 1, 1, 3]

Before: [1, 3, 1, 1]
9 2 0 0
After:  [2, 3, 1, 1]

Before: [3, 1, 1, 0]
5 1 3 3
After:  [3, 1, 1, 1]

Before: [2, 1, 3, 0]
5 1 3 0
After:  [1, 1, 3, 0]

Before: [0, 2, 0, 3]
0 1 3 1
After:  [0, 0, 0, 3]

Before: [2, 3, 2, 2]
11 0 3 2
After:  [2, 3, 1, 2]

Before: [3, 1, 2, 1]
14 3 2 3
After:  [3, 1, 2, 1]

Before: [2, 2, 2, 1]
14 3 2 1
After:  [2, 1, 2, 1]

Before: [1, 3, 2, 0]
2 0 2 0
After:  [0, 3, 2, 0]

Before: [1, 2, 2, 1]
2 0 2 0
After:  [0, 2, 2, 1]

Before: [3, 1, 2, 0]
8 1 2 1
After:  [3, 0, 2, 0]

Before: [0, 2, 0, 3]
13 0 0 1
After:  [0, 1, 0, 3]

Before: [1, 2, 1, 0]
9 2 0 2
After:  [1, 2, 2, 0]

Before: [0, 0, 0, 0]
13 0 0 3
After:  [0, 0, 0, 1]

Before: [0, 3, 2, 0]
1 0 0 1
After:  [0, 0, 2, 0]

Before: [1, 0, 2, 1]
14 3 2 2
After:  [1, 0, 1, 1]

Before: [1, 1, 2, 2]
2 0 2 0
After:  [0, 1, 2, 2]

Before: [0, 1, 0, 1]
10 1 0 3
After:  [0, 1, 0, 1]

Before: [2, 2, 0, 2]
11 0 3 1
After:  [2, 1, 0, 2]

Before: [2, 2, 3, 3]
7 2 3 1
After:  [2, 1, 3, 3]

Before: [0, 1, 3, 0]
10 1 0 3
After:  [0, 1, 3, 1]

Before: [2, 1, 0, 2]
6 1 3 0
After:  [0, 1, 0, 2]

Before: [0, 2, 2, 1]
14 3 2 3
After:  [0, 2, 2, 1]

Before: [3, 2, 2, 1]
14 3 2 1
After:  [3, 1, 2, 1]

Before: [2, 3, 3, 3]
7 2 3 2
After:  [2, 3, 1, 3]

Before: [1, 0, 1, 1]
15 2 1 2
After:  [1, 0, 1, 1]

Before: [2, 1, 2, 2]
7 0 2 0
After:  [1, 1, 2, 2]

Before: [0, 2, 3, 3]
7 2 3 2
After:  [0, 2, 1, 3]

Before: [1, 2, 0, 3]
0 1 3 2
After:  [1, 2, 0, 3]

Before: [1, 0, 2, 0]
15 0 1 0
After:  [1, 0, 2, 0]

Before: [0, 1, 0, 0]
10 1 0 1
After:  [0, 1, 0, 0]

Before: [2, 1, 2, 1]
7 0 2 0
After:  [1, 1, 2, 1]

Before: [2, 1, 2, 1]
14 3 2 1
After:  [2, 1, 2, 1]

Before: [0, 1, 2, 3]
10 1 0 1
After:  [0, 1, 2, 3]

Before: [2, 1, 2, 2]
6 1 3 1
After:  [2, 0, 2, 2]

Before: [1, 1, 3, 2]
3 3 3 1
After:  [1, 0, 3, 2]

Before: [3, 1, 0, 0]
5 1 3 3
After:  [3, 1, 0, 1]

Before: [0, 1, 2, 0]
1 0 0 0
After:  [0, 1, 2, 0]

Before: [1, 0, 2, 1]
2 0 2 3
After:  [1, 0, 2, 0]

Before: [0, 1, 2, 2]
6 1 3 0
After:  [0, 1, 2, 2]

Before: [1, 1, 0, 0]
5 1 3 3
After:  [1, 1, 0, 1]

Before: [0, 3, 2, 0]
4 2 2 0
After:  [2, 3, 2, 0]

Before: [3, 0, 0, 1]
15 3 1 0
After:  [1, 0, 0, 1]

Before: [0, 3, 3, 0]
1 0 0 1
After:  [0, 0, 3, 0]

Before: [0, 2, 3, 3]
1 0 0 1
After:  [0, 0, 3, 3]

Before: [3, 1, 2, 2]
8 1 2 1
After:  [3, 0, 2, 2]

Before: [0, 3, 1, 2]
1 0 0 0
After:  [0, 3, 1, 2]

Before: [2, 0, 2, 2]
11 0 3 0
After:  [1, 0, 2, 2]

Before: [1, 0, 1, 3]
15 2 1 0
After:  [1, 0, 1, 3]

Before: [1, 3, 2, 3]
0 2 3 0
After:  [0, 3, 2, 3]

Before: [1, 2, 1, 3]
13 3 2 2
After:  [1, 2, 0, 3]

Before: [2, 2, 1, 2]
11 0 3 1
After:  [2, 1, 1, 2]

Before: [2, 2, 2, 2]
4 2 2 2
After:  [2, 2, 2, 2]

Before: [3, 0, 2, 1]
14 3 2 3
After:  [3, 0, 2, 1]

Before: [2, 3, 3, 2]
11 0 3 0
After:  [1, 3, 3, 2]

Before: [3, 2, 0, 2]
3 3 3 3
After:  [3, 2, 0, 0]

Before: [1, 1, 3, 1]
12 2 3 0
After:  [0, 1, 3, 1]

Before: [0, 1, 2, 2]
3 3 3 1
After:  [0, 0, 2, 2]

Before: [1, 2, 2, 2]
12 2 1 3
After:  [1, 2, 2, 1]

Before: [1, 0, 1, 1]
9 2 0 0
After:  [2, 0, 1, 1]

Before: [2, 1, 0, 3]
4 3 3 3
After:  [2, 1, 0, 3]

Before: [2, 1, 2, 1]
12 2 0 0
After:  [1, 1, 2, 1]

Before: [0, 1, 2, 2]
10 1 0 2
After:  [0, 1, 1, 2]

Before: [1, 0, 1, 2]
9 2 0 2
After:  [1, 0, 2, 2]

Before: [3, 1, 3, 3]
7 0 3 3
After:  [3, 1, 3, 1]

Before: [0, 1, 3, 3]
10 1 0 2
After:  [0, 1, 1, 3]

Before: [1, 3, 1, 1]
3 2 3 1
After:  [1, 0, 1, 1]

Before: [1, 3, 2, 3]
2 0 2 0
After:  [0, 3, 2, 3]

Before: [1, 3, 1, 1]
9 2 0 1
After:  [1, 2, 1, 1]

Before: [1, 1, 2, 0]
2 0 2 3
After:  [1, 1, 2, 0]

Before: [2, 3, 1, 2]
11 0 3 1
After:  [2, 1, 1, 2]

Before: [0, 0, 1, 0]
1 0 0 0
After:  [0, 0, 1, 0]

Before: [2, 1, 0, 2]
6 1 3 1
After:  [2, 0, 0, 2]

Before: [2, 3, 2, 3]
7 0 2 0
After:  [1, 3, 2, 3]

Before: [0, 3, 2, 3]
0 2 3 0
After:  [0, 3, 2, 3]

Before: [2, 2, 3, 3]
0 1 3 1
After:  [2, 0, 3, 3]

Before: [1, 0, 2, 1]
14 3 2 3
After:  [1, 0, 2, 1]

Before: [3, 1, 2, 3]
0 2 3 1
After:  [3, 0, 2, 3]

Before: [0, 0, 3, 3]
13 3 3 3
After:  [0, 0, 3, 1]

Before: [0, 3, 0, 3]
1 0 0 3
After:  [0, 3, 0, 0]

Before: [0, 1, 3, 2]
6 1 3 3
After:  [0, 1, 3, 0]

Before: [0, 3, 3, 3]
7 2 3 0
After:  [1, 3, 3, 3]

Before: [0, 1, 0, 0]
5 1 3 3
After:  [0, 1, 0, 1]

Before: [1, 3, 2, 1]
2 0 2 1
After:  [1, 0, 2, 1]

Before: [1, 0, 1, 1]
15 2 1 0
After:  [1, 0, 1, 1]

Before: [2, 0, 0, 2]
11 0 3 2
After:  [2, 0, 1, 2]

Before: [3, 1, 3, 2]
6 1 3 2
After:  [3, 1, 0, 2]

Before: [1, 0, 1, 0]
15 2 1 1
After:  [1, 1, 1, 0]

Before: [0, 1, 3, 3]
10 1 0 3
After:  [0, 1, 3, 1]

Before: [2, 1, 3, 0]
5 1 3 1
After:  [2, 1, 3, 0]

Before: [0, 1, 0, 3]
10 1 0 2
After:  [0, 1, 1, 3]

Before: [1, 3, 2, 1]
2 0 2 2
After:  [1, 3, 0, 1]

Before: [2, 1, 3, 2]
6 1 3 3
After:  [2, 1, 3, 0]

Before: [0, 0, 2, 1]
15 3 1 0
After:  [1, 0, 2, 1]

Before: [1, 2, 2, 2]
2 0 2 3
After:  [1, 2, 2, 0]

Before: [3, 1, 2, 0]
5 1 3 3
After:  [3, 1, 2, 1]

Before: [1, 1, 2, 3]
8 1 2 2
After:  [1, 1, 0, 3]

Before: [0, 1, 3, 1]
10 1 0 0
After:  [1, 1, 3, 1]

Before: [0, 0, 0, 2]
1 0 0 3
After:  [0, 0, 0, 0]

Before: [3, 1, 2, 3]
13 3 3 3
After:  [3, 1, 2, 1]

Before: [2, 2, 2, 1]
7 0 2 3
After:  [2, 2, 2, 1]

Before: [1, 2, 2, 1]
14 3 2 3
After:  [1, 2, 2, 1]

Before: [1, 1, 2, 3]
8 1 2 1
After:  [1, 0, 2, 3]

Before: [1, 3, 2, 1]
2 0 2 3
After:  [1, 3, 2, 0]

Before: [2, 2, 2, 3]
13 3 2 2
After:  [2, 2, 0, 3]

Before: [1, 2, 2, 1]
2 0 2 3
After:  [1, 2, 2, 0]

Before: [3, 1, 3, 0]
5 1 3 0
After:  [1, 1, 3, 0]

Before: [2, 3, 1, 2]
11 0 3 2
After:  [2, 3, 1, 2]

Before: [1, 1, 3, 2]
6 1 3 0
After:  [0, 1, 3, 2]

Before: [0, 1, 2, 3]
8 1 2 1
After:  [0, 0, 2, 3]

Before: [1, 1, 2, 2]
8 1 2 2
After:  [1, 1, 0, 2]

Before: [2, 1, 2, 1]
14 3 2 2
After:  [2, 1, 1, 1]

Before: [0, 1, 3, 2]
6 1 3 2
After:  [0, 1, 0, 2]

Before: [2, 0, 1, 3]
0 2 3 1
After:  [2, 0, 1, 3]

Before: [2, 1, 0, 2]
6 1 3 3
After:  [2, 1, 0, 0]

)"; // note: it is important to have a newline at the very end of this input, otherwise the last "chunk" won't be processed


/*
const std::string SAMPLE_INPUT =
R"(Before: [3, 2, 1, 1]
9 2 1 2
After:  [3, 2, 2, 1]

)"; // note: it is important to have a newline at the very end of this input, otherwise the last "chunk" won't be processed
*/

const std::string TEST_PROGRAM_INPUT =
R"(2 2 3 2
15 1 0 1
10 1 0 1
2 0 1 3
0 3 2 1
15 1 1 1
9 0 1 0
14 0 2 2
2 2 3 0
2 1 2 1
2 3 0 3
1 1 0 0
15 0 2 0
15 0 2 0
9 0 2 2
14 2 3 1
2 1 0 0
15 1 0 2
10 2 2 2
2 2 0 3
1 0 3 0
15 0 1 0
9 1 0 1
14 1 2 3
2 3 1 1
2 1 0 0
14 0 2 0
15 0 2 0
9 0 3 3
14 3 1 1
2 3 1 2
2 1 2 3
2 2 1 0
1 3 0 2
15 2 2 2
9 2 1 1
14 1 1 2
2 1 3 0
2 2 0 1
2 3 1 3
9 0 0 1
15 1 1 1
9 1 2 2
14 2 0 1
2 2 0 0
2 2 0 3
2 2 3 2
11 0 3 0
15 0 3 0
9 0 1 1
2 0 0 0
2 0 3 2
13 2 3 2
15 2 1 2
9 1 2 1
14 1 0 0
2 0 2 2
15 0 0 1
10 1 0 1
2 2 1 2
15 2 2 2
9 0 2 0
14 0 1 2
2 3 0 1
2 2 1 0
12 0 1 0
15 0 3 0
9 0 2 2
14 2 0 1
2 1 3 2
15 1 0 0
10 0 3 0
2 1 2 3
8 0 2 2
15 2 1 2
15 2 1 2
9 1 2 1
14 1 1 0
2 0 3 3
2 1 3 2
2 3 2 1
8 1 2 1
15 1 1 1
9 1 0 0
14 0 2 1
2 3 2 2
2 1 1 3
2 0 0 0
15 3 2 2
15 2 1 2
15 2 1 2
9 2 1 1
2 2 2 2
2 1 0 0
9 3 0 0
15 0 1 0
9 1 0 1
14 1 2 0
2 3 2 1
2 0 1 3
0 3 2 1
15 1 1 1
9 1 0 0
14 0 2 3
15 3 0 0
10 0 3 0
2 0 1 2
2 1 0 1
7 2 0 1
15 1 1 1
9 3 1 3
14 3 1 1
2 0 3 3
15 0 0 2
10 2 3 2
2 1 3 0
13 3 2 2
15 2 2 2
9 2 1 1
14 1 2 3
2 1 2 1
2 2 3 0
2 1 0 2
1 1 0 0
15 0 1 0
15 0 2 0
9 3 0 3
14 3 3 2
2 2 3 3
15 3 0 0
10 0 3 0
1 1 3 1
15 1 1 1
15 1 3 1
9 1 2 2
14 2 3 1
2 0 1 0
2 0 1 2
13 2 3 0
15 0 1 0
9 1 0 1
14 1 2 2
15 0 0 3
10 3 1 3
2 2 0 0
2 0 2 1
10 3 1 3
15 3 1 3
15 3 1 3
9 2 3 2
14 2 2 0
2 3 3 1
2 2 0 2
15 3 0 3
10 3 3 3
12 2 1 1
15 1 3 1
15 1 2 1
9 1 0 0
15 0 0 2
10 2 3 2
15 0 0 1
10 1 0 1
2 1 3 3
10 3 1 1
15 1 1 1
9 1 0 0
14 0 1 3
2 1 1 1
2 3 0 0
15 1 2 0
15 0 1 0
9 3 0 3
14 3 3 0
15 0 0 2
10 2 1 2
2 2 0 3
1 1 3 2
15 2 2 2
15 2 2 2
9 0 2 0
14 0 1 3
2 1 1 2
2 3 1 1
2 2 1 0
12 0 1 2
15 2 2 2
9 2 3 3
2 0 1 2
2 1 2 1
15 1 2 1
15 1 2 1
15 1 3 1
9 1 3 3
14 3 0 1
2 1 0 3
2 1 0 2
3 0 3 2
15 2 2 2
9 2 1 1
2 2 3 3
2 1 3 2
11 0 3 3
15 3 2 3
9 1 3 1
14 1 2 2
2 3 0 0
2 3 3 1
2 1 2 3
10 3 1 0
15 0 1 0
9 2 0 2
14 2 3 0
2 0 1 3
15 0 0 2
10 2 2 2
2 0 0 1
0 3 2 2
15 2 3 2
9 0 2 0
15 0 0 3
10 3 2 3
2 1 1 1
2 2 1 2
4 2 3 1
15 1 3 1
15 1 1 1
9 0 1 0
14 0 0 3
2 3 1 0
2 0 3 2
2 2 1 1
6 0 1 1
15 1 2 1
9 1 3 3
15 1 0 1
10 1 2 1
2 1 2 0
2 2 0 2
14 0 2 0
15 0 3 0
9 0 3 3
14 3 3 1
2 1 1 0
2 0 2 2
2 2 0 3
13 2 3 3
15 3 2 3
9 1 3 1
14 1 3 3
2 3 3 2
2 0 1 1
2 2 0 0
7 0 2 1
15 1 1 1
9 3 1 3
14 3 3 1
2 0 1 2
2 3 0 0
2 2 2 3
8 0 2 0
15 0 2 0
9 1 0 1
14 1 1 3
2 3 0 0
2 0 2 1
7 2 0 2
15 2 2 2
15 2 2 2
9 2 3 3
14 3 2 0
2 3 0 3
15 1 0 2
10 2 0 2
8 3 2 2
15 2 2 2
15 2 2 2
9 0 2 0
14 0 3 3
2 0 1 2
15 2 0 0
10 0 3 0
7 2 0 0
15 0 1 0
9 3 0 3
14 3 1 2
2 2 1 0
2 2 1 3
11 0 3 0
15 0 1 0
9 0 2 2
2 1 2 3
2 2 0 1
15 3 0 0
10 0 2 0
3 0 3 1
15 1 2 1
9 2 1 2
14 2 0 1
2 2 0 2
3 0 3 0
15 0 1 0
9 0 1 1
14 1 3 0
15 3 0 3
10 3 2 3
2 3 2 1
6 1 3 3
15 3 3 3
9 0 3 0
14 0 1 2
2 2 0 0
2 2 2 1
15 1 0 3
10 3 3 3
6 3 1 3
15 3 1 3
15 3 1 3
9 2 3 2
14 2 3 1
15 0 0 2
10 2 1 2
2 1 0 0
2 2 0 3
1 0 3 0
15 0 2 0
9 1 0 1
14 1 2 0
15 2 0 1
10 1 3 1
2 3 0 2
2 0 1 3
13 3 2 1
15 1 2 1
9 0 1 0
14 0 0 2
2 0 0 1
2 2 1 0
2 2 2 3
11 0 3 1
15 1 3 1
9 1 2 2
2 1 2 3
2 1 2 1
3 0 3 0
15 0 3 0
9 0 2 2
14 2 0 3
2 2 0 2
2 1 0 0
14 0 2 0
15 0 3 0
9 0 3 3
14 3 3 1
2 2 0 0
2 0 2 3
4 2 3 0
15 0 1 0
9 1 0 1
14 1 1 3
2 2 0 0
2 3 1 1
2 1 3 2
6 1 0 1
15 1 1 1
9 3 1 3
2 2 2 1
2 2 1 2
2 3 3 0
5 2 0 0
15 0 3 0
15 0 2 0
9 3 0 3
14 3 2 1
2 2 0 3
2 0 2 2
2 3 3 0
13 2 3 0
15 0 2 0
15 0 2 0
9 0 1 1
2 2 3 0
2 3 2 2
11 0 3 2
15 2 3 2
9 2 1 1
15 1 0 0
10 0 1 0
15 3 0 2
10 2 3 2
1 0 3 0
15 0 1 0
9 1 0 1
15 2 0 2
10 2 1 2
2 0 0 0
2 3 1 3
8 3 2 3
15 3 1 3
9 1 3 1
14 1 0 3
15 0 0 2
10 2 3 2
2 3 1 1
2 1 3 0
10 0 1 0
15 0 1 0
15 0 2 0
9 0 3 3
14 3 2 2
2 2 0 1
15 0 0 0
10 0 3 0
2 3 3 3
6 0 1 3
15 3 2 3
9 2 3 2
14 2 3 1
2 2 2 0
2 3 1 2
2 2 3 3
5 0 2 0
15 0 2 0
9 1 0 1
2 2 2 2
15 0 0 0
10 0 1 0
2 3 3 3
14 0 2 2
15 2 3 2
9 1 2 1
15 0 0 3
10 3 1 3
2 2 3 2
15 3 0 0
10 0 2 0
3 0 3 2
15 2 1 2
9 2 1 1
2 0 2 2
2 3 2 3
2 3 2 0
7 2 0 0
15 0 2 0
9 0 1 1
14 1 3 2
2 2 3 3
15 2 0 0
10 0 2 0
2 0 0 1
2 1 3 0
15 0 2 0
9 2 0 2
14 2 1 3
2 2 2 2
2 1 3 0
14 0 2 1
15 1 2 1
9 3 1 3
14 3 2 2
2 0 3 3
2 2 1 1
2 3 0 0
4 1 3 0
15 0 2 0
9 0 2 2
14 2 1 1
2 3 1 3
15 1 0 2
10 2 2 2
2 3 0 0
12 2 0 2
15 2 1 2
9 1 2 1
2 1 2 3
2 2 2 2
9 3 3 2
15 2 1 2
9 1 2 1
14 1 0 2
2 2 0 3
2 2 3 0
15 1 0 1
10 1 2 1
11 0 3 0
15 0 1 0
9 0 2 2
2 2 3 0
2 3 1 1
11 0 3 1
15 1 3 1
9 2 1 2
14 2 0 3
2 3 3 1
2 3 1 2
6 1 0 2
15 2 1 2
15 2 3 2
9 3 2 3
14 3 2 0
2 2 0 1
15 2 0 3
10 3 0 3
2 2 0 2
0 3 2 1
15 1 3 1
9 0 1 0
14 0 1 2
2 2 1 3
2 2 0 0
15 3 0 1
10 1 3 1
11 0 3 0
15 0 2 0
9 0 2 2
14 2 2 1
2 1 3 0
15 3 0 3
10 3 3 3
2 0 3 2
15 0 2 3
15 3 3 3
9 3 1 1
14 1 2 3
2 2 0 1
2 3 3 0
2 3 1 2
8 0 2 0
15 0 2 0
9 3 0 3
2 2 0 0
2 0 2 1
5 0 2 0
15 0 2 0
9 3 0 3
14 3 1 0
2 0 3 2
2 1 2 3
2 3 0 1
10 3 1 1
15 1 2 1
15 1 3 1
9 0 1 0
14 0 2 3
2 1 2 0
15 2 0 2
10 2 3 2
2 3 0 1
2 2 0 1
15 1 2 1
9 3 1 3
14 3 0 1
15 0 0 3
10 3 0 3
15 2 0 0
10 0 3 0
15 3 0 2
10 2 1 2
8 0 2 2
15 2 2 2
15 2 1 2
9 1 2 1
14 1 3 2
2 3 2 3
2 3 0 1
2 1 1 0
10 0 1 0
15 0 3 0
15 0 2 0
9 2 0 2
14 2 3 0
2 3 0 2
2 0 2 3
2 0 0 1
2 2 3 2
15 2 1 2
9 0 2 0
14 0 1 2
2 2 2 0
4 0 3 1
15 1 3 1
9 2 1 2
2 2 3 3
2 0 0 1
2 1 1 0
1 0 3 3
15 3 3 3
15 3 3 3
9 2 3 2
14 2 0 3
2 2 0 1
2 3 1 0
2 1 3 2
5 1 0 2
15 2 2 2
9 2 3 3
14 3 0 2
2 3 0 3
2 3 1 1
2 2 2 0
6 1 0 0
15 0 3 0
9 0 2 2
14 2 1 0
2 0 0 1
15 2 0 2
10 2 3 2
2 2 2 3
2 1 3 1
15 1 3 1
9 0 1 0
14 0 0 1
15 2 0 2
10 2 2 2
2 1 2 0
4 2 3 2
15 2 2 2
15 2 1 2
9 1 2 1
14 1 3 2
2 2 2 1
2 3 2 0
15 3 0 3
10 3 3 3
6 3 1 3
15 3 3 3
9 3 2 2
14 2 1 3
2 0 3 2
7 2 0 2
15 2 2 2
9 2 3 3
14 3 2 0
2 0 2 3
2 1 0 1
2 2 3 2
0 3 2 2
15 2 1 2
15 2 3 2
9 2 0 0
14 0 3 1
15 2 0 3
10 3 1 3
2 0 2 2
2 2 0 0
3 0 3 2
15 2 2 2
9 1 2 1
14 1 1 2
2 1 0 1
2 0 2 3
1 1 0 3
15 3 1 3
9 3 2 2
14 2 0 1
2 3 0 0
15 1 0 3
10 3 0 3
2 3 3 2
13 3 2 0
15 0 1 0
15 0 1 0
9 0 1 1
14 1 2 2
15 3 0 0
10 0 2 0
2 3 2 1
2 2 2 3
4 0 3 1
15 1 3 1
9 2 1 2
14 2 0 1
2 1 2 2
15 3 0 3
10 3 1 3
3 0 3 0
15 0 3 0
9 0 1 1
2 2 3 2
15 3 0 0
10 0 2 0
2 0 0 3
0 3 2 2
15 2 1 2
9 2 1 1
2 0 0 0
2 2 3 2
0 3 2 0
15 0 3 0
15 0 2 0
9 1 0 1
2 2 1 0
2 3 2 2
2 2 3 3
7 0 2 2
15 2 3 2
9 2 1 1
14 1 1 3
2 2 1 2
2 3 2 0
2 2 2 1
5 2 0 1
15 1 3 1
9 3 1 3
14 3 2 1
15 0 0 2
10 2 3 2
2 2 0 0
2 0 2 3
7 0 2 3
15 3 2 3
9 3 1 1
2 0 3 2
2 2 2 3
11 0 3 0
15 0 2 0
9 0 1 1
14 1 0 2
2 1 0 3
2 2 2 0
2 1 1 1
3 0 3 3
15 3 1 3
9 2 3 2
14 2 2 3
2 1 0 0
2 2 0 1
15 0 0 2
10 2 2 2
14 0 2 2
15 2 3 2
9 2 3 3
2 3 1 1
2 0 3 2
15 0 2 0
15 0 2 0
9 0 3 3
2 3 2 2
2 2 0 0
2 2 0 1
7 0 2 0
15 0 3 0
9 0 3 3
14 3 2 1
2 0 0 3
2 2 1 2
2 1 1 0
0 3 2 2
15 2 3 2
9 2 1 1
2 2 1 3
2 0 3 2
2 3 0 0
13 2 3 2
15 2 3 2
9 2 1 1
2 0 1 3
2 3 1 2
2 2 1 0
7 0 2 0
15 0 1 0
15 0 3 0
9 0 1 1
2 1 3 0
2 2 3 2
14 0 2 2
15 2 2 2
9 1 2 1
14 1 3 3
2 1 3 1
2 0 0 2
15 0 2 2
15 2 3 2
9 2 3 3
15 1 0 0
10 0 2 0
15 0 0 2
10 2 3 2
5 0 2 0
15 0 1 0
9 0 3 3
14 3 1 1
2 2 0 0
2 1 2 3
15 1 0 2
10 2 0 2
3 0 3 3
15 3 1 3
9 3 1 1
2 3 3 2
2 3 2 0
15 3 0 3
10 3 0 3
13 3 2 3
15 3 2 3
9 1 3 1
14 1 1 2
2 1 2 3
2 2 0 0
2 1 1 1
3 0 3 1
15 1 2 1
15 1 3 1
9 2 1 2
14 2 1 3
2 2 0 1
2 1 0 0
2 1 2 2
9 0 0 0
15 0 1 0
15 0 3 0
9 0 3 3
14 3 3 2
2 1 1 0
15 0 0 1
10 1 0 1
2 3 1 3
10 0 1 0
15 0 1 0
9 0 2 2
14 2 1 0
2 3 2 1
2 2 1 3
2 1 1 2
6 1 3 3
15 3 1 3
9 0 3 0
14 0 0 1
2 0 1 2
15 3 0 3
10 3 2 3
2 2 0 0
4 0 3 3
15 3 1 3
15 3 2 3
9 3 1 1
14 1 2 0
2 3 3 1
2 1 2 3
2 3 3 2
15 3 2 2
15 2 2 2
9 0 2 0
14 0 2 2
2 2 2 0
2 1 3 1
2 2 0 3
1 1 3 0
15 0 3 0
9 0 2 2
2 2 0 0
4 0 3 3
15 3 2 3
9 3 2 2
15 1 0 1
10 1 3 1
2 1 3 3
3 0 3 1
15 1 3 1
15 1 2 1
9 1 2 2
14 2 2 3
2 1 0 0
2 3 3 1
2 2 1 2
14 0 2 1
15 1 2 1
9 1 3 3
2 1 3 2
2 2 3 1
9 0 0 1
15 1 2 1
9 1 3 3
2 2 1 0
2 3 1 1
15 3 0 2
10 2 2 2
12 0 1 2
15 2 2 2
15 2 3 2
9 2 3 3
14 3 3 0
2 1 1 3
2 0 0 2
2 1 3 1
2 3 1 1
15 1 3 1
9 1 0 0
14 0 3 2
2 0 2 3
15 2 0 0
10 0 1 0
2 0 0 1
10 0 1 0
15 0 2 0
9 2 0 2
2 1 2 1
2 1 0 0
2 1 1 3
9 0 0 3
15 3 1 3
15 3 1 3
9 2 3 2
14 2 0 1
2 2 3 3
2 2 1 0
2 1 3 2
11 0 3 2
15 2 3 2
9 2 1 1
14 1 2 2
2 1 2 3
2 1 3 0
15 3 0 1
10 1 1 1
9 1 0 1
15 1 1 1
9 1 2 2
2 2 3 3
2 0 2 1
2 2 0 0
11 0 3 3
15 3 2 3
9 3 2 2
2 1 1 0
15 1 0 3
10 3 2 3
15 1 0 1
10 1 2 1
1 0 3 1
15 1 2 1
9 2 1 2
14 2 3 3
15 1 0 2
10 2 2 2
2 2 1 1
14 0 2 1
15 1 3 1
9 1 3 3
14 3 1 2
15 2 0 1
10 1 3 1
2 2 3 0
2 0 1 3
12 0 1 3
15 3 3 3
9 2 3 2
14 2 1 1
2 3 3 3
2 2 2 2
2 1 3 0
14 0 2 0
15 0 1 0
15 0 2 0
9 0 1 1
14 1 0 0
)";
