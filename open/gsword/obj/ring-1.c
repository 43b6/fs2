// made by ccat
// ����,����������call һ�����ι��޵�ȱ��,ʹ�õı���Ҳ��Ϊ��.

#include <ansi.h>
#include <armor.h>
inherit EQUIP;
object user;
int cor;
void create()
{
     set_name( "�챦ʯָ��" ,({"ruby_ring", "ring"}));
     set_weight(2500);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","һֻ��������������챦ʯָ��,��˸������ĺ�ɫ��â.\n");
            set("unit", "��");             
            set("value",5000);
            set("material","steal");
            set("no_sell", 1);         //��Ȼ�͵ö��� action sell
            set("armor_type","finger");            
            set("armor_prop/armor",7);
           }         
        setup();
}
void init()
{
     add_action("do_drop","drop"); 
     add_action("do_auc","auc"); 
     add_action("do_wear","wear");
     add_action("do_give","give");
     add_action("do_remove","remove");
}
int do_wear(string str)
{ 

     ::wear(); 
     if( query("equipped") ) 
     {
        user = this_player();     // ȡ��ʹ����
        cor = user->query("cor");
        cor = cor *2;
        message_vision("$N�����˺챦ʯָ��,���������˵������.\n",user);
        set_heart_beat(1);
     } 
}
int do_drop(string str)
{  
   if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N�����˺챦ʯָ��,�챦ʯ����ĺ��Ҳ��֮����.\n",user);
        set_heart_beat(0);
     }    
}    
 int do_give(string str)
{  
  if(str=="ruby_ring" || str=="all") 
     if( query("equipped") )
     { 
        message_vision("$N�����˺챦ʯָ��,�챦ʯ����ĺ��Ҳ��֮����.\n",user); 
        set_heart_beat(0);
     }
}
int do_remove(string str)
{
   if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     {
        if(user)
        message_vision("$N�����˺챦ʯָ��,�챦ʯ����ĺ��Ҳ��֮����.\n",user);
        set_heart_beat(0);
     }   
}                       
int do_auc(string str)
{
  if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     { 
        message_vision("$N�����˺챦ʯָ��,�챦ʯ����ĺ��Ҳ��֮����.\n",user);
        set_heart_beat(0);
     } 
}     
void heart_beat()
{
  if( !objectp(user) ) 
	{
	set_heart_beat(0);
	return;
	}
  if( user->is_fighting() && query("equipped") )
  {
    if( random(100) > 80)
    {
    user->receive_curing("kee",cor);
    user->receive_heal("kee",cor);
    message_vision(HIM+"�챦ʯָ�䷢��һ�����¢����$N,$N���˿ں�����.\n"+NOR,user);   
    }
  }
  return;
}  

