// trainee.c

inherit NPC;

void create()
{
        set_name("����ԩ��", ({ "corpse" }) );
        set("gender", "����" );
        set("long", "�����������е�ԩ��\n");
        set("combat_exp",200000);
        set("attitude","aggressive");
        set("age",1000);
        set("force",1200);
        set("max_gin",500);
        set("max_kee",1000);
        set("max_force",1000);
        set("force_factor",10);
        set("str",40);
        set("cor", 40);
        set("per", 30);
        set("int", 30);
        set("cps", 40);
        set("con", 30);
        set("spi", 30);
        set("kar", 40);
        set_skill("badstrike", 60);
        set_skill("snowforce", 60);
        set_skill("ghost-steps",60);
        set_skill("unarmed",50);
        set_skill("dodge",40);
        set_skill("parry",30);
        set_skill("move",50);
        set_skill("force",70);
        map_skill("unarmed", "badstrike");
        map_skill("parry","badstrike");
        map_skill("force", "snowforce");
        map_skill("dodge", "ghost-steps");
        map_skill("move", "ghost-steps");
        setup();
}
