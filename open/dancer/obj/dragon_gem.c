// sp force eq by cgy
#include <ansi.h>
#include <armor.h>
inherit EQUIP;
object me=this_player();

void create()
{
     set_name(HIC"����������"NOR , ({"dragon_gem"}) );
     set_weight(1000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "��");
            set("value", 0);
            set("material","steel");
            set("long","����һ�ϵȺ����������֮���壬����ȥ������ĸо���\n");
set("wear_msg","$N����$n����ʱ�е�һ��ů�����ȫ�� \n");
set("remove_msg","$N������$n,���ϵ�����о�Ҳ��֮��ʧ�� \n");
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
		set("no_save",1);
		set("armor_prop/armor",10);
//		set("armor_prop/force",50);
		set("armor_type","neck");
//		set("need_class","fighter");
		set("need_exp",1000000);
  
			}
            setup();
}
void init()
{
     add_action("do_wear","wear");
     add_action("do_remove","remove");
}
int do_wear(string str)
{
     if(str=="all" || str=="dragon_gem")
{
      ::wear();
	  if( query("equipped") )
     {
if(!me) me=environment();
if(!living(me)) me=this_player();
if(!me) me=previous_object();
if(me)
message_vision(HIM"$N������������壬��ʱ�е�һ��ů�����ȫ��\n"NOR,me);
        
     }
	 if(me)
	  if(!me->query_temp("have_wear_dragongem"))
	  {
	  if(me->query("class")=="fighter") { me->add_temp("apply/force",50);}
      else {me->add_temp("apply/force",10);}
	  me->set_temp("have_wear_dragongem",1);
	  }
	  
}
}

int do_remove(string str)
{
     if(str=="dragon_gem"||str=="all") 
	 { if( query("equipped") )
     {
if(!me) me=environment();
if(!living(me)) me=this_player();
if(!me) me=previous_object();
if(me)
message_vision(YEL"$N�����˹���������,���ϵ�����о�Ҳ��֮��ʧ��\n"NOR,me);
        
     }
	 if(me->query_temp("have_wear_dragongem")==1)
	  {
	  if(me->query("class")=="fighter")  {me->add_temp("apply/force", -50);}
      else {me->add_temp("apply/force",-10);}
	  me->delete_temp("have_wear_dragongem");
	  }
	  
	 }
}


