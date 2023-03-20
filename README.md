
# Gladiators

The Emperor Tiberius Claudius Caesar Augustus Germanicus, who was passionate about gladiator fights, decided to organize the largest games ever held in Ancient Rome.

To accomplish this, Tiberius called N gladiators to Rome. Then, in order to organize them, he decided to arrange the N gladiators as follows: the first gladiator has gladiator 2 on his right and nobody on his left, gladiator 2 has gladiator 1 on his left and gladiator 3 on his right, ..., gladiator N-1 has gladiator N on his right and gladiator N-2 on his left, and gladiator N has gladiator N-1 on his left and nobody on his right. Emperor Tiberius can only decide to have two gladiators battle each other if they are next to each other. After the battle is over, the winning gladiator returns to the lineup, while the losing gladiator leaves the lineup. When a gladiator loses a battle and leaves the lineup, all gladiators to his right move one position to the left. Each gladiator has a level of fame equal to a natural number, and to make the games more spectacular, the emperor decided that when two gladiators battle, the gladiator with a lower level of fame always wins. If two gladiators have the same level of fame, then the gladiator on the left will win. To measure how spectacular the games are, the emperor invented a number called the "enthusiasm coefficient". This number is equal to 0 before the games begin. After a battle, the enthusiasm coefficient increases by the difference between the level of fame of the two gladiators. For example, if two gladiators battle and one of them has a level of fame equal to 7 and the other has a level of fame equal to 5, then the coefficient will increase by 7 - 5 = 2. The games end when there is only one gladiator left standing.



## Example
**Input**:

`n = 5`\
`gladiators = [1 , 2 , 3 , 1 , 7]`

**Output**: **9**

Explanation: We can obtain the fame coefficient `9` in the following way:

Initially, the fame coefficient is equal to `0`.
We choose the first battle to be between gladiator `4` and gladiator `5`.\The level of enthusiasm increases by `7-1=6`, becoming `6`, and gladiator `5` leaves the sequence.\Thus, we are left with gladiators: `1, 2, 3, 4`.
The second battle will be between gladiator `1` and gladiator `2`.\The level of enthusiasm increases by `2-1=1`, becoming `7`, and gladiator `2` leaves the sequence.\Thus, we are left with gladiators: `1, 3, 4`.
The third battle will be between gladiator `1` and gladiator `3`. The level of enthusiasm increases by `3-1=2`, becoming `9`, and gladiator `3` leaves the sequence.\Thus, we are left with gladiators: `1, 4`.
The last battle will be between gladiator `1` and gladiator `4`.\The level of enthusiasm increases by `1-1=0`, becoming `9`, and because the gladiators have the same level of fame and gladiator `1` is further to the left, gladiator `4` leaves the sequence.\Thus, we are left with gladiator: **`1`**.
The way of choosing the battles is not necessarily unique.
## Constraints

`1 ≤ N ≤ 100,000`
`the fame level of a gladiator is a natural number smaller than 1,000,000,000`




## My Solution

My aglorithm reads in an integer `n` which represents the number of gladiators, and then reads in `n` integers representing the levels of fame of each gladiator. It then sorts the array in ascending order and finds the difference between each gladiator's level of fame and the level of fame of the first gladiator in the sorted array. It adds each difference to a variable `a` which represents the enthusiasm coefficient.

The reason this solution is efficient is because it sorts the array in `O(nlogn)` time complexity using the `std::sort` algorithm, and then iterates through the sorted array once, which takes `O(n)` time complexity. Therefore, the overall time complexity of this solution is `O(nlogn)`.

Additionally, this solution uses only one loop and constant extra space, which makes it efficient in terms of memory usage as well.

Overall, this solution provides an efficient way to calculate the enthusiasm coefficient for the gladiator games.

## Author

- [@antoniogrosu](https://www.github.com/antoniogrosu)
 
