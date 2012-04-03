#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
int exert(object me, object target)
{
        mapping poison_type = ([
                        "snake" : "snake_poison",
                   "firefinger" : "fire_poison",
                        "rose"  : "rose_poison",
                        "dark"  : "dark_poison",
                        "five"  : "five_poison",
                        "lyssa" : "lyssa",
                        ]);
        mapping poison_name = ([
                        "snake" : "�߶�",
                   "firefinger" : "����а��",
                        "rose"  : "��õ�嶾",
                        "dark"  : "��涾",
                        "five"  : "�嶾����",
                        "lyssa" : "��Ȯ��",
                        ]);
        mapping need_lv = ([
                        "snake" : 10,
                   "firefinger" : 20,
                        "rose"  : 30,
                        "dark"  : 50,
                        "five"  : 60,
                        "lyssa" : 60,
                        ]);
        mapping fp_cost = ([
                        "snake" : 1,
                   "firefinger" : 1,
                        "rose"  : 3,
                        "dark"  : 4,
                        "five"  : 6,
                        "lyssa" : 6,
                        ]);
        string type;
        int my_lv = me->query_skill("shinnoforce", 1);
        int factor, need, total, my_force = me->query("force");
        if(!type=me->query("env/cure_poison"))
        return notify_fail("�����趨������ֶ���(set sure_poison +poisoname)��\n");
        if(undefinedp(poison_type[type]) || my_lv < need_lv[type])
        return notify_fail("�㲢��������ֶ���\n");
        if(my_force < 50 )
        return notify_fail("�������������޷��ƶ���\n");
        if( me->is_fighting() )
        return notify_fail("ս���в��ܱƶ���\n");
        me == target ? factor = 3 : factor = 2 ;
        total = target->query_condition(poison_type[type]);
        if((need=total*fp_cost[type])!=0)
{
need = need / factor;
if(my_force < need) {
message_vision(HIW"$N����"HIY"�����ľ�"HIW"���Ѿ�������$n�Ƴ�һЩ"+poison_name[type]+"��\n",me,target);
me->set("force",0);
target->apply_condition(poison_type[type],total-(int)my_force*factor/fp_cost[type]);
                        }
                else {
message_vision(HIW"$Nϯ�����ȶ���,�����ķ��еİ���"HIY"�����ľ�"HIW"��"+poison_name[type]+"���Ƴ����⡣\n"NOR, me);
       me->add("force", -need);
       target->apply_condition(poison_type[type], 0);
                    }
                return 1;
        }
    if(me==target)
        return notify_fail("�㲢û�������ֶ���\n");
    else
        return notify_fail("����û�������ֶ���\n");
}


