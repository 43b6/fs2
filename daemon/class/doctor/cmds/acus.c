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
    if(me->query("family/family_name")!="������" && !wizardp(me))
        return notify_fail("�㲻��ҽ������ô���ܻ�ʹ��Ԫ�������\n");
    if((int)me->query_skill("cure", 1) <= 90)
        return notify_fail("���ҽ��̫�ͣ��޷�ʹ����Ԫ�������\n");
    if((int)me->query("combat_exp") < 1500000)
        return notify_fail("��ľ���ֵ̫�ͣ��޷�ʹ����Ԫ�������\n");
    if((int)me->query("functions/break-kee/level") < 60)
        return notify_fail("��ġ���Ѩָ��̫���ˣ��޷�ʹ����Ԫ�������\n");
    if((int)me->query("functions/gold-needle/level") < 60)
        return notify_fail("��ġ������Ѩ��̫���ˣ��޷�ʹ����Ԫ�������\n");
    if(me->query_temp("mpower") == 1)
        return notify_fail("���Ѿ����Լ����ĸ����һ���ˣ��������ڣ�\n");
    weapon=me->query_temp("weapon");
    if(!weapon)
        return notify_fail("���������룬Ҫ��ɶ��ʹ��Ԫ�������\n");
    if(weapon->query("skill_type") != "stabber")
        return notify_fail("���������룬Ҫ��ɶ��ʹ��Ԫ�������\n");
//��ȫ��������һ��
    if((int)me->query("gin") < 500
        || (int)me->query("kee") < 500
        || (int)me->query("sen") < 500
        || (int)me->query("force") < 500)
        return notify_fail("ι���ٶ����������������Ϳ츺�ɲ���ࡣ�\n");

    message_vision(HIC"$N�������е��룬ʩչ"HBBLU+HIR"--="HIY"��Ԫ�����"HIR"=--"NOR+HIC"����׼�Լ���Ѩ�����˽�ȥ...\n\n"NOR,me);
    message_vision(HIG"$N˲��е������������ƺ������й�ԴԴ���ϵ�����������������������\n\n"NOR,me);
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
    message_vision(HIB"$N���Լ�����ʩչ����Ԫ�����������ʧЧ��...\n"NOR,me);
    me->delete_temp("mpower");
    if( lv < 100) function_improved("acus",random(401)+50);
    return ;
}

int acus_fail(object me)
{
    if(!me) return 1;   
    message_vision(HIB"$N���Լ�����ʩչ����Ԫ�����������ʧЧ��...\n"NOR,me);
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
//��yu-needle���и���ǿ������temp�������ﴥ��
    if(lv >=50 && !me->query_temp("crazy_hit") && 30 > random(100))
      me->set_temp("crazy_hit");
    if(lv <= 25)
    {
        if((me->query("gin")-sub) < 500) return acus_fail(me);
        message_vision(HIR"$N��ĵ��˿�ͻȻ������ʹ��$N�ľ���������...\n" NOR, me);
        me->receive_damage("gin", sub);
        call_out("abate", time, me);
        return 1;
    }
    sub = (int)me->query_skill("cure",1)*2;
    sub=damage-sub;
    if(lv >= 26 && lv <= 50)
    {
        if((me->query("kee")-sub) < 500) return acus_fail(me);
        message_vision(HIR"$N��ĵ��˿�ͻȻ������ʹ��$N����Ѫ������...\n" NOR, me);
        me->receive_damage("kee", sub);
        call_out("abate", time, me);
        return 1;
    }
    sub = (int)me->query_skill("cure",1);
    sub=damage-sub;
    if(lv >= 51 && lv <= 75)
    {
        if((me->query("sen")-sub) < 500) return acus_fail(me);
        message_vision(HIR"$N��ĵ��˿�ͻȻ������ʹ��$N���������...\n" NOR, me);
        me->receive_damage("sen", sub);
        call_out("abate", time, me);
        return 1;
    }
    sub = (int)me->query_skill("cure",1)/2;
    sub=damage-sub;
    if(lv >= 76)
    {
        if((me->query("force")-sub) < 500) return acus_fail(me);
        message_vision(HIR"$N��ĵ��˿�ͻȻ������ʹ��$N������������...\n" NOR, me);
        me->add("force", -sub);
        call_out("abate", time, me);
        return 1;
    }
    return 1;
}
