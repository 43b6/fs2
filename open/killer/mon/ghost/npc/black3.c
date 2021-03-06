// BLACK3.C 黑风组一级杀手
inherit NPC;
void create()
{
  object ob1;

  set_name("黑风组一级杀手",({"black killer", "killer"}));
  set("title","黑牙联的成员");
  set("long","黑风组正如其名, 来去如风, 负责监视各大门派动静。");
  set("gender","男性");
  set("combat_exp",400000);
  set("attitude","friendly");
  set("force_factor",10);
  set("age",35);
  set("class","killer");

  set("str", 30);
  set("int", 30);
  set("spi", 30);
  set("cps", 30);
  set("con", 30);
  set("kar", 30);

  set("max_kee",2000);
  set("eff_kee",2000);
  set("kee",2000);
  set("max_gin",1200);
  set("gin",1200);
  set("max_sen",1200);
  set("sen",1200);
  set("force",1600);
  set("max_force",1600);
  set("bellicosity",800);

  set_skill("throwing",65);
  set_skill("parry",65);
  set_skill("dodge",80);
  set_skill("force",70);

  set_skill("shade-steps",65);
  set_skill("rain-throwing",65);
  set_skill("blackforce",70);

  map_skill("parry","rain-throwing");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  map_skill("force","blackforce");

  setup();
  ob1=carry_object("/open/killer/obj/lustar");
  ob1->add_amount(200);
  ob1->wield();
  add_money("gold",3);
}
