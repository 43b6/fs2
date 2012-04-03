#include <ansi.h>
inherit NPC;
object ob1=this_object();
object ob2=this_player();
int done=0;
int special_attack();
void create()
{
        set_name("Ҷ ��",({"ya"}));
        set("long", "��������ʮ��ǰ�ڽ����������ȷ�Ѫ��Ĵ�ħͷ��Ѫħ��Ҷ��\n");
        set("gender","����");
        set("combat_exp",2000000);
        set("attitude","aggressive");
        set("bellicosity",100000);
        set("age",100);
        set("class", "fighter");
        set("title","Ѫħ");
        set("max_gin",5000);
        set("gin",5000);
        set("clan_kill",1);
        set("max_kee",5500);
        set("kee",5500);
        set("max_sen",5000);
        set("sen",5000);
        set("max_force",10000);
        set("force",10000);
        set("force_factor",10);
        set("str",40);
        set("chat_chance_combat",100);
        set("chat_msg_combat",({
        (: perform_action, "unarmed.evil-blade" :),
        (: special_attack :),
        }));
        set("chat_chance",20);
        set("chat_msg",({
            (: random_move :),
        }));
        set("cor", 40);
        set("per", 30);
        set("int", 30);
        set("cps",40);
        set("con", 30);
        set("spi", 30);
        set("kar", 40);
        set_skill("badstrike", 160);
        set_skill("badforce", 140);
        set_skill("ghost-steps",120);
        set_skill("unarmed",120);
        set_skill("dodge",120);
        set_skill("parry",120);
        set_skill("move",100);
        set_skill("force",120);
        map_skill("unarmed", "badstrike");
        map_skill("parry","badstrike");
        map_skill("force", "badforce");
        map_skill("dodge", "ghost-steps");
        map_skill("move", "ghost-steps");
        command("wimpyu 30");
        setup();
        carry_object("/open/wu/obj/figring")->wield();
        add_money("gold", 20);
}

int special_attack()
{
   object ob,me;
   int k;
   me = this_object();
   k = random(10);
   ob=this_object()->query_enemy();
   if( k > 2 )
   {
   message_vision(HIR"Ҷ��������Ѫ��ħ�󷨡�����һָ��һ��Ѫ��������п񱬿���!!\n"NOR,this_object());
   ob->add("kee",-250);
   ob->start_busy(1);
   }
   if( k < 7 )
   {
   message_vision(HIW"Ҷ��������ħ�����ķ�������˼��Ĺ�â��Ҷ�����Ϸ�����Ҷ��Ĵ��˻ָ���!\n"NOR,this_object());
   me->add("force",1200);
   me->add("kee",300);
   me->add("max_kee",100);
   }
  return 1;
}

void greeting(object ob)
{
  object head;
  if( !ob || environment(ob) != environment() ) return;
  if(ob->query("family/family_name","��ɽ��") )
  {
     say("Ҷ���:��!��!��ɽ���ӣ�������!!!\n ");
     command("follow  ob");
   }
     command("exert roar");

  if(!ob->query("get_head",0))
  {
  }else{
  head=new("/open/wu/obj/ya-head");
  head->move(ob1);
  ob->set("get_head",0);
  }
}

void heart_beat()
{

 mixed all;
 object me,room,obj;
 int maxkee,kee,i,count;
 count = random(100);
 me = this_object();
 room = environment(me);
 all = all_inventory(room);
 if(count < 5 && me->is_fighting())
 {
  message_vision(HIR"\nҶ����һ����������������Ϯȥ!!!��������ﱻ����ʮ��֮Զ!!\n"NOR,me);
  for( i = 0 ; i < sizeof(all) ; i++)
   {
    obj = all[i];
    if( obj->is_character() && !obj->is_corpse() && living(obj)
    && obj->query("id")!="ya")
     {
      message_vision(HIR"��������˱��������ޱȵĶ�ħ�����ˣ���һ���³�һ�����Ѫ!!\n"NOR,obj);
      obj->add("kee",-100);
      obj->start_busy(1);
      COMBAT_D->report_status(obj, 1);
     }
   }
 }
 if( random(10) < 2 )
 {
  if( is_fighting() )
  {
   if( query("kee") < query("eff_kee") )
    message_vision(HIG"\nҶ��ʹ����ħ��֮�ķ����˿ڽ�����������\n"NOR,me);
    me->receive_heal("kee",500);
    me->receive_heal("gin",200);
    me->receive_heal("sen",200);
    me->delete_busy();
    me->clear_condition();
  }
  else
  {
   if( query("eff_kee") < query("max_kee") )
    command("exert heal");
    me->add("force",1000);
  }
 }
::heart_beat();
}


void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;

        if(!winner)
	{
	::die();
	return ;
        }

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj4/free_shells")->move(environment(winner));
	  message_vision(HIM"\n��Ҷ������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/free_shells",sprintf("%s(%s) ��Ҷ�����������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj4/free_shells")->move(environment(winner));
	  message_vision(HIM"\n��Ҷ������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/free_shells",sprintf("%s(%s) ��Ҷ�����������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}
