//dancerboots//
#include <ansi.h>
inherit EQUIP;
object me=this_player();
void create()
{
        set_name(MAG "����ѥ" NOR,({"boots"}) );
        set_weight(2000);
        if ( clonep() )
                set_default_object(__FILE__);
        else{
                set("long","
����ˮ���ר�õ���ѥ���ഫΪ�����������ķ������ƣ��ǵ���ۼ���
�������ഫ���в���˼��֮Ч��\n");
                set("unit","˫");
                set("value",20000);
                set("armor_prop/armor",20);
               set("armor_prop/dodge",8);
//                set("armor_prop/move",8);
				set("no_save",1);
                set("material","leather");
                set("armor_type","boots");
				set("gender_only","Ů��");
                         
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
     if(str=="all" || str=="boots")
{
      ::wear();
	  if( query("equipped") )
     {
if(!me) me=environment();
if(!living(me)) me=this_player();
if(!me) me=previous_object();
if(me)
message_vision(HIM"$N��������ѥ��Ȼ�е�������ӯ������������Ҫ��һ�㡣\n"NOR,me);
        
     }
	 if(me)
	  if(!me->query_temp("have_wear_boots"))
	  {
	  if(me->query("class")=="dancer")  me->add_temp("apply/unarmed", 5);
      if(me->query("class")=="dancer")  me->add_temp("apply/dodge",8);
	  me->set_temp("have_wear_boots",1);
	  }
	  
}
}

int do_remove(string str)
{
     if(str=="boots"||str=="all") 
	 { if( query("equipped") )
     {
if(!me) me=environment();
if(!living(me)) me=this_player();
if(!me) me=previous_object();
if(me)
message_vision(YEL"$N������ѥ�����������е�����һ�����ָֻ�ԭ״�ˡ�\n"NOR,me);
        
     }
	 if(me->query_temp("have_wear_boots")==1)
	  {
	  if(me->query("class")=="dancer")  me->add_temp("apply/unarmed", -5);
      if(me->query("class")=="dancer")  me->add_temp("apply/dodge",-8);
	  me->delete_temp("have_wear_boots");
	  }
	  
	 }
}
