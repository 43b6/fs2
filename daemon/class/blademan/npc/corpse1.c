inherit NPC;
void create()
{
        set_name("ħ����ʬ", ({"mcorpse"}));
        set("gender", "����" );
        set("long", "ħ����������ʬ��\n");
        set("combat_exp",200000);
        set("attitude","aggressive");
        set("age",500);
        set("force",1000);
        set("max_gin",500);
        set("max_kee",1000);
        set("kee",1000);
        set("max_force",1000);
        set("force_factor",5);
        set("str", 30);
        set("cor", 30);
        set("per", 30);
        set("int", 30);
        set("cps", 30);
        set("con", 30);
        set("spi", 30);
        set("kar", 30);
        set_skill("snow-martial", 50);
        set_skill("snowforce", 50);
        set_skill("snow-kee",50);
        set_skill("black-steps",50);
        set_skill("unarmed",50);
        set_skill("dodge",50);
        set_skill("parry",50);
        set_skill("move", 50);
        set_skill("force",50);
        map_skill("unarmed", "snow-martial");
        map_skill("parry", "snow-kee");
        map_skill("force", "snowforce");
        map_skill("dodge", "black-steps");
        map_skill("move", "black-steps");
        setup();
}
