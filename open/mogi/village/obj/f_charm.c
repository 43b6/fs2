//��ħ��...�����ʹ�õĵ���....����ʹ����busy...  made by eva
#include <ansi.h>

inherit COMBINED_ITEM;

void create()
{
    set_name("��ħ��", ({"charm"}));
    set_weight(30);
        set("long","��������Ļ�ֽ, ������ʹ�õĻ�������ͣ���ֵĶ���!
ʹ�÷���:freeze <����>\n");
        set("unit","��");
        set("base_unit","��");
     set("value",500000);
        set_amount(1);
    setup();
}

void init()
{
    if (this_player()==environment())
        {
        add_action("do_freeze","freeze");
        }
}

int do_freeze(string arg)
{
    object me,target;
    me=this_player();
    if( !me->is_fighting() && !me->is_killing() )
        return notify_fail("���ڲ���ս����, �㲻��ʹ�÷�ħ��!\n");
    if (!arg)
        return notify_fail("����Ҫ��ס˭ѽ?\n");
    target=present(arg,environment(me));
    if (!target->is_character() || target->is_corpse())
        return notify_fail("�Է�����ʹ�÷�ħ����û���õ�!!\n");
    if(target->is_busy())
         return notify_fail("���˵��ж�����ס�˲������÷�ħ����!!\n");
    if (me->query("sen") < (int) (me->query("max_sen") * 0.6) || me->query("sen") < 60)
        return notify_fail("��û���㹻�ľ���ȥ����!\n");
    if (me->is_fighting(target) || me->is_killing(target))
        {
        message_vision(HIW"$N�������: �� �� ֮ �� �� �� ֮ ����\n"NOR,me,target);
        me->start_busy(1);
        message_vision(HIY"$N����һ�ŷ���, ��ȣ��������⡫����\n"NOR,me,target);
     if(arg=="fire king" || arg=="king"){
        me->add("sen",-40);
        add_amount(-1);
      write(HIC"�����ӡ�շɵ�һ�룬�ͱ�����ħ����"HIR"��������"HIC"�ٻ�!!\n"NOR);
        return 1;
                                        }
     else if(random(100)>50) {
      me->add("sen",-40);
      message_vision(HIY"$n˲ʱ����ǿ�������ʹ$N�ķ�ħ������,�޷�����!!\n"NOR,me,target);
      add_amount(-1);
      return 1;
      }
     else {                                   
       target->start_busy(3);
    me->add("sen",-40);
        message_vision(HIC"$n�ܵ�$N��ħ���ķ�ӡ, ����޷�����!!\n"NOR,me,target);
        add_amount(-1);
        return 1;
          }
        }
    else
        {
        return notify_fail("����û���ڹ�����, ��ס������?\n");
        }
}
