inherit NPC;
void create()
{
  set_name("����",({"gray wolf","gray","wolf"}));
  set("race", "Ұ��");
  set("age",4);
  set("long","һֻ����,�������ؿ�����.\n");
  set("str", 30);
  set("con", 30);
  set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
  set("verbs", ({ "bite"}));
  set("combat_exp",150000);
  set("max_kee",1000);
  set("kee",1000);
  set("max_force",500);
  set("force",500);
  set("force_factor",10);
  set_temp("apply/armor", 30);
  set_temp("apply/attack", 10);
  set_skill("dodge",120);
    set_skill("parry",100);
        setup();

}
