
//j_guard.c
#include <ansi.h>
inherit NPC;

void create()
{
        set_name("��������", ({"jail guard","guard"}));
        set("long",@LONG
    ������ǰ����һλȫ�����������ӣ�Ҫ���������Ҫ�����൱
�������!!������ʮ�ɵİ��գ�����������ñ���....������������
�����ܹ��������ƺ��Ǹ���ϲ��Ǯ (money)�ļһ�!!
LONG);
        set("gender", "����");

        set("age", 23);
        set("attitude", "peaceful");
        set("score", 200000);
        set("combat_exp", 50000);

        set("str", 30);
        set("max_gin", 2000);
        set("max_kee", 2000);
        set("max_sen", 2000);
        set("int", 30);
        set("cor", 30);
        set("cps", 30);
        set("con", 30);
        set("inquiry", ([
            "̽��" : "�ٺ�....�뿴�������ǰ�??�ø��������ӳ���...���ٿ��ǿ���..�ٺ�...",
        ]) );

        setup();

        set("chat_chance", 15);
        set("chat_msg", ({
            "��ɶ!!!û�²�Ҫ�������й�!!���!!\n",
            "��Ҳ���ȥ�����ǰ�!!��ѵ��η�Ҫ��Ҫ����!!�ٺ�..\n",
        }));
}

