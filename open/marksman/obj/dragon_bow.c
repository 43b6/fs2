#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

 set_name(HIR"����"HIY"��"NOR,({"dragon bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
         set("long","һ�����������ƳɵĹ���\n");

set("material","steel");
        }
init_bow(60);
set("value",1);
setup();
}
void init()
{
        add_action("do_perform","supershoot");
}
int do_perform()
{
        object me,*target,room;
        int i,j,k,l,damage;

        me=this_player();
        if(random(2)) {
        damage=1000; }
        else {
        damage=500;
        }
        room= environment(me);
target = me->query_enemy(room);
i=sizeof(target);
if(me->query("family/family_name")!="������")
                 return notify_fail("���޷�ʹ���˹����ؼ��ܼ�!!!\n");
if(!me->is_fighting()) return notify_fail("ֻ����ս���в���ʹ��\n");
if(80>random(100)) {
        message_vision("

          $N"HIR"���һ�� : "BLINK+HIY"����  Х  ��  �족"NOR"

       "HIR" ���������񹭻����һ�����������˷�ȥ��һʱ���ذ�

       "HIR"ֻ�����������ٵ��ڵ��˵����ϵ��˼��£�ÿ�������Ѫ����

       \n\n"NOR,me);
        for(j=0;j<i;j++)
        {
             if(!target[j]) continue;
            if( target[j]->is_character() && !target[j]->is_corpse() && living(target[j]))
            {
            target[j]->add("kee",-damage);
            me->kill_ob(target[j]);
            COMBAT_D->report_status(target[j],1);
            }
        }
} else {
message_vision(HIW"�������ֻ���һ����˺��ܿ�ͻָ��ˡ�\n"NOR,me);
}
if(me->query("id")!="master lee") {
            me->start_busy(1);
}
  return 1;
}
