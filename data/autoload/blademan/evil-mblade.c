#include <weapon.h>
#include <ansi.h>
#include <combat.h>
inherit BLADE;
object ob=this_object();
void create()
{
	set_name("���������ꡯ",({"evil-mblade","blade"}));
	set_weight(300);
set("mblade-mark",1);
        set("no_sell",1);
      set("no_get",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_auc",1);
        if( clonep() )
          set_default_object(__FILE__);
        else 
        {
          set("unit","��");
set("long","���������ꡯ������͸���������������͸��������������ɫ�ĹǼ������Գ������䴦��ͻ����С���У�����ɱ������Ī����С�\n");
          set("value", 100);
          set("material","crimsonsteel");
	}
	init_blade(1);
  	setup();
}	
void init()
{
        add_action("do_blood","blood");
        add_action("do_power","power");
}

int do_blood(string str)
{  	
	object me=this_player();
        string name=ob->query("name");
        if( str != ob->query("id") )
	   return notify_fail("���������ȫ����\n");
	if( ob->query("blooded") )
	  return notify_fail("��������ѵõ����������\n");
	if( ob->query("equipped") == "wielded" )
	  return notify_fail("���Ƚ�����ж�¡�\n");
	message_vision("[31m$N��������"+name+"������һ��, ��Ѫ��Ȫӿ���ܱ�����"+name+"��\n
һ���, ��Ѫ�ѱ�"+name+"���ɴ���,��"+name+"Ҳ��Ȼ�ķ���һ��ҫ�۵�[1;5;33m��â[0;31m��[0m\n",me);
set_name("[1;34m��[0;34m��[1;34m��[0;34mM[1;31m��[1;37m��[1;32m��[1;37m��[1;32mB[1;31m��[0m",({"evil-mblade","blade"}));
set("wield_msg","\n$N���Ϻ�Ȼ����һ��$n��������ӳһƬ���������Ӷ�ʱ������һ����������������\n\n");
set("unwield_msg","\n$N���ϵ�$n�����°��͹���أ���Ȼ��������ʧ���١�\n\n");
	set("weapon_prop/damage",100);
	set("value", 100);
	set("blooded",1);
set("mblade-mark",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
     set("no_get",1);
        set("no_drop",1);
        set("no_auc",1);
        me->set("kee",1);
        me->set("gin",1);
        me->set("sen",1);
        setup();
	return 1;
}

int do_power(string str)
{
        object weapon,me;
        me=this_player();
        if(me->query("evil-mblade") != 1)
        return notify_fail("���޷������˵���\n");
        if(!objectp(weapon=me->query_temp("weapon"))
        || (string)weapon->query("skill_type")!="blade")
          return notify_fail("Ҫ�е������þۻ�����\n");
   if(ob->query("blooded")!=1)
   return notify_fail("Ҫ����Ѫ(blood)ι��ĵ�ࡣ�\n");
        if(weapon->query_temp("evil-mblade")==1)
          return notify_fail("���Ѿ������ˡ�\n");
        message_vision(
  HIR "$N�Ե����죬��ʱ����������$n"+HIR+"��\n"NOR,me,weapon);
me->add_temp("apply/damage",100);
me->add_temp("apply/attack",100);
me->add_temp("apply/armor",100);
me->add_temp("apply/defense",100);
        weapon->set_temp("evil-mblade",1);
me->start_call_out((:call_other,__FILE__,"remove_effect",weapon,me:),me->query_skill("blade",1));
        return 1;
}
void remove_effect(object weapon,object me)
{
me->add_temp("apply/damage",-100);
me->add_temp("apply/attack",-100);
me->add_temp("apply/armor",-100);
me->add_temp("apply/defense",-100);
weapon->delete_temp("evil-mblade");
message_vision(HIW"������������飬��ʱ��$n"+HIW+"��ɢ������\n"NOR,me,weapon);
}
int query_autoload()
{
	return 1;
}
