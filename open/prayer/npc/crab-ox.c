inherit NPC;

void create()
{
      set_name("з�ǳ�ëţ",({"crab-ox"}));
        set("long","��������������,��Ϊ����ְ��,���Ա������ᵽ�˼�!!\n"    );
        set("race", "Ұ��");
        set("age", 110);
       set("attitude","peacful");    
        set("max_sen",7000);
        set("max_gin",7000);
        set("max_kee",4000);
        set("max_force", 10000);
        set("force",10000);
        set("force_factor",5);
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
        set("combat_exp",100000);      
        setup();
}            