// BLACK1.C �ڷ����鳤 ����ս
inherit NPC;
void create()
{
  object ob1;

  set_name("����ս",({"wey fight","fight"}));
  set("title","�ڷ����鳤");
  set("long","�ڷ����鳤����ս���ٹ���, ��������ĺڷ�����������, ��ȥ��硣");
  set("gender","����");
  set("combat_exp",500000); 
  set("attitude","friendly");
  set("force_factor",10);
  set("age",40);
  set("class","killer");

  set("str", 30);
  set("int", 30);
  set("spi", 30);
  set("cps", 30);
  set("con", 30);
  set("kar", 30);

  set("max_kee",1500);
  set("eff_kee",1500);
  set("kee",1500);
  set("force",800);
  set("max_force",800);
  set("bellicosity",500);

  set_skill("throwing",60);
  set_skill("parry",60);
  set_skill("dodge",70);
  set_skill("force",70);

  set_skill("shade-steps",80);
  set_skill("rain-throwing",70);
  set_skill("blackforce",70);

  map_skill("parry","rain-throwing");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  map_skill("force","blackforce");

  setup();
  ob1=carry_object("/open/killer/obj/lustar");
  ob1->add_amount(200);
  ob1->wield();
  carry_object("/open/killer/weapon/k_arm2.c")->wear();
  carry_object("/open/killer/weapon/k_belt2.c")->wear();
  carry_object("/open/killer/weapon/k_boot2.c")->wear();
  add_money("gold",8);
}
