#include <armor.h>
#include <ansi.h>
inherit WRISTS;
object user;
object ob=this_object();
void create()
{
        	set_name(HIY"���˲ݻ�"NOR, ({"lucky grasslink", "lucky", "grasslink"}));
        	set_weight(50);
       		if( clonep() )
                set_default_object(__FILE__);
        	else {
        	set("long", "һ��������������������ϵĲݻ�����˵�����ô����������ܸ�����\n"
		   +"���ռ�����ؽ�ʧ���������ϵĸ�ʽ�������\n");
	        set("unit", "��");
	        set("value", 1000000);
	        set("material", "steel");
                set("no_steal",1);
		set("type", 1); 
		set("no_give",1);
		set("no_sell",1);
                set("armor_prop/armor", 15);
		set("armor_prop/dodge", 5);
		set("armor_prop/parry", 5);
		set("armor_prop/attack", 5);
		set("armor_prop/force", 5);
        }
        setup();
}

void init()
{
     add_action("do_drop","drop"); 
     add_action("do_auc","auc"); 
     add_action("do_wear","wear");
     add_action("do_remove","remove");
}

int do_wear(string str)
{ 

     ::wear(); 
     if ( query("equipped") ) 
     {
	user = this_player();	  // ȡ��ʹ����
	message_vision("$N������$n���о�������Ȼ����һ˿����ĸо�!!\n",user,ob);
	user->set_temp("bless",1);
	set_heart_beat(1);
     } 
}

int do_drop(string str)
{  
   if (str=="lucky grasslink" || str=="all" || str=="lucky" || str=="grasslink")
     if( query("equipped") )
     {
	message_vision("$Nж����$n������ĸо�Ҳ������ʧ��!!\n",user,ob);
	user->delete_temp("bless");
	set_heart_beat(0);
     }	  
}

int do_remove(string str)
{
   if (str=="lucky grasslink" || str=="all" || str=="lucky" || str=="grasslink")
     if( query("equipped") )
     {
	message_vision("$Nж����$n������ĸо�Ҳ������ʧ��!!\n",user,ob);
	user->delete_temp("bless");
	set_heart_beat(0);
     }
}
		
int do_auc(string str)
{
   if (str=="lucky grasslink" || str=="all" || str=="lucky" || str=="grasslink")
     if( query("equipped") )
     { 
	message_vision("$Nж����$n������ĸо�Ҳ������ʧ��!!\n",user,ob);
	user->delete_temp("bless");
	set_heart_beat(0);
     }
}     
