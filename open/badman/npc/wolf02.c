inherit NPC;

void create()
{
     set_name("����", ({ "red wolf","red","wolf" }));
        set("race", "Ұ��");
    set("age",7);
    set("long","һֻ����,�������ؿ�����.\n");
        set("str", 30);
         set("cor", 30);
        set("con", 30);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
    set("combat_exp",320000);
    set("max_kee",1500);
    set("kee",1500);
    set("max_force",750);
    set("force",750);
    set("force_factor",15);
  set_temp("apply/armor",100);
  set_temp("apply/attack", 100);
    set("attitude","peaceful");
        set("random_move",2);
        set("chat_chance",10);
//        set("chat_msg", ({
//            (: "random_move" :),
//                       }) );
  set_skill("dodge",200);
  set_skill("parry",150);
        setup();

}
