// BLACK5.C 黑风组三级杀手
inherit NPC;
void create()
{
  object ob1;

  set_name("黑风组三级杀手",({"black killer", "killer"}));
  set("title","黑牙联的成员");
  set("long","黑风组正如其名, 来去如风, 负责监视各大门派动静。");
  set("gender","男性");
  set("combat_exp",200000);
  set("attitude","friendly");
  set("force_factor",10);
  set("age",20);
  set("class","killer");

  set("str", 30);
  set("int", 30);
  set("spi", 30);
  set("cps", 30);
  set("con", 30);
  set("kar", 30);

  set("max_kee",1300);
  set("eff_kee",1300);
  set("kee",1300);
  set("max_gin",800);
  set("gin",800);
  set("max_sen",800);
  set("sen",800);
  set("force",1000);
  set("max_force",1000);
  set("bellicosity",500);

  set_skill("throwing",40);
  set_skill("parry",40);
  set_skill("dodge",70);
  set_skill("force",40);

  set_skill("shade-steps",70);
  set_skill("rain-throwing",50);
  set_skill("blackforce",50);

  map_skill("parry","rain-throwing");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  map_skill("force","blackforce");

  setup();
  ob1=carry_object("/open/killer/obj/lustar");
  ob1->add_amount(200);
  ob1->wield();
  add_money("gold",1);
}
