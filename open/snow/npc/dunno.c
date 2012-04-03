// master.c
#include <ansi.h>
inherit NPC;
inherit F_MASTER;

// �� npc Ϊ���� master �����������  (fund)
void create()
{
        set_name("��������",({"oldman"}));
	set("gender", "����" );
	create_family("ħ��Ī��",1," ");
            set("title","");
         set("age",70);
      set("str",30);
	set("class","blademan");
	set("guild_class","blademan");
	set("cor", 30);
	set("cps", 27);
	set("int", 24);

	set("max_force",2000);
	set("force",2000);
           set("force_factor",10);


       set("long","һ��������ȫ����_�_�����ˣ����ϻ���һ���������������Ǳ���������ġ�\n");

	set_skill("force",70);
            set_skill("blade",100);
	set_skill("unarmed",60);
	set_skill("dodge",70);
             set_skill("literate",60);
	set_skill("powerforce",100);
	set_skill("dragon-blade",120);
	map_skill("blade","dragon-blade");
	map_skill("force","powerforce");

	set("combat_exp", 1000000);
	set("score", 200000);
	set("chat_chance_combat",60);
	set_temp("apply/armor",80);
	set_temp("apply/damage",80);
         set("chat_msg_combat",({
	(: perform_action, "blade.power-dest" :),
      }));




	set("inquiry", ([
	    "���³�":  "��������ð��У����ҹ�����ʮ���꣬�����....��һ��Ҫ����\n",
	    "����": "�����������ǧ�꺮��ʯ����ģ�һ������ǿ����ϵġ�\n",
	    "ǧ�꺮��ʯ": "���Ǿ���ǧ���������ɵļ�Ӳʯ�飬�����������������Ȼ�޷����ϡ�\n",
	    "�������": "��˵�˼�������������а�����ϡ���аʯ�����Ի���ǧ�꺮��ʯ��\n",
	    "������а":  "��˵������а��������éɽ�����ϡ�\n",
	    "��аʯ":   "��аʯ�ڶ��³���������������\n",
	]) );

	setup();
	carry_object("/open/snow/obj/poor_blade")->wield();
}

void init()
{
     add_action("do_learn","learn");
}
void attempt_apprentice(object ob,string str)
{
         if(this_player()->query("can_apprentice")==2)
         {
             command("say ������Ե�����߰ɣ�");
             return;
         }
	if(this_player()->query("can_apprentice")!=1)
          {
          command("say ��������ҹ�����\n");
          return;
          }
           command("say ������ͽ�����ý��Ҿ�ѧ�ٴ����ˡ�");
	command("recruit "+this_player()->query("id"));
              this_player()->set("family/master_name","Ī��");
              this_player()->set("title","ħ������");
}

void recruit_apprentice(object ob)
{
	if( ::recruit_apprentice(ob) )
            ob->set("class","blademan");
}
int accept_object(object who,object ob)
{
    string ob_id;
    ob_id=ob->query("id");
      if(this_player()->query("can_apprentice")!=0)
                  return 1;
      if(ob_id=="snake sword")
     {
        command("hmm");
             this_player()->set("give_1",1);
     }
        if(ob_id=="stone")
         {
             command("hmm");
            this_player()->set("give_2",1);
         }
       if(who->query("give_1")==1&&who->query("give_2")==1)
        {
            command("say ̫���ˣ�");
            message_vision(
             HIY "$n����аʯ������ע�������а֮�У�Ȼ���˾�һ�����������ϡ�\n" NOR,this_player(),this_object());
            shout(HIR "Զ������ħ��Ī��Ĵ�ȣ�\n\n�������ˣ���������������\n\n���³������������߰ɣ���Ҫһѩ��ʮ�������֮�ޣ�\n" NOR);
       if(who->query("kar")>25)  who->set("can_apprentice",1);
           else who->set("can_apprentice",2);
         command("say �ǳ���л������ػ����ɡ�");
       if(this_player()->query("can_apprentice")==1)
             command("say ĪĳԸ��������ѧ�����㡣\n");
      if(this_player()->query("can_appentice")==2||this_player()->query("id")=="per")
       {
           command("say ��Īĳ��������������Ե");
           command("say �ðɣ��ҽ��������������㡣");
           this_player()->add("max_force",100);
           this_player()->add("force",100);
        }
            }
          return 1;
}
