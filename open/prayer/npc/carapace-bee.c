inherit NPC;

void create()
{
      set_name("Ӳ�ǻƷ�",({"carapace bee"}));
        set("long","��ֵı��ֻƷ�,ӵ���ڹ���Ӳ��,������̫�ṥ������!!\n"    );
        set("race", "Ұ��");
        set("age", 60);
       set("attitude","friendly");    
        set("max_kee",3000);
        set("max_sen",7000);
        set("max_gin",7000);
        set("max_force",3000);
        set("force",3000);
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
        set("combat_exp",300000);      
        setup();
}            