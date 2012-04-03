//master_yua.c //cgy
#include <ansi.h>
#include "/open/open.h"
string magic();
string ask_get_dan_sp();
string ask_get_meteor();
string ask_ribbon();
inherit NPC;
inherit F_MASTER;
void create()
{
            object ob;
            set_name("������",({"master yua","yua"}));
            set("long","���Ǿ��µ���λ�����ĵ���֮һ���ó��赸����˵
�����赸֮����������Ϊ��Ů�·����ɾ���\n");
            set("gender","Ů��");
            set("class","dancer");
            set("nickname","��������");
            set("combat_exp",5000000);
            set("attitude","heroism");
            set("age",20);
            set("str", 34);
            set("cor", 30);
            set("cps", 50);
            set("per", 24);
            set("int", 40);
          set("kee",30000);
          set("max_kee",30000);
          set("gin",1600);
          set("max_gin",1600);
          set("atman",2000);
          set("max_atman",2000);
          set("mana",400);
          set("max_mana",400);
          set("force",2000);
          set("max_force",2000);
            set_skill("array",60);
            set_skill("parry",60);
            set_skill("spells",50);
            set_skill("magic",120);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",70);
            set_skill("move",90);
            set_skill("dodge",100);
            set_skill("sword",50);
            set_skill("unarmed",70);
            set_skill("paull-steps",130);
            set_skill("dremagic",100);
            set_skill("dreamforce",90);
            set_skill("dreamdance",100);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
		set("get_dan_sp",1);
		set("/spells/reflection/level",100);
		set("/spells/confuse/level",100);
        set("/spells/fireball/level",100);
        set("/spells/thunder/level",100);
        set("/spells/firedance/level",100);
        set("/spells/dreamwings/level",1);
		
        set("force_factor",30);
        setup();
        create_family("ҹ��С��",3,"����");
        carry_object("/open/dancer/obj/yuaboots.c")->wear();
		carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
		add_money("diamond",1);
//      ob->set_amount(50);
        set("inquiry", ([
            "������"  : "��˵��������ɽׯׯ����������??��������Ľ��ż��Ү!!",
			"����ʽ" :  (: ask_get_dan_sp :),
			"������" :  (: ask_get_meteor :),
			"ribbon" : (: ask_ribbon :)
        ]));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
         (: magic :),
        }));
}
void init()
{       object ob;
        add_action("do_join","join");
        set_heart_beat(1);
}
void heart_beat()
{
        if( is_fighting() ){
		      if(query_temp("ref_shield")!=1)
		      command("conjure reflection");
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("conjure dreamcure");
        }
        :: heart_beat();
}
  void attempt_apprentice(object ob)
{
        command("l "+ob->query("id"));
      if(this_player()->query("class")!="dancer")
      {
          command("hammer"+ob->query("id"));
          command("say ��ȥ�������߹���������\n");
          return;
      }
        command("smile");
        command("nod");
        command("chat ����������ֶ���һ�������������ˣ�ϣ����λ��మ����..\n");
         ob->query("no_recruit");
        command("recruit "+ob->query("id"));
		new("/open/dancer/obj/ribbon")->move(ob);
        message_vision("����������$Nһ���߲ʶд� .\n",ob);
        command("say ��������ҹ��С�������� ,������Ʊ��� !");
}
string ask_ribbon()
{
        if(present("ribbon",this_player()))
		   return "������������";
		if(this_player()->query("class")!="dancer")
		   return "����������Ҫ�Ǹ���ʲ����";
        else
		{
        command("say �� , ��ô������С���� !");
        new("/open/dancer/obj/ribbon")->move(this_player());
        return "ϣ�����ܺúñ��� , ����Ū������ !\n";
        }
           
}
string ask_get_dan_sp()
{ 
 if(this_player()->query("get_dan_sp")==1)
  return "������ѧ���ˣ���";
 if(this_player()->query("class")!="dancer")
      {
          command("stare"+this_player()->query("id"));
          return "������ô����";
      }
 if((int)this_player()->query("combat_exp") < 500000)
	   return "�Ȋ�����ֵ��Щ�����ɣ�";
 else
  {
 command("say �ܺ�.....�Ҿͽ�����ʽ�����ڊ�...\n");
 this_player()->set("get_dan_sp",1);
  return "ϣ����Ŭ�������߾�ѧ������";
 }
}
string ask_get_meteor()
{ 
 if(this_player()->query("spells/meteor/level")==1)
  return "������ѧ���ˣ���";
 if(this_player()->query("class")!="dancer")
      {
          command("stare"+this_player()->query("id"));
          return "������ô����";
      }
 if((int)this_player()->query_temp("allow_learn")!= 1)
	   return "��ͨ����ʦ�õĿ�����˵�ɣ�";
 else
  {
 command("say �ܺ�.....�Ҿͽ��ռ������������괫���ڊ�...\n");
 this_player()->set("spells/meteor/level",1);
 message("system",HIW"���������ĵ�˵��:����"+this_player()->name()+"�İ�������ʹ���߸��ӷ�����.\n"NOR,users());
 return "���Ҫ����Ŭ���";

 }
}
string magic()
{       
        command("conjure confuse");
        command("conjure fireball");
		command("conjure reflection");
        command("conjure firedance");
        command("conjure thunder");
        command("conjure dreamwings");
        return "\n";
}
 
int accept_fight(object ob)
{
        command("say СŮ���������Ķ�����??\n");
		command("conjure reflection");
		command("conjure dreamwings");
		command("conjure confuse");
        message_vision( this_object()->name()+"һ��������������ӡ�\n",ob);
        return 1;
}
int accept_kill(object ob)
{
        command("say û�뵽�������۸���СŮ�ӣ����ҾͲ�������!!!\n");
		command("conjure reflection");
		command("conjure dreamwings");
		command("conjure confuse");
        return 1;
}
int do_join()
{
        object ob=this_player();
        command("shake"+ob->query("id"));
        return notify_fail("�뵱����Ҫȥ����ʦ��ˮ��������!!\n");
}
