inherit NPC;

void create()
{
        set_name("С����", ({ "small monkey","monkey" }) );
        set("race", "Ұ��");
        set("age", 5);
        set("long", "һֻС����.\n");
        set("str", 35);
        set("cor", 45);
        set("limbs", ({ "����", "����", "ǰצ" , "��צ" , "β��" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",2000);
        set_temp("apply/armor", 40);
        set_temp("apply/attack", 60);
        set_skill("dodge",60);
        set("chat_chance",10);
        set("chat_msg",({
                "����ץץƨ�� ,���ú���� .\n",
                }));
        setup();

}
