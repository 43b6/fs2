#include <ansi.h>
#include "/open/open.h"
inherit NPC;

string do_special_fight();

void create()
{
object ob;
set("nickname","���ﰵ������");
set_name("���컯",({"tnwa"}));
set("long","��������������ר�����������ˣ�һ���˸����Ը�������\n");
set("gender","����");
set("class","killer");
set("combat_exp",2100000);
set("attitude","heroism");
set("age",35);
set("str", 99);
set("cor", 99);
set("cps", 99);
set("per", 99);
set("int", 99);
set("kee",5000);
set("max_kee",5000);
set("gin",3600);
set("max_gin",3600);
 set("sen",4000);
  set("max_sen",4000);
  set("max_atman",4500);
  set("atman",4500);
  set("mana",1000);
  set("max_mana",1000);
  set("force",4500);
  set("max_force",4500);
  set("force_factor",10);
  set("bellicosity",1500);
  set("quest/rain",1);
set_skill("magic",50);
set_skill("dodge",100);
set_skill("force",100);
set_skill("move",100);
set_skill("parry",100);
set_skill("throwing",120);
set_skill("rain-throwing",150);
set_skill("shade-steps",100);
set_skill("blackforce",120);
map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  map_skill("move","shade-steps");
  map_skill("parry","rain-throwing");
  map_skill("force","blackforce");
set_temp("apply/armor",70);
set("chat_chance_combat",50);
set("chat_msg_combat",({
(:perform_action,"throwing.manakee":),
(: do_special_fight :),
}));
setup();
ob=carry_object("/open/killer/obj/bellstar");
ob->set_amount(200);
ob->wield();
ob=carry_object("/open/killer/obj/black");
ob->set_amount(6);
carry_object("/open/killer/obj/k_ring.c")->wear();
carry_object("/open/killer/weapon/k_boot2.c")->wear();
carry_object("/open/killer/weapon/k_arm2.c")->wear();
carry_object("/open/killer/weapon/k_head2.c")->wear();
}

string do_special_fight()
{
        command("shot "+this_player()->query("id"));
        return "";
}
