// ƽ�Ͻ���
#include </open/open.h>
#include <ansi.h>
inherit NPC;
void create()
{
	set("title","����Ʒ����");
	set_name("��Ԩ",({"officer zhang","officer","zhang"}));
	set("long","��ͥ����ƽ�϶�����������,����Ϊ���˵�����(����).\n");
	set("gender","����");
        set("attitude","heroism");
	set("chat_chance", 15);
	set("chat_msg", ({
	" ��Ԩ˵: ����������಻��,����Ǻ�??\n",
	" ��Ԩ˵: ���˶���,���Ǹ�����°�!!\n",
	" ��Ԩ˵: ��������ʿԸ�����(Ԯ��)��??\n"
	}));
	set("inquiry",([
	"����" : "����������Կ���������,����ﻢ����,��֪����ճ�,��...\n",
	"Ԯ��" : "����������,��������һ׳ʿ,��(����)������ͷ!!\n",
	"����" : "׳ʿ��Ч����͢��? ����(����)!\n",
	"����" : "׳ʿ����ɱ������ӳ�,�����䵶��֤����֮�ҳ�,������.\n",
	]) );
	set("age",32);
	set("int",30);
	set("per",30);
	set("str", 15);
	set("con", 30);
	set("force",1500);
	set("max_force",1500);
        set("combat_exp", 37500);
	set_skill("literate",40);
	set_skill("force",60);
        set_skill("dodge", 1);
        set_skill("parry", 1);
        set_skill("unarmed",45);
        set_skill("linpo-steps",1);
        set_skill("six-fingers",45);
	map_skill("dodge","linpo-steps");
	map_skill("parry","six-fingers");
        map_skill("unarmed","six-fingers");
        map_skill("stabber","six-fingers");
        set("functions/handwriting/level",10);
        set("chat_chance_combat", 20);
        set("chat_msg_combat", ({
           (: perform_action("stabber.handwriting") :),
           }));        
        set("force_factor", 3);
	setup();
	carry_object("/open/ping/obj/fan-1")->wield();
	carry_object("/open/ping/obj/robe-1")->wear();
	carry_object("/open/ping/obj/wrists-1")->wear();
	add_money("silver",50);
}
int accept_object(object who, object ob)
{
  object mid;
  if( ob->query("id") == "maiu blade")
  { 
    destruct(ob);
    who->set_temp("maiu",1);
    say("����Ʒ���� ��Ԩ���絶��ϸ����,˵��: ����������ӳ����䵶.\n"+
        "��...�����ҷ����ߵ��õ�����,����������˾�ʦ,��ɼ�������,\n"+
        "��ʱ,ɱ������,ȡ����ͷ�����Ҽ���,������Ȼ���������.\n");
    mid=new("/open/ping/obj/mid");
    mid->move(who);
  }      
  else if( ob->query("id") == "maiu-head" && who->query_temp("maiu") )
  { 
   destruct(ob);
   say("����Ʒ���� ��Ԩ������ͷһ��,��ЦԻ: ��������,������ͷ...������!!!\n"+
       "��...���Ǹ����л��.\n����Ʒ��������һЩҩ��.\n");  
   mid=new("/daemon/class/doctor/medicine/curesick");
   mid->add_amount( who->query("per") );
   mid->move(who);
   who->delete_temp("maiu");
   who->delete_temp("k_m"); 
  }
   return 1;  
}
int accept_kill(object who)
{
  object head;
  if( who->query_temp("maiu") && !query("change"))
  {
   say("����Ʒ������ŭ: ���������,���ұ�����!!������ô��ʰ��!!!\n"
        +"����Ʒ������ͷ��ð����������!\n");
   set("title","- ���� -");
   set("combat_exp", 180000);
   set("max_kee",3000);
   set("change",1);
   set("kee",3000);
   set("force_factor", 15);     
   set_skill("six-fingers",70);
   set_skill("linpo-steps",60); 
   head=new("/open/ping/obj/zhang-head");
   head->move(this_object());
   setup();
  }
  command("wield all");
  return 1;
}
int accept_fight(object who)
{
  if( who->query_temp("maiu") )
      return notify_fail("����Ʒ����˵: ׳ʿ����Ц��...Ҫɱ����������!\n");
  command("wield all");
  return 1;
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

	if( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj11/green-crystal")->move(environment(winner));
	  message_vision(HIM"\n����Ԩ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/green_crystal",sprintf("%s(%s) ����Ԩ��������ɫ�⾧�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/green-crystal")->move(environment(winner));
	  message_vision(HIM"\n����Ԩ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/green_crystal",sprintf("%s(%s) ����Ԩ��������ɫ�⾧�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}
