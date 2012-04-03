// master_yua.c 
#include <ansi.h>
#include "/open/open.h"
string magic();
inherit NPC;
int ask_gonfu();
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
            set("combat_exp",2000000);
            set("attitude","heroism");
            set("get_dan_sp",1);
            set("age",20);
            set("str", 30);
            set("cor", 30);
            set("cps", 50);
            set("per", 50);
            set("int", 40);
            set("spi",50);
            set("kar",50);
          set("kee",4000);
          set("max_kee",4000);
          set("gin",4000);
          set("max_gin",4000);
          set("atman",10000);
          set("max_atman",10000);
          set("mana",4000);
          set("max_mana",4000);
          set("force",3000);
          set("max_force",3000);
            set_skill("parry",50);
            set_skill("spells",20);
            set_skill("magic",120);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",30);
            set_skill("move",100);
            set_skill("dodge",100);
            set_skill("unarmed",50);
              set_skill("paull-steps",100);
            set_skill("dremagic",100);
            set_skill("dreamforce",100);
            set_skill("dreamdance",100);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        map_skill("parry","dreamdance");
        set_temp("apply/armor",70);
        set("/spells/confuse/level",100);
        set("/spells/fireball/level",1);
        set("/spells/thunder/level",60);
        set("/spells/firedance/level",100);
        set("/spells/dreamwings/level",1);
        set("/spells/dreamcure/level",1);
        set("force_factor",10);
        setup();
        create_family("ҹ��С��",3,"����");
        carry_object("/open/dancer/obj/yuaboots.c")->wear();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
        carry_object("/open/dancer/obj/ribbon.c")->wield();
//      ob->set_amount(50);
        set("inquiry", ([
            "������"  : "��˵��������ɽׯׯ����������??��������Ľ��ż��Ү!!",
            "����ʽ"  : (: ask_gonfu :),
        ]));
        set("chat_chance_combat",40);
        set("chat_msg_combat",({
         (: magic :),
        }));
}
void init()
{
		object ob;
        add_action("do_join","join");
        set_heart_beat(1);
	::init();
           if(interactive(ob =this_player()) && !is_fighting() ) {
           remove_call_out("greeting");
           call_out("greeting",2,ob);
}
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("conjure dreamcure");
        }
        }
        :: heart_beat();
}
  void attempt_apprentice(object ob)
{
        command("l "+ob->query("id"));
      if(this_player()->query("per")<25)
      {
          command("sigh "+ob->query("id"));
          command("say ����òƽӹ���ʺϵ�����\n");
          command("shake");
          return;
      }
        command("smile");
        command("nod");
        command("chat ����������ֶ���һ�������������ˣ�ϣ����λ��మ����..\n");
         ob->query("no_recruit");
        command("recruit "+ob->query("id"));
        call_out("do_act1",2,this_player());
}
        int do_act1(object ob)
{
        object ribbon;
        ribbon=new("/open/dancer/obj/ribbon");
        ribbon->move(ob);
        message_vision("�������ӻ�����ȡ��һ���߲ʶд� ,����$N���� .\n",ob);
        command("say ��������ҹ��С�������� ,������Ʊ��� !");
       return 1;
    }

void greeting(object ob)
{
  if(ob->query("family/family_name")=="ҹ��С��")
  {
  if(!present("rainbow ribbon",ob))
  {
  new("/open/dancer/obj/ribbon")->move(ob);
        command("hmm");
        command("say �����߲ʶд�Ū���˰� ?");
        command("say �ٸ���һ��, ����Ū���� !");
        message_vision("�������ӻ���ȡ��һ���߲ʶд�, ����$N����\n",ob);
  }
  }
}

string magic()
{
        command("conjure confuse");
        command("conjure fireball");
        command("conjure firedance");
        command("conjure thunder");
        command("conjure dreamwings");
        command("conjure dreamcure");
        return "\n";
}
 int  ask_gonfu()
{
  object me;
  me=this_player();
  if(me->query("family/family_name")!="ҹ��С��")
     write("�����Ǳ��ɵ���,�������ʲô??"\n);
 else if(me->query_skill("dreamdance",1) < 70 )
     write(" ����ҹ���������軹���� ,�ٶ��������\n ");
  else if(me->query("combat_exp",1) < 200000 )
     write("����ʵս���黹���� ,�ȹ������ٸ��ߊ���\n");
  else 
    {
     me->set("get_dan_sp",1);
    }     	
     return 1;
}

int accept_fight(object ob)
{
        command("say СŮ���������Ķ�����??\n");
        message_vision( this_object()->name()+"һ��������������ӡ�\n",ob);
        command("say ��Ȼ�������۸���СŮ�ӣ����ҾͲ�������!!!\n");
        kill_ob(ob);
        command("conjure dreamwings");
        return 1;
}
int accept_kill(object who)
{
        command("say û�뵽�������۸���СŮ�ӣ����ҾͲ�������!!!\n");
        kill_ob(who);
        command("conjure dreamwings");
        return 1;
}
int do_join()
{
        object ob=this_player();
        if(!ob->query("class"))
        {
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
        message("system",HIC"���������������������ڰ˻ģ�������졯
����������˵������"+this_player()->name()+"�����ʱؿ�
�������赸��ѧ������\n"NOR,users());
        return 1;
}
