#include <ansi.h>
#include "/open/open.h"
inherit NPC;
object ob1=this_object();
object ob2;
int have_say;
void create()
{
	set_name("л����", ({"sin lan","lan"}));
	set("long","���ӵ����ŵ���,��ʦ֮�����𿴹ܲؾ���.\n");
	set("gender","����");
        set("class","doctor");
	set("combat_exp",600000);
        set("attitude","heroism");
	set("age",43);
	set("title","�����ŵ���");
        set("kee",1500);
        set("max_kee",1500);
	set("force",1800);
	set("max_force",1800);
	set("force_factor",10);
	set_skill("stabber",80);
	set_skill("dodge",80);
	set_skill("shinnoforce",60);
        set_skill("yu-needle",80);
        map_skill("stabber","yu-needle");
        map_skill("parry","yu-needle");
        map_skill("force","shinnoforce");
	set_skill("move",60);
	set_skill("cure",70);
	set_skill("parry",80);
        set_skill("seven-steps",80);
        map_skill("dodge","seven-steps");
        map_skill("move","seven-steps");
        map_skill("cure","godcure");
	set_skill("literate",60);
	set_skill("force",50);
	set_skill("godcure",60);
	set_skill("unarmed",20);
        set("chat_chance_combat",55);
        set("functions/break-kee/level",46);
        set("chat_msg_combat",({
         (: perform_action("stabber.break-kee") :),
        }));
        set("str", 30);
	set("con", 30);
	set("int",20);
	set("per",40);
	setup();
        carry_object("/open/doctor/obj/needle4.c")->wield();
        add_money("gold",5);
}
int accept_object(object who,object ob)
{
   if( ob->query("id")!= "pass" )
     {
      write("л����˵:����������ʲô??���� ,������һ�������� ,�һ��ǽ����˰� \n");
      return 0;
      }
   else 
    {
     write("л����˵: ��Ȼ���ѵõ�ʦ��������,��ͽ�ȥ�ؾ����!\n");
     who->set("allow_pass",1);
     who->move("/open/doctor/room/book2");
     return 1;
     }
  }


