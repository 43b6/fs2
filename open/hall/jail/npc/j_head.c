
//j_master.c
#include <ansi.h>
inherit NPC;

void create()
{
        set_name("������", ({"jail master","master"}));
        set("title", "�η�ͳ��");
        set("nickname", "[36mһǮһ��[0m");
        set("long",@LONG
    һ�����Ŷ����ı��ξ޺�����������һ���������ĸֵ�������
�������ӵ�����!!�����η���ͷͷ����������ʿ����˵���Ϣ��
LONG);
        set("gender", "����");

        set("age", 35);
        set("attitude", "peaceful");
        set("score", 200000);
        set("combat_exp", 70000);

        set("str", 30);
        set("max_gin", 2000);
        set("max_kee", 2000);
        set("max_sen", 2000);
        set("int", 30);
        set("cor", 30);
        set("cps", 30);
        set("con", 30);
        set("inquiry", ([
            "����" : "Ҫ����!!??û����...�������������û�취...����һ��һ����!!������!!�ٺ�..",
        ]) );

        setup();

        set("chat_chance", 5);
        set("chat_msg", ({
            "ûɶ�¾Ϳ��!!���Ӻ�æ....û�ո�������Щ�����Ϲ��!!\n",
            "ɶ��!!��˵!!\n",
        }));
}

