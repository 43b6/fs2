#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
inherit F_CLEAN_UP;
int perform(object me, object target)
{
  int skil,new_age,young_time;
  int oldage,mud_age;

   //һ����mud_ageΪ86400
   me = this_player();
   if(me->query("force") < 1000)
          return notify_fail("�����������������ʹ�÷��Ϸ�ͯ���� \n");
   me->add("force",-1000);
//   if( me->query("mud_age" ) < 36*86400)
//          return notify_fail("�㻹����,���ò���ʹ�÷��Ϸ�ͯ����\n");

   if(!me->query("functions/young"))
   return notify_fail("�㲢û��ѧ�������.\n");

   if(me->query("age_young") == 1)
          return notify_fail("���Ѿ������ˡ�\n");

   skil = (int)me->query("functions/young/level");


    if(skil < 30) young_time = 1;
    if(skil < 60) young_time = 2;
    if(skil <100) young_time = 3;

    new_age = skil*86400;


      message_vision(HIC
    "\n\t$N��Ŀ���ſ�����������,$N�����ݼ����������˻�ѧ�仯,����Ĩ��ŷ��һ��."
    "\n\t                     $N��������!!           \n"NOR,me);

me->add("mud_age",-new_age);
me->set("new_age",new_age);
me->set("age_young",1);
me->apply_condition("young",young_time);
if( me->is_fighting() ) me->start_busy(1);
//if(me->query("mud_age") < 0 ) me->set("mud_age",0);

if((int)me->query("mud_age")/86400 > skil && skil <= 100) {
     function_improved("young",random(500)); }

     me->start_busy(1);


  return 1;
}

