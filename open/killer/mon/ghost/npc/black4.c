// BLACK4.C �ڷ������ɱ��
inherit NPC;
void create()
{
  object ob1;

  set_name("�ڷ������ɱ��",({"black killer", "killer"}));
  set("title","�������ĳ�Ա");
  set("long","�ڷ�����������, ��ȥ���, ������Ӹ������ɶ�����");
  set("gender","����");
  set("combat_exp",300000);
  set("attitude","friendly");
  set("force_factor",10);
  set("age",25);
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
  set("max_gin",1000);
  set("gin",1000);
  set("max_sen",1000);
  set("sen",1000);
  set("force",1500);
  set("max_force",1500);
  set("bellicosity",600);

  set_skill("throwing",50);
  set_skill("parry",55);
  set_skill("dodge",65);
  set_skill("force",70);

  set_skill("shade-steps",60);
  set_skill("rain-throwing",50);
  set_skill("blackforce",60);

  map_skill("parry","rain-throwing");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  map_skill("force","blackforce");

  setup();
  ob1=carry_object("/open/killer/obj/lustar");
  ob1->add_amount(200);
  ob1->wield();
  add_money("gold",2);
}
