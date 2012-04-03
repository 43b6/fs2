#include <ansi.h>
inherit NPC;
void create()
{
  object ob;
  set("title","���ﰵɱ��");
  set_name("槼�",({"tachi"}) );
  set("long","�����ó���ɱ��ʽ��һ���˸������������� \n");
  set("race", "����");
  set("gender","Ů��");
  set("combat_exp",2000000);
  set("age",35);
  set("class","killer");
  set("cor",99);
  set("cps",99);
  set("str",99);
  set("kee",4000);
  set("max_kee",4000);
  set("sen",4000);
  set("max_sen",4000);
  set("gin",4000);
  set("max_gin",4000);
  set("force",4500);
  set("max_atman",4500);
  set("atman",4500);
  set("max_force",4500);
  set("force_factor",10);
  set("bellicosity",1500);
  set_skill("dodge",150);
  set_skill("parry",150);
  set_skill("magic",150);
  set_skill("dagger",150);
  set_skill("force",150);
  set_skill("throwing",150);
  set_skill("blackforce",150);
  set_skill("shade-steps",150);
  set_skill("rain-throwing",150);
  set_skill("shadow-kill",150);
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  map_skill("dagger","shadow-kill");
  map_skill("move","shade-steps");
  map_skill("parry","rain-throwing");
  map_skill("force","blackforce");
  set_temp("invis",1);
  setup();
  ob=carry_object("/open/killer/headkill/obj/f_dag");
  ob->wield();
  ob=carry_object("/open/killer/headkill/obj/i_dag");
  ob->wield();
carry_object("/open/killer/obj/k_ring.c")->wear();
carry_object("/open/killer/weapon/k_boot2.c")->wear();
carry_object("/open/killer/weapon/k_arm2.c")->wear();
carry_object("/open/killer/weapon/k_head2.c")->wear();
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
  if( ob->query("class")!="killer" )
  {   
    if (ob->query("class"))
    {  command("cmd bak "+ob->query("id"));  }
  }
}
