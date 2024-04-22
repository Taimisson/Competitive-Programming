# Migratory Birds

Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

[Migratory Birds - HackerRank](https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true)

# Solution

```
int migratoryBirds(vector<int> arr)
{
    map<int, int> map;

    // Conta a frequência de cada tipo de pássaro
    for (int i = 0; i < arr.size(); i++)
    {
        map[arr[i]]++;
    }

    int greater = 0;
    int key = 0;

    // Encontra o tipo de pássaro mais frequente com o menor ID, no caso de empate
    for (auto m : map)
    {
        if (m.second > greater || (m.second == greater && m.first < key))
        {
            greater = m.second;
            key = m.first;
        }
    }

    return key;
}

```