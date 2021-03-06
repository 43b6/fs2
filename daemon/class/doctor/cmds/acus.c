// cmds acus for doctor by nike - 9/16/2001 -

#include <ansi.h>
inherit F_FUNCTION;
inherit F_GUILDCMDS;

void do_acus(object me);
int abate(object me);
int acus_fail(object me);

int main(object me,string arg)
{
    int time, lv;
    object weapon;
    
    if(!me) return 1;
    if(me->query("doctor/acus") && !wizardp(me)) return 0;
    if(me->query("family/family_name")!="银针门" && !wizardp(me))
        return notify_fail("你不是医生，怎么可能会使玄元针灸术？\n");
    if((int)me->query_skill("cure", 1) <= 90)
        return notify_fail("你的医术太低，无法使出玄元针灸术！\n");
    if((int)me->query("combat_exp") < 1500000)
        return notify_fail("你的经验值太低，无法使出玄元针灸术！\n");
    if((int)me->query("functions/break-kee/level") < 60)
        return notify_fail("你的「破穴指”太低了，无法使出玄元针灸术！\n");
    if((int)me->query("functions/gold-needle/level") < 60)
        return notify_fail("你的「金针封穴”太低了，无法使出玄元针灸术！\n");
    if(me->query_temp("mpower") == 1)
        return notify_fail("你已经把自己扎的跟刺猬一样了，还想扎ㄚ？\n");
    weapon=me->query_temp("weapon");
    if(!weapon)
        return notify_fail("你手中无针，要拿啥来使玄元针灸术？\n");
    if(weapon->query("skill_type") != "stabber")
        return notify_fail("你手中无针，要拿啥来使玄元针灸术？\n");
//安全数，定高一点
    if((int)me->query("gin") < 500
        || (int)me->query("kee") < 500
        || (int)me->query("sen") < 500
        || (int)me->query("force") < 500)
        return notify_fail("喂！再多扎个几针你的身体就快负荷不了唷！\n");

    message_vision(HIC"$N拿起手中的针，施展"HBBLU+HIR"--="HIY"玄元针灸术"HIR"=--"NOR+HIC"，对准自己的穴道扎了进去...\n\n"NOR,me);
    message_vision(HIG"$N瞬间感到能力倍增，似乎体内有股源源不断的能量正欲爆发而出！！！\n\n"NOR,me);
    lv = (int)me->query("functions/acus/level")*4;
    me->start_call_out((:call_other, __FILE__, "do_acus", me:), lv);
    lv = (int)me->query("functions/acus/level");
    if(lv > 30)
    lv = 30;
    time = lv + random(10);
    call_out("abate", time, me);
    me->set_temp("mpower",1);
    if(me->is_fighting()) me->start_busy(1);
    return 1;
}

void do_acus(object me)
{
    int lv;

    if(!me) return ;
    lv = (int)me->query("functions/acus/level");
    message_vision(HIB"$N对自己的所施展的玄元针灸术慢慢的失效了...\n"NOR,me);
    me->delete_temp("mpower");
    if( lv < 100) function_improved("acus",random(401)+50);
    return ;
}

int acus_fail(object me)
{
    if(!me) return 1;   
    message_vision(HIB"$N对自己的所施展的玄元针灸术慢慢的失效了...\n"NOR,me);
    me->delete_temp("mpower");
    return 1;
}

int abate(object me)
{
    int lv, time, sub, damage;

    if(!me) return 1;
    lv=(int)me->query("functions/acus/level");
    if(me->is_fighting())
      damage=700+random(100);
    else
      damage=500+random(100);
    sub = (int)me->query_skill("cure",1)*3;
    sub=damage-sub;
    if(sub<0) sub=0;
    lv = (int)me->query("functions/acus/level");
    time = (int)me->query("functions/acus/level");
    time = time + 10 + random(5);
    if(time > 30)
    time = 30;
    if(!me->query_temp("mpower")) return 1;
//把yu-needle里有个加强攻击的temp设在这里触发
    if(lv >=50 && !me->query_temp("crazy_hit") && 30 > random(100))
      me->set_temp("crazy_hit");
    if(lv <= 25)
    {
        if((me->query("gin")-sub) < 500) return acus_fail(me);
        message_vision(HIR"$N针灸的伤口突然隐隐作痛，$N的精力减少了...\n" NOR, me);
        me->receive_damage("gin", sub);
        call_out("abate", time, me);
        return 1;
    }
    sub = (int)me->query_skill("cure",1)*2;
    sub=damage-sub;
    if(lv >= 26 && lv <= 50)
    {
        if((me->query("kee")-sub) < 500) return acus_fail(me);
        message_vision(HIR"$N针灸的伤口突然隐隐作痛，$N的气血减少了...\n" NOR, me);
        me->receive_damage("kee", sub);
        call_out("abate", time, me);
        return 1;
    }
    sub = (int)me->query_skill("cure",1);
    sub=damage-sub;
    if(lv >= 51 && lv <= 75)
    {
        if((me->query("sen")-sub) < 500) return acus_fail(me);
        message_vision(HIR"$N针灸的伤口突然隐隐作痛，$N的神瞑减少了...\n" NOR, me);
        me->receive_damage("sen", sub);
        call_out("abate", time, me);
        return 1;
    }
    sub = (int)me->query_skill("cure",1)/2;
    sub=damage-sub;
    if(lv >= 76)
    {
        if((me->query("force")-sub) < 500) return acus_fail(me);
        message_vision(HIR"$N针灸的伤口突然隐隐作痛，$N的内力减少了...\n" NOR, me);
        me->add("force", -sub);
        call_out("abate", time, me);
        return 1;
    }
    return 1;
}
