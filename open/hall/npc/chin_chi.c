
inherit NPC;
#include <ansi.h>

void create()
{
set_name("��  ��", ({ "chin chi", "chin", "chi" }));
        set("title", "��������ͷ");
        set("nickname","[1;34m׷��ǹ[0m");
        set("age", 23);
        set("str", 25);
        set("cor", 20);
        set("cps", 20);
        set("int", 20);
        set("spi", 20);
        set("kar", 24);
        set("per", 20);
        set("con", 30);

        set("max_force", 2000);
        set("force", 2000);
        set("force_factor", 3);

        set("long", @LONG
    һλ��İ�С�����ӣ�����͸��������ɱ�������������ʹ��е�
�ܲ����ڡ���˵����Ϊ��׷һ����������ֻ��ɱ���ڷ�կ����һƬ��
��Ѫ���������Ǵ�����������һʱ�ĺ䶯!!
LONG);
        set("combat_exp", 150000);
        set("score",  3000);

        set("chat_chance_combat", 50);
        set("chat_msg_combat", ({
        "�ٺ�....!!  �ԹԵ�ι�ҵ�ǹ��!!\n",
        "����׷����ʽ��!!  ������!!\n"
        }) );

        set_skill("unarmed", 20);
        set_skill("force",  60);
        set_skill("parry",  40);
        set_skill("dodge",  60);
        set_skill("sword",  30);
        set_skill("literate", 20);

        set("inquiry", ([
                "׷��ǹ" : "�ٺ�!!��Ҫ�ҵ�ǹ��?!�������������!!",
        ]) );

        setup();
        carry_object(__DIR__"obj/g_lance")->wield();
        carry_object(__DIR__"obj/b_suit")->wear();
}
