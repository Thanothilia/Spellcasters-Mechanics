int combineSpells2(int first_spell[], int second_spell[])
{
    int totDmg;

    totDmg = (first_spell[1] + second_spell[1])/2;

    return totDmg;
}

int combineSpells3(int first_spell[], int second_spell[], int third_spell[])
{
    int totDmg;

    totDmg = (first_spell[1] + second_spell[1] + third_spell[1]) / 3;

    return totDmg;
}