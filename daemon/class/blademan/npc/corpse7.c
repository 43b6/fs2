inherit NPC;
void create()
{
        set_name("ħ����ʥ", ({ "mcorpse" }));
        set("gender", "����" );
        set("long", "ħ����������ʥ��\n");
        set("combat_exp",800000);
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
        set_skill("snow-martial", 80);
        set_skill("snowforce", 80);
        set_skill("snow-kee",80);
        set_skill("black-steps",80);
        set_skill("unarmed",80);
        set_skill("dodge",80);
        set_skill("parry",80);
        set_skill("move",80);
        set_skill("force",80);
        map_skill("unarmed", "snow-martial");
        map_skill("parry","snow-kee");
        map_skill("force", "snowforce");
        map_skill("dodge", "black-steps");
        map_skill("move", "black-steps");
        setup();
}
