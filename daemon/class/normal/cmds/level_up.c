//level_up.c by bss
//做个自己玩的, 先做成像赛亚人变身的形式, 以后若要给玩家的话须修改
#include <ansi.h>
inherit F_CLEAN_UP;

int godelay(object me);
int levelup(object me);
void create() { seteuid(getuid());}
int main(object me, string arg)
{
    int now_level,my_exp,max_level;

    if(!wizardp(me)) return 0;
    if(me->query_temp("leveluping")) return notify_fail("你正在集气!!\n");
    my_exp=me->query("combat_exp");
    max_level=my_exp/1000000;
    if(max_level >10) max_level=10;
    now_level=me->query_temp("level/now_level");
    if(now_level==10) return notify_fail("你已经成长到极限了!!\n");
    message_vision(HIY"$N双手握拳，半蹲马步，开始不断的提聚自己的斗气!!\n"NOR,me);
    now_level=now_level+1;
    me->set_temp("level/delay",now_level);
    me->set_temp("leveluping",1);
    call_out("godelay",3,me);
    return 1;
}

int godelay(object me)
{
    int delay,now_level;

    delay=me->query_temp("level/delay");
    if(delay){
      delay--;
      me->set_temp("level/delay",delay);
      message_vision(HIY"$N的斗气不断窜升，气劲不断的在$N身旁翻滚着!!\n"NOR,me);
      call_out("godelay",3,me);
      return 1;
    }
    else{
      now_level=me->query_temp("level/now_level");
      now_level++;
      me->set_temp("level/now_level",now_level);
      call_out("levelup",1,me);
      return 1;
    }
}
int levelup(object me)
{
    int now_level;

    me->delete_temp("leveluping");
    now_level=me->query_temp("level/now_level");
    me->add("mpower",1);
//    me->add_temp("apply/attack",50*now_level);
    me->add_temp("apply/damage",100*now_level);
//    me->add_temp("apply/defense",25*now_level);
    me->add_temp("apply/armor",100*now_level);
    me->apply_condition("level_up",1);
    switch(now_level)
    {
      case 1:
        message_vision(HIY"$N大喝一声，全身金光绽放，变身成为了超级赛亚人!!\n"NOR,me);
        me->set_temp("ride_name",HIY"超级赛亚人"NOR);
        break;
      case 2:
        message_vision(HIC"$N大喝一声，全身蓝光绽放，变身成为了超级赛亚人ＩＩ!!\n"NOR,me);
        me->set_temp("ride_name",HIC"超级赛亚人ＩＩ"NOR);
        break;
      case 3:
        message_vision(HIM"$N大喝一声，全身紫光绽放，变身成为了超级赛亚人ＩＩＩ!!\n"NOR,me);
        me->set_temp("ride_name",HIM"超级赛亚人ＩＩＩ"NOR);
        break;
      case 4:
        message_vision(HBRED+HIW"$N大喝一声，全身红光白光不停的绽放，变身成为了超级赛亚人ＩＸ!!\n"NOR,me);
        me->set_temp("ride_name",HBRED+HIW"超级赛亚人ＩＸ"NOR);
        break;
      case 5:
        message_vision(HBRED+HIY"$N大喝一声，全身红光金光不停的绽放，变身成为了超级赛亚人Ｘ!!\n"NOR,me);
        me->set_temp("ride_name",HBRED+HIY"超级赛亚人Ｘ"NOR);
        break;
      case 6:
        message_vision(HBRED+HIC"$N大喝一声，全身红光蓝光不停的绽放，变身成为了超级赛亚人ＸＩ!!\n"NOR,me);
        me->set_temp("ride_name",HBRED+HIY"超级赛亚人ＸＩ"NOR);
        break;
      case 7:
        message_vision(HBRED+HIM"$N大喝一声，全身红光紫光不停的绽放，变身成为了超级赛亚人ＸＩＩ!!\n"NOR,me);
        me->set_temp("ride_name",HBRED+HIM"超级赛亚人ＸＩＩ"NOR);
        break;
      case 8:
        message_vision(HBCYN+HIW"$N大喝一声，全身蓝光白光不停的绽放，变身成为了超级赛亚人ＸＩＩＩ!!\n"NOR,me);
        me->set_temp("ride_name",HBCYN+HIW"超级赛亚人ＸＩＩＩ"NOR);
        break;
      case 9:
        message_vision(HBCYN+HIY"$N大喝一声，全身蓝光金光不停的绽放，变身成为了超级赛亚人ＩＶ!!\n"NOR,me);
        me->set_temp("ride_name",HBCYN+HIY"超级赛亚人ＩＶ"NOR);
        break;
      case 10:
        message_vision(HBCYN+HIM"$N大喝一声，全身蓝光紫光不停的绽放，变身成为了超级赛亚人Ｖ!!\n"NOR,me);
        me->set_temp("ride_name",HBCYN+HIM"超级赛亚人ＩＶ"NOR);
        break;
      default:
        break;
    }
    return 1;
}

int help(object me)
{
    if(!wizardp(me)) return 0;
    write(@HELP

指令格式：cmd level_up

说明：这个指令可以聚集身上的斗气而成为超级赛亚人。

HELP
);
     return 1;
}
