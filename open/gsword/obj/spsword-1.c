#include <weapon.h>
inherit SWORD;
object ob;
object *target;
object ob1=this_object();
int sp_value;
int sp_hit;
void create()
{
	set_name("�������",({"blood_sword"}) ); // ���Բ�Ҫ���� sword
	set_weight(15000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
 set("long","����һ����Ѫ�޵�Ѫ������������һ��а��֮��,�������һ��������,
            �ഫ�ô˽���Ҳ��һͳ����,������Ҳ����ë�������һ�ѽ�...");
	set("unit","��");
	set("value", 1000);
	set("material","steel");
	set("no_sell", 1);
	}
	init_sword(60);
	setup();
}

void init()
{
     add_action("do_drop","drop"); 
     add_action("do_auc","auc"); 
     add_action("doo_wield","wield");
     add_action("do_give","give");
     add_action("do_unwield","unwield");
}

int doo_wield(string str)
{
    int max_sp_hit;
    max_sp_hit=250;
    ob=this_player();
    sp_value=(ob->query("spi")+ob->query("kar"))*2+ob->query("bounds")/100+
    ob->query("combat_exp")/1000;
    sp_hit=ob->query("MKS")/1000+random(80);
    if(str!="blood_sword")
      return 0;
    else 
     ::wield();   
    if( sp_hit >max_sp_hit)
       sp_hit=max_sp_hit;
    if(ob1->query("equipped"))
    {
       set_heart_beat(1);
       message_vision("$N���ճ��� ,����Թ��弤ʹ$Nȫ���Ǻ� ,��Լɢ����һ����ɱ֮�� .\n",this_player());
       return 1;
     }     
    
    return 0;
  
  
}
int do_drop(string str)
{
    if(str == "blood_sword" || str=="all")
    {
      set_heart_beat(0);
       message_vision("$N��������� ,�𽥻ָ�����.\n",this_player());
    }
}    
int do_give(string str)
{
    if(str == "blood_sword" || str=="all")
    {
      set_heart_beat(0);
       message_vision("$N��������� ,�𽥻ָ�����..\n",this_player());
     }
}
int do_unwield(string str)
{
    if(str == "blood_sword" || str=="all")
    {
       set_heart_beat(0);
       message_vision("$N��������� ,�𽥻ָ�����..\n",this_player());
     }
}                       
int do_auc(string str)
{
    if(str == "blood_sword" || str=="all")
    {
       set_heart_beat(0);
       message_vision("$N��������� ,�𽥻ָ�����..\n",this_player());
    }
}                                                         

void heart_beat()
{
  int *target,i;
  target=ob->query_enemy();
  i=random(sizeof(target));
  if( ob1->query("equipped") )
  if( ob->is_fighting() )
  if( sp_value > random(1500) )
    {
     message_vision("[31m����û���һѪ�� ,������$N������\n[0m ",target[i]);
     target[i]->add("kee",-sp_hit);
     }
  return;
 }        
      
