// mogi npc skill ֮ �����ʷ���


#include <ansi.h>
#include <combat.h>
inherit SKILL;

void blood1(object me, object  weapon);
void blood2(object me, object  weapon);
void blood3(object me, object  weapon);
void blood4(object me, object  weapon);
void blood5(object me, object  weapon);

string *parry_msg= ({
   "$n˫������һ��, ˫�Ŷ��˸���, ʹ��һ�С���ħ�۶���, ������������ȫ������, Ӳ�����İ�$N����ʽ��������!\n",
   "$n�������Ĵָ, ʳָ, ��ָ, ʹ��һ�С�Ⱥ����·��, ��ָ���й��ɿ��̽��$n���ʺ�, �ƽ���$N�Ĺ��ơ�\n",
});

mapping *action = ({
([ "action" : HIB"$N����ħ�����������󣬶�ʱ�ڹ�������һʽ�����ʷ����е�"HIM"���ʷ���ʬ��"HIB"Ю�ź��صĶ���Ϯ��$n������\n"NOR,
        "dodge":   20,
        "parry":   20,
        "damage":   180,
        "force":    150,
        "post_action":  (:blood1:),        
        "damage_type" : "����"
        
]),

([ "action" :HIB"$Nʹ��һʽ"HIM"�����ᰧ�衯"HIB"����ħ�����󣬺�Х֮���������ˣ��������񣬾���$nʧ��֮�ʣ�$Nһ�ƴ���$n\n"NOR,
        "dodge":   30,
        "parry":   30,
        "damage":   180,
        "force":    150,
        "post_action":  (:blood2:),
        "damage_type" : "����"
]),

([ "action" :HIB"$Nѹ��ֱ��$n������$n������֮�ʵ�˲��߸�Ծ��ʹ�������ʷ����е�һʽ"HIM"��ѻ����\�ۡ�"HIB"ͬʱ��$n��˫�ۼ������������\n"NOR,
        "dodge":   30,
        "parry":    30,
        "damage":   180,
        "force":    150,
        "post_action":  (:blood3:),
        "damage_type" : "����"
]),

([ "action" :HIB"$N˫��һ�ģ�ɷʱ����ѣĿ��һʽ"HIM"��ʬ��\����"HIB"�����������������ֱ��$n���Ժ����ظ������Ѩ\n"NOR,
        "dodge":    30,
        "parry":    30,
        "damage":   180,
        "force":    150,
        "post_action":  (:blood4:),
        "damage_type" : "����"
]),

([ "action" :HIB"$Nħ���跢����ָΪ�ƣ�ʹ�������ʷ����е�һʽ"HIM"��Ѫ�ǲ��⡯"HIB"���������絶������ֱ��$n\n"NOR,
        "dodge":   100,
        "parry":   100,
        "damage":   180,
        "force":    150,
        "post_action":  (:blood5:),
        "damage_type" : "����"
]),


});

int valid_enable(string usage)
{
        return (usage=="unarmed")||(usage=="parry");
}


mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}

string query_parry_msg(string limb)
{
    return parry_msg[random(sizeof(parry_msg))];
}

void blood1(object me,  object  weapon)
{
  int i,dark_poison;
 object victim,*enemy;
 enemy = me->query_enemy();
 i=sizeof(enemy);
 victim = enemy[random(i)];
 dark_poison=victim->query_condition("dark_poison");
 victim->apply_condition("dark_poison",5+dark_poison);
}
void blood2(object me, object  weapon)
{
 int i,fire_poison;
 object victim,*enemy;
 enemy = me->query_enemy();
 i=sizeof(enemy);
 victim = enemy[random(i)];
 fire_poison=victim->query_condition("fire_poison");
 victim->apply_condition("fire_poison",2+fire_poison);
}
void blood3(object me, object  weapon)
{
  int i,five_poison;
 object victim,*enemy;
 enemy = me->query_enemy();
 i=sizeof(enemy);
 victim = enemy[random(i)];
 five_poison=victim->query_condition("five_poison");
 victim->apply_condition("five_poison",5+five_poison);
}
void blood4(object me, object  weapon)
{
  int i,rose_poison;
 object victim,*enemy;
 enemy = me->query_enemy();
 i=sizeof(enemy);
 victim = enemy[random(i)];
 rose_poison=victim->query_condition("rose_poison");
 victim->apply_condition("rose_poison",5+rose_poison);
}
void blood5(object me, object  weapon)
{
   int i,snake_poison;
 object victim,*enemy;
 enemy = me->query_enemy();
 i=sizeof(enemy);
 victim = enemy[random(i)];
 snake_poison=victim->query_condition("snake_poison");
 victim->apply_condition("snake_poison",5+snake_poison);
}
