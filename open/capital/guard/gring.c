//made by bss
//king ���ϵ�ring
//����,king can call 3 ֻ,ppl just can call one
//�����ж϶����Ƿ�set("no_gring",1),������򲻺���mob���� modify by cyw at 91/04/03
#include <ansi.h>
#include <armor.h>
inherit EQUIP;
object user;
int kar,cor;
void create()
{
     set_name(HBRED+HIY"������ָ"NOR ,({"guard ring", "ring"}));
     set_weight(2500);
     if( clonep() )
               set_default_object(__FILE__);
     else {
            set("long","һֻ������ս�������������æս����ָ��,��˸������Ľ�ɫ��â.\n");
            set("unit", "��");
            set("value",500000);
            set("material","gold");
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
        kar = user->query("kar");
        cor = user->query("cor");
        cor = cor *2;
        message_vision("$N�����˻���ָ��,ɲ�Ǽ����ܽ�����.\n",user);
        set_heart_beat(1);
     }
}
int do_drop(string str)
{
   if(str=="ring" || str="guard ring" || str=="all")
     if( query("equipped") )
     {
        set_heart_beat(0);
     }
}
 int do_give(string str)
{
   if(str=="ring" || str="guard ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N�����˻���ָ��,����Ľ��Ҳ��֮����.\n",user);
        set_heart_beat(0);
     }
}
int do_remove(string str)
{
   if(str=="ring" || str="guard ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N�����˻���ָ��,����Ľ��Ҳ��֮����.\n",user);
        set_heart_beat(0);
     }
}
int do_auc(string str)
{
   if(str=="ring" || str="guard ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N�����˻���ָ��,����Ľ��Ҳ��֮����.\n",user);
        set_heart_beat(0);
     }
}
void heart_beat()
{
        object mob,*enemy;
        int i,j,k;
  if( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }
  if(user->is_fighting()){
  	enemy=user->query_enemy();
  	j=sizeof(enemy);
  	k=0;
  	for(i=0;i<j;i++){
  	if(enemy[i]->query("no_gring",1))	
  	k++;
     }
     }
  
  if( user->is_fighting() && query("equipped") && k==0)
  {
	if(user->query("capital_king"))
	{
    		if(!user->query_temp("have_guard"))
    		{
    		mob=new(__DIR__"guard");
    		mob->set("title",user->query("name")+"�Ļ���");
      		mob->set("combat_exp",user->query("combat_exp"));
    		mob->move(environment(user));
    		mob->invocation(user);
		mob=new(__DIR__"guard1");
    		mob->set("title",user->query("name")+"�Ļ���");
      		mob->set("combat_exp",user->query("combat_exp"));
    		mob->move(environment(user));
    		mob->invocation(user);
    		mob=new(__DIR__"guard2");
    		mob->set("title",user->query("name")+"�Ļ���");
      		mob->set("combat_exp",user->query("combat_exp"));
    		mob->move(environment(user));
    		mob->invocation(user);
    		}
	}
	else
	{
    		if(!user->query_temp("have_guard"))
    		{
		switch(random(2))
		{
		case 0:
    		mob=new(__DIR__"guard");
    		mob->set("title",user->query("name")+"�Ļ���");
      		mob->set("combat_exp",user->query("combat_exp"));
    		mob->move(environment(user));
    		mob->invocation(user);
		break;
		case 1:
    		mob=new(__DIR__"guard1");
    		mob->set("title",user->query("name")+"�Ļ���");
      		mob->set("combat_exp",user->query("combat_exp"));
    		mob->move(environment(user));
    		mob->invocation(user);
		break;
		case 2:
    		mob=new(__DIR__"guard2");
    		mob->set("title",user->query("name")+"�Ļ���");
      		mob->set("combat_exp",user->query("combat_exp"));
    		mob->move(environment(user));
    		mob->invocation(user);
		break;
		}
    		}
	}
  }
  return;
}

