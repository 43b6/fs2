inherit NPC;

void create()
{
      set_name("[36m������β��[0m",({"evil-bird","bird"}));
        set("long","�Ϲ�ʱ��������,ӵ�м����������ߵ�β��,������а��Ķ�Ѩ��
        ��̫����,���Ա����а��!!\n"    );
        set("race", "Ұ��");
        set("age", 360);
       set("attitude","aggressive");    
        set("max_kee",6000);
        set("max_sen",7000);
        set("max_gin",7000);
        set("max_force",6000);
        set("force",6000);
        set("force_factor",5);
        set("str", 110);
        set("cor", 40);
        set("spi", 40);
        set("int", 60);
        set("limbs", ({ "ͷ��", "����", "ǰ��", "����", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set_temp("apply/attack", 70);
        set_skill("dodge",120);
        set_temp("apply/damage", 160);
        set_temp("apply/armor", 50);
        set("combat_exp",500000);      
        setup();
        add_money("gold",5);
}            