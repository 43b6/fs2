inherit NPC;
void create()
{
        set_name("ħ����ʿ", ({ "mcorpse" }));
        set("gender", "����" );
        set("long", "ħ����������ʿ��\n");
        set("combat_exp",700000);
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
        set_skill("badstrike", 80);
        set_skill("badforce",80);
        set_skill("henma-steps",80);
        set_skill("unarmed",80);
        set_skill("dodge",80);
        set_skill("parry",80);
        set_skill("move",80);
        set_skill("force",80);
        map_skill("force","badforce");
        map_skill("unarmed", "badstrike");
        map_skill("parry","badstrike");
        map_skill("dodge", "henma-steps");
        map_skill("move", "henma-steps");
        setup();
}
