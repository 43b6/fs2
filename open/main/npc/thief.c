#include <ansi.h>

inherit NPC;

void create()
{
        set_name("��·С��", ({"little thief", "thief"}) );
        set("long","����һ����ɭ������·��С������
����δ�ѵ����ϣ���¶��һ�ɻ���
�ı��顣\n" );
        set("attitude", "peaceful");
        set("limbs", ({"ͷ��", "�ز�", "�Ȳ�", "�ֱ�"}) );
        set("age", 17);
	set("combat_exp", 6000);
        set("chat_chance", 10);
         set("chat_msg", ({
                 "С��˵��:�������Ķ���?\n",
                 "С��˵��:����������·��.\n",}) );

        setup();

        add_money("coin", 70);
        carry_object("/obj/cloth")->wear();
        carry_object("/u/j/judy/ok/hat.c")->wear();
        carry_object("/u/j/judy/ok/dagger.c")->wield();
}
