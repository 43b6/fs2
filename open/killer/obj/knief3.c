#include <weapon.h>
#include <ansi.h>
inherit THROWING;
object me;
void create()
{
     set_name("������",({"iron"}));
     set_weight(15);
     if( clonep() )
         set_default_object(__FILE__);
     else {
       set("unit","��");
       set("base_unit","��");
       set("long","�������������ص�����������Ե��˵�Ҫ�������˺���\n");
       set("value",1);
       set("no_sell",1);
       set("material", "steel");
       set("wield_msg","$N����$n,�о������ܲ���\n");
       set("unwield_msg", "$N��$n��������\n");
     }
      init_throwing(40);
      set_amount(1);
      setup();
}

mixed hit_ob( object me,object victim)
{
 int i,a,b,cor;
 object *enemy;

 cor=me->query_skill("throwing",1);
 if(me->is_fighting()&&query("equipped"))
 {
  if(random(me->query_skill("dodge",1)) > 60)
  {
   enemy=me->query_enemy();
   i=random(sizeof(enemy));
   message_vision(HIY"$N��$n������������Ѩ��������Ϊ֮һ��\n"NOR,me,enemy[i]);
   enemy[i]->start_busy(1);
  } 
 }
}

int wield()
{
 if(this_player()->query_skill_mapped("throwing") != "rain-throwing")
    return notify_fail("����ɱ��ר�õĶ���\n");
 if(this_player()->query_skill("throwing") < 40 )
     return notify_fail("С���ѣ������ַ�����һ�㣬���ðɣ�\n");
 else 
 {
::wield();
  }
  return 1;
}
