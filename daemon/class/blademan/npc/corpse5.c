inherit NPC;
void create()
{
        set_name("ħ����ʿ", ({ "mcorpse" }));
        set("gender", "����" );
        set("long", "ħ����������ʿ��\n");
        set("combat_exp",600000);
        set("attitude","aggressive");
        set("age",500);
        set("force",2000);
        set("max_gin",500);
        set("max_kee",2000);
        set("max_force",2000);
        set("force_factor",10);
        set("str", 35);
        set("cor", 35);
        set("per", 35);
        set("int", 35);
        set("cps", 35);
        set("con", 35);
        set("spi", 35);
        set("kar", 35);
        set_skill("six-fingers", 70);
        set_skill("sunforce", 70);
        set_skill("henma-steps",70);
        set_skill("unarmed",70);
        set_skill("dodge",70);
        set_skill("parry",70);
        set_skill("move",70);
        set_skill("force",70);
        map_skill("unarmed", "six-fingers");
        map_skill("parry","six-fingers");
        map_skill("force", "sunforce");
        map_skill("dodge", "henma-steps");
        map_skill("move", "henma-steps");
        setup();
}
