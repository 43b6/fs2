#include <weapon.h>
#include <ansi.h>
inherit THROWING;
object me;
void create()
{
     set_name("��Ҷ�ɵ�",({"ya knief","knief"}));
     set_weight(7);
     if( clonep() )
         set_default_object(__FILE__);
     else {
       set("unit","֧");
       set("base_unit","֧");
       set("long","�����صķɵ�������ʹ�õ�Ƭ�䱡������������\n");
       set("value",1);
       set("no_sell",1);
       set("material", "silver");
       set("wield_msg","$N����$n,�о������ܲ���\n");
       set("unwield_msg", "$N��$n��������\n");
     }
      init_throwing(30);
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
   message_vision(HIG"$N��$n����Ҷ�ɵ�����Ҫ�����˿�����������Ѫ\n"NOR,me,enemy[i]);
   COMBAT_D->report_status(enemy[i],1);
   enemy[i]->add("kee",-random(cor/2));
  } 
 }
}

int wield()
{
 if(this_player()->query_skill_mapped("throwing") != "rain-throwing")
    return notify_fail("����ɱ��ר�õĶ���\n");
 if(this_player()->query_skill("throwing") < 30 )
     return notify_fail("С���ѣ������ַ�����һ�㣬���ðɣ�\n");
 else 
 {
::wield();
  }
  return 1;
}
