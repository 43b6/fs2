// rewrite from old_buffalo.c by oda
// blackhorse.c by powell

inherit NPC;

void create()
{
        set_name("����", ({ "Black horse", "horse" }) );
        set("race", "Ұ��");
        set("age", 20);
        set("long", 
            "һƥ�۾����ĺ���, ȫ���ë�ڵķ���, ����������ǧ����ļ��ơ�\n");


        set("str", 30);
        set("cor", 35);
        set("max_gin", 500);
        set("max_kee", 500);
        set("max_sen", 500);

        set("limbs", ({ "����", "ͷ��", "ǰ��", "����", "β��" }) );
        set("verbs", ({ "hoof", "bite"  }) );

        set("chat_chance", 1);
        set("chat_msg", ({
                "����̧ͷ˻��һ��, ������һ������\n"}) );
                
        set("combat_exp",300);

        setup();
}
