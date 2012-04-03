// ����С�ɵı�׼NPC
inherit NPC;

string to_man();
string to_ask();

void create()
{
  object ob1;

  set_name("������",({"dou_tan","dou","tan"}));
  set("title","�������鳤");
  set("long","������ɱ�ֵ�Ļ�󹦳���ɱ����һ��Ѹ������ɴ��˶�������");
  set("gender","����");
  set("combat_exp",1000000); 
  set("attitude","friendly");
  set("force_factor",10);
  set("age",50);
  set("class","killer");

  set("str", 56);
  set("int", 40);
  set("spi", 40);
  set("cps", 40);
  set("con", 55);
  set("kar", 20);

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
  set("bellicosity",300);

  set_skill("throwing",80);
  set_skill("parry",80);
  set_skill("dodge",80);
  set_skill("shade-steps",80);
  set_skill("rain-throwing",75);
  map_skill("parry","rain-throwing");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
set("inquiry",([
"׷ɱ��" : (: to_man :),
"ŷ������" : (: to_ask :),
]));
  setup();
  ob1=carry_object("/open/killer/obj/lustar");
  ob1->add_amount(200);
  ob1->wield();
  carry_object("/open/killer/weapon/k_arm3.c")->wear();
  carry_object("/open/killer/weapon/k_belt2.c")->wear();
  carry_object("/open/killer/weapon/k_cloth2.c")->wear();
  add_money("gold",20);
}

string to_man()
{
  object ob,me;
 
 me=this_player();

 if (me->query_temp("mission3") != 1)
   return "˵ʲô���Ҳ���Ү";

 tell_object(me,"����Ҫ׷ɱ�Ǹ���ѽ�����������š�������\n");
 tell_object(me,"�ðɣ��Ҿ͸����㣬�Ǹ��˾�����Ӱ��--Ҷ˫\n");
 tell_object(me,"�����书�ǳ���ǿ������㹦�������ߣ���ò�Ҫȥ����\n");
 tell_object(me,"����ֽ����ȥ��˳������ȥ�ң���ĳ����������ҵ���ָʾ��\n");
 if (me->query_temp("mission3") != 2)
{
 ob=new("/open/killer/obj/paper1.c");
 ob->move(me);
}
 me->set_temp("mission3",2);
 return "С��һ��ѽ����ʾ�ĵص����ɴ˴���ʼ��";
}

string to_ask()
{
  object ob,me;
 
 me=this_player();
 if (me->query_temp("mission3") != 5)
   return "$N˵ʲô���Ҳ���Ү";
 tell_object(me,"�벻����Ȼ�����ҵ�ŷ�����գ���\n");
 tell_object(me,"�ðɣ��Ҿ�����Ӱ��--Ҷ˫���ã������ɣ�\n");
 set_name("Ҷ˫",({"yar_sha","yar","sha"}));
 set("title","��Ӱ��");
 set("combat_exp",700000); 
 ob=new("/open/killer/obj/yar_head.c");
 ob->move(this_object());
 me->set_temp("mission3",6);
 this_object()->kill_ob(me);
 return "���У�����";
}
