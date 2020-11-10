# 1


assuming there are at least 20 pills in each bottle.

denote every bottle by number n (i.e. bottle 1, 2 etc.).
1. take n pills from bottle number n: sum(1...20) * 1 = 210 grams.
2. since there is a bottle i with pills that weigh 1.1 grams the sum is 210 + x
3.  x / 0.1 = id of bottle with pills that weigh 1.1 grams


# 2 todo

* probability of making a shot = p
* game 1: for one shot P(game 1) = p_1 = p
* game 2: 3 shots, need to score 2 / 3: P(game 2) ~ Bin(3, p).
* need to find when p_1 is better than p_2 and vice versa:

#### p_2 value:

p_2 = P(X=2) + P(X=3) = 3 choose 2 * p^2 * (1-p) + p^3 = 3p^2 - 2p^3 = p^2(3 - 2p)


#### p_1 == p_2

p == 3p^2 - 2p^3 -> 1 = 2p^2 -2p^2 -> p = 1, 0.5

#### p_1 > p_2

p > 3p^2 - 2p^3 -> 0 < p < 0.5

#### p_1 < p_2

p < 3p^2 - 2p^3 -> 0.5 < p < 1




# 3 todo




# 4


There are three ants on different vertices of a triangle.
What is the probability of collision (between any two or all of them)?
Assume that each ant randomly picks a direction,
with either direction being equally likely to be chosen,
and  that they walk at the same speed.

similarly, find the probability of collision with n ants on an n-vertex polygon.

1. denote right turn as 1, left turn as 0
2. there are 2^3 combinations of turns = 000, 001..... 111
3. the only cases there is no collision is when they all turned to the same side (111 and 000),
so P(no collision) = 2/8 = 1/4
4. we can deduce that for an n-vertex polygon there are only 2 cases there is no collision so:
   P(no collision) = 2/2^n or 1/2^(n-1)



# 5

let there be a five-quart jug, a three-quart jug, and an unlimited water supply (but no measuring cups).
How would you come up with exactly four quarts of water?
(the jugs are oddly shaped - no filling up exactly "half").

denote the five-quart jug F, and the three-quart jug T.

we will build the solution backwards:

1. F has 4 quart -> F had 1 quart and was filled with T.
2. F has 1 quart and was filled with T -> T had 1 quart.
3. the only way T had 1 quart, is if we filled F with 3 quarts and then with another 2 quart.

so:
1. fill T and pour to F. (F=3, T=0)
2. fill T and pour to F. (F=5, T=1)
3. empty F. (F=0, T=1)
4. pour T to F. (F=1, T=0)
5. fill T and pour to F. ((F=4, T=0)



# 6 todo





# 7 todo






# 8


There is a building of 100 floors. If an egg drops from the Nth floor or
above, it will break.
If it's dropped from any floor below, it will not break.
You're given two eggs. Find N, while minimizing the number of drops for the worst case.

worst case is N is close to 100, and we have to test all the floors.
when the first egg breaks, we have only one egg left, so we need to search the floors in a linear way.
we start with a logarithmic search - check every other n floor.
if we choose n = 10, we only preform 9 checks - no need to search 100 floor.
we use the first egg to check floor 95 (10th try),
and if it breaks, we need to only search 4 floors (91-94 / 96-99) - 14 times



# 9 todo






# 10 todo

