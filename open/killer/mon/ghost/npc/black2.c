// BLACK2.C �ڷ����ϼ�ɱ��
inherit NPC;
void create()
{
  object ob1;

  set_name("�ڷ����ϼ�ɱ��",({"black killer", "killer"}));
  set("title","�������ĳ�Ա");
  set("long","�ڷ�����������, ��ȥ���, ������Ӹ������ɶ�����");
  set("gender","����");
  set("combat_exp",500000);
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

  set("max_kee",2800);
  set("eff_kee",2800);
  set("kee",2800);
  set("max_gin",1500);
  set("gin",1500);
  set("max_sen",1500);
  set("sen",1500);
  set("force",2200);
  set("max_force",2200);
  set("bellicosity",1000);

  set_skill("throwing",70);
  set_skill("parry",70);
  set_skill("dodge",80);
  set_skill("force",70);

  set_skill("shade-steps",80);
  set_skill("rain-throwing",80);
  set_skill("blackforce",80);

  map_skill("parry","rain-throwing");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  map_skill("force","blackforce");

  setup();
  ob1=carry_object("/open/killer/obj/lustar");
  ob1->add_amount(200);
  ob1->wield();
  add_money("gold",5);
}
