inherit NPC;

void create()
{
      set_name("����˫β��",({"ditail-snake"}));
        set("long","����ʽ�����ĳ���֮һ,�Լ�����,������β�͸����в�ͬ������!!\n"    );
        set("race", "Ұ��");
        set("age", 110);
       set("attitude","aggressive");    
        set("max_kee",2500);
        set("str", 110);
        set("cor", 40);
        set("spi", 40);
        set("int", 60);
        set("limbs", ({ "ͷ��", "����", "ǰ��", "����", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set_temp("apply/attack", 70);
        set_skill("dodge",50);
        set_temp("apply/damage", 160);
        set_temp("apply/armor", 50);
        set("combat_exp",50000);      
        setup();
}            