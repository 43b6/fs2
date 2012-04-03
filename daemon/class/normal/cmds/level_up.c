//level_up.c by bss
//�����Լ����, �������������˱������ʽ, �Ժ���Ҫ����ҵĻ����޸�
#include <ansi.h>
inherit F_CLEAN_UP;

int godelay(object me);
int levelup(object me);
void create() { seteuid(getuid());}
int main(object me, string arg)
{
    int now_level,my_exp,max_level;

    if(!wizardp(me)) return 0;
    if(me->query_temp("leveluping")) return notify_fail("�����ڼ���!!\n");
    my_exp=me->query("combat_exp");
    max_level=my_exp/1000000;
    if(max_level >10) max_level=10;
    now_level=me->query_temp("level/now_level");
    if(now_level==10) return notify_fail("���Ѿ��ɳ���������!!\n");
    message_vision(HIY"$N˫����ȭ�����������ʼ���ϵ�����Լ��Ķ���!!\n"NOR,me);
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
      message_vision(HIY"$N�Ķ������ϴ������������ϵ���$N���Է�����!!\n"NOR,me);
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
        message_vision(HIY"$N���һ����ȫ�������ţ������Ϊ�˳���������!!\n"NOR,me);
        me->set_temp("ride_name",HIY"����������"NOR);
        break;
      case 2:
        message_vision(HIC"$N���һ����ȫ���������ţ������Ϊ�˳��������ˣɣ�!!\n"NOR,me);
        me->set_temp("ride_name",HIC"���������ˣɣ�"NOR);
        break;
      case 3:
        message_vision(HIM"$N���һ����ȫ���Ϲ����ţ������Ϊ�˳��������ˣɣɣ�!!\n"NOR,me);
        me->set_temp("ride_name",HIM"���������ˣɣɣ�"NOR);
        break;
      case 4:
        message_vision(HBRED+HIW"$N���һ����ȫ����׹ⲻͣ�����ţ������Ϊ�˳��������ˣɣ�!!\n"NOR,me);
        me->set_temp("ride_name",HBRED+HIW"���������ˣɣ�"NOR);
        break;
      case 5:
        message_vision(HBRED+HIY"$N���һ����ȫ�����ⲻͣ�����ţ������Ϊ�˳��������ˣ�!!\n"NOR,me);
        me->set_temp("ride_name",HBRED+HIY"���������ˣ�"NOR);
        break;
      case 6:
        message_vision(HBRED+HIC"$N���һ����ȫ�������ⲻͣ�����ţ������Ϊ�˳��������ˣأ�!!\n"NOR,me);
        me->set_temp("ride_name",HBRED+HIY"���������ˣأ�"NOR);
        break;
      case 7:
        message_vision(HBRED+HIM"$N���һ����ȫ�����Ϲⲻͣ�����ţ������Ϊ�˳��������ˣأɣ�!!\n"NOR,me);
        me->set_temp("ride_name",HBRED+HIM"���������ˣأɣ�"NOR);
        break;
      case 8:
        message_vision(HBCYN+HIW"$N���һ����ȫ������׹ⲻͣ�����ţ������Ϊ�˳��������ˣأɣɣ�!!\n"NOR,me);
        me->set_temp("ride_name",HBCYN+HIW"���������ˣأɣɣ�"NOR);
        break;
      case 9:
        message_vision(HBCYN+HIY"$N���һ����ȫ�������ⲻͣ�����ţ������Ϊ�˳��������ˣɣ�!!\n"NOR,me);
        me->set_temp("ride_name",HBCYN+HIY"���������ˣɣ�"NOR);
        break;
      case 10:
        message_vision(HBCYN+HIM"$N���һ����ȫ�������Ϲⲻͣ�����ţ������Ϊ�˳��������ˣ�!!\n"NOR,me);
        me->set_temp("ride_name",HBCYN+HIM"���������ˣɣ�"NOR);
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

ָ���ʽ��cmd level_up

˵�������ָ����Ծۼ����ϵĶ�������Ϊ���������ˡ�

HELP
);
     return 1;
}
