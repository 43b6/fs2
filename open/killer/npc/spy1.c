#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("�����鰵ɱ��Ա",({"silver killer","killer","silver"}) );
  set("long","���ڴ˵����ػ�������Ĺ�������Ȼ���¹����� \n");
  set("race", "����");
  set("gender","����");
  set("combat_exp",10000);
  set("age",30);
  set("title","�������ĳ�Ա");
  set("class","killer");
  set("cor",30);
  set("cps",30);
  set("str",20);
  set("kee",200);
  set("max_kee",200);
  set("force",100);
  set("max_atman",200);
  set("atman",200);
  set("max_force",100);
  set("force_factor",3);
  set("chat_chance",10);
  set("bellicosity",300);
/*  set_skill("rain-throwing",50);
  set_skill("throwing",55);
  set_skill("blackforce",35);
  set_skill("force",45);
  set_skill("dodge",55);
  set_skill("parry",55);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing");   */
  set_temp("invis",1);
  setup();
    ob=carry_object("/open/killer/obj/dag1");
    ob->wield();
}
void init()
{
    object ob;
    ::init();
    set_temp("invis",1);
    if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
    call_out("greeting",1 , ob);   }
}
void greeting(object ob)
{
  if( ob->query("class")=="killer")
  {  command("grin "+ob->query("id"));  }
  else  
  {
     if (ob->query("class"))
     {  command("cmd bak "+ob->query("id"));  }
     command("hi "+ob->query("id"));  
  }
}
