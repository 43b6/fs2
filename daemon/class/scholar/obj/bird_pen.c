// made by ccat
// ����,����������call һ�����ι��޵�ȱ��,ʹ�õı���Ҳ��Ϊ��.

#include <ansi.h>
#include <weapon.h>
inherit STABBER;
object user;
int sp,pp;
void create()
{
     set_name("�߲ʷ�˱�",({"bird_pen"}));
     set_weight(20000);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
     set("long","���÷�����ϵ���ë,�뾫������֮��.\n");
            set("unit", "��");             
            set("value",70000);
            set("material","blacksteal");
           }         
        init_stabber(95);
        setup();
}
void init()
{
     add_action("do_drop","drop"); 
     add_action("do_auc","auc"); 
     add_action("do_wield","wield");
     add_action("do_give","give");
     add_action("do_unwield","unwield");
}
int do_wield(string str)
{ 
     int my_int,my_per,my_literate;
     ::wield();
     if( query("equipped") ) 
     {
        user = this_player();     // ȡ��ʹ����
        my_int = user->query("int",2);
        my_per = user->query("per",2);
        my_literate = user->query_skill("literate",1);
        if(my_literate > 50)
        my_literate = 50;
        sp = my_per*1 + my_literate;  // �ع���
        pp = my_literate + my_int*2 ;  // ǿ��
        message_vision("��˱ʸ���$N����Ϣ,������һ�����õĹ�â.\n",user);
        set_heart_beat(1);
     } 
}
int do_drop(string str)
{  
   if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     {
   message_vision("$Nж�·�˱�,��˱ʵĹ�â˲ʱ��ʧ.\n",user);
        set_heart_beat(0);
     }    
}    
 int do_give(string str)
{  
  if(str=="ruby_ring" || str=="all") 
     if( query("equipped") )
     { 
        message_vision("$Nж�·�˱�,��˱ʵĹ�â˲ʱ��ʧ.\n",user); 
        set_heart_beat(0);
     }
}
int do_unwield(string str)
{
   if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$Nж�·�˱�,��˱ʵĹ�â˲ʱ��ʧ.\n",user);
        set_heart_beat(0);
     }   
}                       
int do_auc(string str)
{
  if(str=="ruby_ring" || str=="all")
     if( query("equipped") )
     { 
        message_vision("$Nж�·�˱�,��˱ʵĹ�â˲ʱ��ʧ.\n",user);
        set_heart_beat(0);
     } 
}     
void heart_beat()
{
  object *enemy,who;
  int i;

 if ( !objectp(user) )
	{
	set_heart_beat(0);
	return;
	} 
 if( user->is_fighting() && query("equipped") )
  {
    if( sp > random(260) )
    {
     enemy=user->query_enemy();
     i=random(sizeof(enemy));
     if( environment(user) == environment(enemy[i]) )
      if( random(300) > enemy[i]->query_skill("dodge") )
     {
message_vision(HIB+"��˱��߲ʹ�â��$N�������!!!\n"+NOR,enemy[i]);
      enemy[i]->receive_damage("kee",pp,user);
      COMBAT_D->report_status(enemy[i], 0);
     }else
message_vision(HIB+"��˱��߲ʹ�â��$N�������!!...����û��...\n"
                     +NOR,enemy[i]);         
     }
  }
  return;
}  

