#include <ansi.h>

inherit NPC;

void create()
{
        set_name("���Ų���", ({ "hall soldier", "hall", "soldier" }) );
        set("long",@LONG
���Ǹ����Ų��죬Ҳ�������ŵĻ��㣬�۹�����ԡ�ʵ���ǲ���ô
���������������������ڶ࣬�ƺ��е���衢����һ�������ӡ�������
��ѵ����һ�¡�
LONG);
        set("attitude", "peaceful");
        set("pursuer", 1);

        set("str", 17);
        set("cor", 16);
        set("cps", 15);

        set("combat_exp", 8000);

        set("chat_chance_combat", 10);
        set("chat_msg_combat", ({
                "����ȵ�������!!\n",
                "����ȵ��������!!ȥ����!!\n"
        }) );

        set_skill("unarmed", 25);
        set_skill("parry", 30);
        set_skill("dodge", 30);
        set_skill("move",  10);

        setup();

}
