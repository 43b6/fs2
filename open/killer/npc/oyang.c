// ����С�ɵı�׼NPC
inherit NPC;

string to_man();

void create()
{
  object ob1;

  set_name("ŷ������",({"oyang_boku","oyang","boku"}));
  set("title","���һ��");
  set("long","���˴�˵����Са��ʦ�����书�ߵľ��ˣ���������ò�Ҫɱ��");
  set("gender","����");
  set("combat_exp",9999999); 
  set("attitude","friendly");
  set("force_factor",10);
  set("age",50);
  set("class","killer");
  set("str", 99);
  set("int", 99);
  set("spi", 99);
  set("cps", 99);
  set("con", 99);
  set("kar", 99);

  set("max_gin",500);
  set("eff_gin",500);
  set("gin",500);
  set("max_kee",9999);
  set("eff_kee",9999);
  set("kee",9999);
  set("max_sen",500);
  set("eff_sen",500);
  set("sen",500);  
  set("force",9999);
  set("max_force",9999);
  set("atman",9999);
  set("max_atman",9999);
  set("bellicosity",10);

  set_skill("throwing",200);
  set_skill("parry",200);
  set_skill("dodge",200);
  set_skill("move",200);
  set_skill("sword",200);
  set_skill("magic",200);
  set_skill("shade-steps",200);
  set_skill("rain-throwing",200);
  map_skill("parry","rain-throwing");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  set("chat_chance_combat",55);
  set("chat_msg_combat",({
(:perform_action,"throwing.manakee":)}));
set("inquiry",([
"׷ɱ��" : (: to_man :),
]));
  setup();
  ob1=carry_object("/open/killer/obj/lustar");
  ob1->add_amount(999);
  ob1->wield();
  carry_object("/open/killer/weapon/k_arm3.c")->wear();
  carry_object("/open/killer/weapon/k_belt2.c")->wear();
  carry_object("/open/killer/weapon/k_cloth3.c")->wear();
  add_money("gold",99);
}
string to_man()
{
  object ob,me;
 
 me=this_player();
 if (me->query_temp("mission3") != 4)
   return "$N˵ʲô���Ҳ���Ү";
 tell_object(me,"�üһ��Ȼ�����ҵ���������\n");
 tell_object(me,"�������ֺ����������\n");
 tell_object(me,"��ʵ����������鳤���ȥִ��������\n");
 tell_object(me,"����ô��ֻ��Ϊ�����Σ��Լ�����Ϊ\n");
 me->set_temp("mission3",5);
 return "��ֻҪ������ŷ�����գ�������֪����������";
}
