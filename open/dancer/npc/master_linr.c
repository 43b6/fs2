//master_linr.c //cgy
#include <ansi.h>
#include "/open/open.h"
string magic();
string ask_moon();
string ask_change();
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
object ob2;
void create()
{
            object ob;
            set("guild_master",1);
            set_name("ˮ���",({"master linr","linr"}) );
            set("long","������������ʦ�ã��ó��赸����˵
            �����赸֮����������Ϊ��Ů�·����ɾ���\n");
            set("gender","Ů��");
            set("class","dancer");
            set("nickname","�������");
            set("combat_exp",4000000);
            set("attitude","heroism");
            set("age",20);
            set("str", 30);
            set("cor", 30);
            set("cps", 45);
            set("per", 24);
            set("int", 40);
          set("kee",30000);
          set("max_kee",30000);
          set("gin",16000);
          set("max_gin",16000);
          set("atman",20000);
          set("max_atman",20000);
          set("mana",40000);
          set("max_mana",40000);
          set("force",20000);
          set("max_force",20000);
		  set("max_sen",16000);
         set("sen",16000);
            set_skill("array",50);
            set_skill("parry",40);
            set_skill("spells",30);
            set_skill("magic",90);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",70);
            set_skill("move",100);
            set_skill("dodge",95);
            set_skill("sword",50);
            set_skill("unarmed",70);
            set_skill("paull-steps",120);
            set_skill("dremagic",95);
            set_skill("dreamforce",100);
            set_skill("dreamdance",90);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
		set("get_dan_sp",1);
		set("/spells/reflection/level",100);
		set("/spells/confuse/level",100);
        set("/spells/thunder/level",60);
        set("/spells/firedance/level",100);
		set("/spells/hellfire/level",75);
        set("/spells/dreamwings/level",1);
		set("/spells/dreamcure/level",100);
		set("adv_dancer",1);
		set("allow_hellfire",1);
		
        set("force_factor",20);
        setup();
        create_family("ҹ��С��",3,"������");
        carry_object("/open/dancer/obj/linrboots.c")->wear();
		carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
//      ob->set_amount(50);
        set("inquiry", ([
            "������"  : "��˵��������ɽׯׯ����������??��������Ľ��ż��Ү!!",
			"���µ�֮��"  :  (: ask_moon :),
			"�ϴ�����"  :  "���ι������Ҵ�ʦ��,�����°���,��������ʦ�����",
			"����"  : "����ǰ��˵���ڷ��ָ۹���ƽ����������ھͲ�֪���ˡ�",
			"������"  : "�....��ѧ�������ȴ�Ӯ����˵�ɡ�",
			"change" : (: ask_change :),
        ]));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
         (: magic :),
        }));
}
void init()
{
        add_action("do_join","join");
        set_heart_beat(1);
}
string ask_moon()
{       if (this_player()->query("quests/moon")==1)
        return "�㲻���ʹ���???";
		else
        this_player()->set_temp("ask_moon1",1);
		return " �� ,�������ֻ����Լ��������˵�� , ��ϸ����Ҫ������֪�� !";		
}
string ask_change()
{       int i;
        i=(int)this_player()->query("functions/ranbow-steps/level",1);
        if (!this_player()->query("functions/ranbow-steps"))
        return "��ûѧ��������ʲ???";
		else
        this_player()->set("functions/rainbow-steps/level",i);
		this_player()->delete("functions/ranbow-steps");
		return " �� ,�Ұ�ĺ��� !";		
}
void heart_beat()
{
        if( is_fighting() ){
		   if(query_temp("ref_shield")!=1)
		      command("conjure reflection");
		   if(random(100)>85)
		   command("conjure hellfire");
               
        }
        else{
		if( query("sen") < query("eff_sen") ) // 125
			command( "exert refresh" );
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
          command("say �ȼ������߹�����ܰ�ʦ�\n");
          return;
      }
        command("smile");
        command("nod");
        command("chat ����������ֶ���һ�������������ˣ�ϣ����λ��మ����..\n");
         ob->query("no_recruit");
        command("recruit "+ob->query("id"));
}

 void die()
 {
  if(!ob2){
    write("ˮ���˵:�벻�������书�������\n"); 
    ::die();
    return ;
  }
   if( ob2->query("class")=="dancer")
     {write("ˮ���˵:��������ȷ�����ʵ��ȥѧϰ������!\n");
      write("���� ,������ȥ����ʦ����!\n");
      ob2->set("allow_meteor",1);
	  ob2->set_temp("allow_learn",1);}
  else   
   {
    write("ˮ���˵:�벻��������\���������\n"); 
    }
   ::die();
  }  
string magic()
{       
        command("conjure reflection");
        command("conjure confuse");
        command("conjure fireball");
        command("conjure firedance");
        command("conjure thunder");
        command("conjure dreamwings");
        return "\n";
}
 
int accept_fight(object ob)
{
        
        command("say СŮ���������Ķ�����??\n");
        message_vision( this_object()->name()+"һ��������������ӡ�\n",ob);
		command("conjure reflection");
		command("conjure dreamwings");
		command("conjure confuse");
        return 1;
}
int accept_kill(object ob)
{       ob2=this_player();
        command("conjure reflection");
        command("say û�뵽�������۸���СŮ�ӣ����ҾͲ�������!!!\n");
		command("conjure dreamwings");
		command("conjure confuse");
        return 1;
}
int do_join()
{
        object ob=this_player();
        if(!ob->query("class"))
        {
		 if(this_player()->query("gender")!="Ů��")
		 {
		 command("grin"+ob->query("id"));
		 return notify_fail("ֻ��Ů�Բ��ܵ������!!����ȥ����������!!\n");
          } 
		if(this_player()->query("per")<25)
        {
            return notify_fail("�㳤��̫���˲��ʺϵ����߻�����Ѱ��·��!!\n");
        }else
        ob->set("class","dancer");
        command("nod "+ob->query("id"));
        }
        else
        {
          return notify_fail("���Ѿ��������Ɇ��������ټ��놪��\n");
        }
        message("system",HIC"ˮ������������������ڰ˻ģ�������졯
����������˵������"+this_player()->name()+"�����ʱؿ�
�������赸��ѧ������\n"NOR,users());
        return 1;
}
