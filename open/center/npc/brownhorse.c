// rewrite from old_buffalo.c by oda
// brownhorse.c by powell

inherit NPC;

void create()
{
        set_name("��ɫ��", ({ "Brown horse", "horse" }) );
        set("race", "Ұ��");
        set("age", 20);
        set("long", 
            "һƥ��׳����ɫ��, ���Խ���ס��;�İ���, �Ǵ����ĺù��ߡ�\n");

        set("str", 20);
        set("cor", 25);
        set("max_gin", 220);
        set("max_kee", 210);
        set("max_sen", 200);

        set("limbs", ({ "����", "ͷ��", "ǰ��", "����", "β��" }) );
        set("verbs", ({ "hoof", "bite"  }) );

        set("chat_chance", 3);
        set("chat_msg", ({
                "��ɫ�������ֶ��ȥ, һ��������������ӡ�\n"}) );
                
        set("combat_exp",200);

        setup();
}
