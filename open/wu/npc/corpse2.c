// trainee.c

inherit NPC;

void create()
{
        set_name("��ɽ����", ({ "corpse" }) );
        set("gender", "����" );
        set("long", "�����ɰ��������û������Ļ���\n");
        set("combat_exp",400000);
        set("attitude","aggressive");
        set("age",1000);
        set("force",2700);
        set("max_gin",500);
        set("max_kee",2500);
        set("max_force",1500);
        set("force_factor",15);
        set("str",40);
        set("cor", 40);
        set("per", 30);
        set("int", 30);
        set("cps", 40);
        set("con", 30);
        set("spi", 30);
        set("kar", 40);
        set_skill("lungshan", 70);
        set_skill("haoforce", 70);
        set_skill("henma-steps",70);
        set_skill("unarmed",70);
        set_skill("dodge",70);
        set_skill("parry",70);
        set_skill("move",70);
        set_skill("force",70);
        map_skill("unarmed", "lungshan");
        map_skill("parry","lungshan");
        map_skill("force", "haoforce");
        map_skill("dodge", "henma-steps");
        map_skill("move", "henma-steps");
        setup();
}
