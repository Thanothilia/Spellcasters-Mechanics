bool deadtest(float fire, float earth, float water, float air )
{
    float dmg, health;
    health = 2;
    switch (enemylist[enemytype])  {
    case 0:
        // Imp (fire type)
        dmg = (fire/2 + earth + water * 2 + air)
        if (dmg>=health){return true;}
        else{return false;}
        break;
    case 1:
        // Fish (water type)
        dmg = (fire*2 + earth + water/2 + air)
        if (dmg>=health){return true;}
        else{return false;}
        break;
    case 2:
        // Golem (earth type)
        dmg = (fire + earth/2 + water + air*2)
        if (dmg>=health){return true;}
        else{return false;}
        break;
    case 3:
        // Whirlwind (wind type)
        dmg = (fire + earth*2 + water + air/2)
        if (dmg>=health){return true;}
        else{return false;}
        break;
}
