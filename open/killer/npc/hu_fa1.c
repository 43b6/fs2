// ����С�ɵı�׼NPC
inherit NPC;
void create()
{
  object ob1;

  set_name("������",({"jan wu","wu"}));
  set("title","��Ҷ���鳤");
  set("long","�������������µĺڽ�ʹ�ߣ�һ���书��˵����Ҷ��ɱ֮��");
  set("gender","����");
  set("combat_exp",800000); 
  set("attitude","friendly");
  set("force_factor",10);
  set("age",45);
  set("class","killer");

  set("str", 45);
  set("cor", 35);
  set("int", 35);
  set("spi", 35);
  set("cps", 35);
  set("per", 35);
  set("con", 35);
  set("kar", 35);

  set("max_gin",200);
  set("eff_gin",200);
  set("gin",200);
  set("max_kee",2200);
  set("eff_kee",2200);
  set("kee",2200);
  set("max_sen",200);
  set("eff_sen",200);
  set("sen",200);  
  set("force",1500);
  set("max_force",1500);
  set("bellicosity",400);

  set_skill("throwing",85);
  set_skill("parry",87);
  set_skill("dodge",88);
  set_skill("shade-steps",85);
  set_skill("rain-throwing",80);
  map_skill("parry","rain-throwing");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  setup();
  ob1=carry_object("/open/killer/obj/lustar");
  ob1->add_amount(200);
  ob1->wield();
  carry_object("/open/killer/weapon/k_cloth2.c")->wear();
  carry_object("/open/killer/weapon/k_cap2.c")->wear();
  carry_object("/open/killer/weapon/k_head2.c")->wear();
  add_money("gold",12);
}
