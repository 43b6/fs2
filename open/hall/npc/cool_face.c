inherit NPC;
inherit F_MASTER;
#include <ansi.h>

void create()
{
        set_name("����ɷ", ({ "cool face", "cool", "face" }) );
        set("title", "���ò�ͷͳ��");
        set("nickname", HIR"Ѫ��"NOR);
        set("gender", "����" );
        set("age", 46);
        set("str", 50);
        set("cor", 50);
        set("cps", 50);
        set("int", 50);
        set("spi", 50);
        set("kar", 50);
        set("per", 50);
        set("con", 50);

        set("max_atman", 5000);
        set("max_force", 5000);
        set("max_mana", 5000);
        set("atman", 5000);
        set("force", 5000);
        set("mana", 5000);
        set("force_factor", 5);

        set("long",
        "�˳ƺ��������ľ�����, ��˵���ϰ�����, ��˽��������������İ���\n"
        "����������Ҳ��Ϊ���ķṦΰҵ, �����ش���һ���з�������\n");

        set("combat_exp", 900000);
        set("score", 20000);

        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
        "�ٺ�....ƾ����������!!ֻ�м������ķ�!!\n",
        "��֪��ߵغ��С��!!������!!\n"
        }) );

        set_skill("unarmed", 60);
        set_skill("force", 100);
        set_skill("parry", 100);
        set_skill("dodge", 100);
        set_skill("sword", 100);
        set_skill("literate", 90);

        set("inquiry", ([
                "��Ѫ��" : "�����Խ��𡫡�",
        ]) );

        setup();
        carry_object(__DIR__"obj/redsword")->wield();
        carry_object(__DIR__"obj/redarmor")->wear();
}
