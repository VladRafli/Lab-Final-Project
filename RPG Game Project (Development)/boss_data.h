#ifndef BOSS_DATA_H_INCLUDED
#define BOSS_DATA_H_INCLUDED

static struct boss_data
{
    int win_flag;
    int boss_hp;
    int boss_dmg;
} boss_dt;

struct damage_reducer
{
    int dmg_red;
    int reduced_dmg;
} dmg_reducer;

#endif // BOSS_DATA_H_INCLUDED
