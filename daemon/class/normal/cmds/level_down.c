#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

void create() { seteuid(getuid());}
int main(object me, string arg)
{
    int now_level,my_exp,max_level;

    if(!wizardp(me)) return 0;
    if(me->query_temp("leveluping")) return notify_fail("��ʱ��ɢȥ�������߻���ħ�!!\n");
    if(!me->query_temp("level")) return notify_fail("�㲢û�м���!!\n");
    now_level=me->query_temp("level/now_level");
    message_vision(HIG"$N�������һ��������ԭ���ۼ����Լ����ԵĶ���ɢȥ!!\n"NOR,me);
    me->delete_temp("level");
    me->delete_temp("leveluping");
    me->delete_temp("ride_name");
    me->delete("mpower");
    me->clear_condition("level_up");
    while(now_level >0)
    {
//      me->add_temp("apply/attack",-(50*now_level));
      me->add_temp("apply/damage",-(100*now_level));
//      me->add_temp("apply/defense",-(25*now_level));
      me->add_temp("apply/armor",-(100*now_level));
      now_level--;
    }
    return 1;
}
