// �μ� ���� made by xman
#include </open/open.h>
inherit NPC;
void create()
{
        set_name("С����",({"boy"}));
        set("gender","����");
        set("class","scholar");
        set("combat_exp", 1000);
        set("attitude","peaceful");
        set("age",10);
        set("chat_chance", 10);
        set("chat_msg", ({
        "С���׵�: ����ȥ��ү�ġ��鷿����һ����\n",
        "С���׵�: ����ѧ��һ���ķ����š��ϵ��书ม�\n",
        }));
        set("inquiry", ([
        "thief" : "���ǳ��˵����, ����ô����֪��?",
        "�鷿" : "��ү�ڸ�����һ�������鷿, ��Ҫ�ҵ������š����ܽ�ȥ��",
        "����" : "�������ڴ���֮��, ����һֱ�Ҳ���, ��ү˵, ���ҳ�����ܴ���ȥ��",
        "һ���ķ�����"  : "��!��Ȼ�Ǽ����й�һ���ķ����°�, ������",
        ]));
        set("force",150);
        set("max_force",150);
        set("max_kee",300);
        set("kee",300);
        set("force_factor", 1);
        set_skill("force",10);
        set_skill("unarmed",30);
        set_temp("apply/dodge",30);
        setup();
        add_money("gold",1);
}

