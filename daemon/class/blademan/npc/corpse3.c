inherit NPC;
void create()
{
        set_name("ħ��Թ��", ({ "mcorpse" }));
        set("gender", "����" );
        set("long", "ħ��������Թ�ꡣ\n");
        set("combat_exp",400000);
        set("attitude","aggressive");
        set("age",500);
        set("force",2000);
        set("max_gin",500);
        set("max_kee",2000);
        set("max_force",2000);
        set("force_factor",5);
        set("str", 35);
        set("cor", 35);
        set("per", 35);
        set("int", 35);
        set("cps", 35);
        set("con", 35);
        set("spi", 35);
        set("kar", 35);
        set_skill("lungshan", 60);
        set_skill("haoforce", 60);
        set_skill("fire-kee", 60);
        set_skill("henma-steps",60);
        set_skill("unarmed",60);
        set_skill("dodge",60);
        set_skill("parry",60);
        set_skill("move",60);
        set_skill("force",60);
        map_skill("unarmed", "lungshan");
        map_skill("parry","fire-kee");
        map_skill("force", "haoforce");
        map_skill("dodge", "henma-steps");
        map_skill("move", "henma-steps");
        setup();
}
