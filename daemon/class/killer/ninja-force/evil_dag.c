#include <weapon.h>
#include <ansi.h>
inherit DAGGER;
void create()
{
        set_name("ħ��ذ", ({ "evil dagger","dagger" }) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����һ������B�����񹦽������ڶ������γɵ�ذ�ס�\n");
                set("value", 0);
                set("no_auc",1);
                set("no_sell",1);
                set("no_give",1);
                set("no_put",1);
                set("no_drop",1);
                set("no_get",1);
                set("material", "steel");
        }
        init_dagger(90);
        set("wield_msg", "$N�ӻ�������һ��$n�������С�\n");
        set("unwield_msg", "$N�����е�$n���뻳�С�\n");
        setup();
}
mixed hit_ob( object me,object victim)
{
 int fun,h,i;
 object weapon;
 me=this_player();
 fun=me->query("functions/make-dagger/level");
 h=me->query("darkforce/make_dag/exp");
 if (h>300) h=300;
 if(me->is_fighting()&&query("equipped")&&me->query("darkforce/make_dag/exp") > 0 && me->query("bellicosity") > 500
    && me->query("force") > 200 && me->query_temp("earthkill")!=1)
 {
  if(random(fun) > 70)
  {
   message_vision(HIC"\n$N͸��������ȡ������ľ���!!\n"NOR,me);
   me->receive_curing("kee",h);
   me->receive_heal("kee",h);
   me->add("bellicosity", -50);
   if (me->query("force") < me->query("max_force")/2) {me->add("force",h);}
  } 
 }
}
int wield()
{
if(this_player()->query_skill("shadow-kill",1) > 0)
return notify_fail("����������Ӱذ�ײ���ʹ�ô�װ��!!\n");
 else 
 {
::wield();
  }
  return 1;
}
