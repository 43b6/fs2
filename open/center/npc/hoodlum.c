// ��д�� bandit.c
// hoodlum.c by powell

#include "/open/open.h"
inherit NPC;

void create()
{
        set_name("��å", ({ "Hoodlum", "hoodlum" }) );
        set("gender", "����");
        set("age", 25);
        set("long",
            "��һ�ͻȻת��ͷ�����˵���, һ��Ҫ�������ȥ������, ���Ǳ������ĺá�\n"
            "�������ڼ�Ժ������Ŀ�ľ���ר�����ÿ��ӵ���ܡ�\n"
        );

        set("combat_exp",390);
        set("score", 1);
        set("attitude", "peaceful");
        set_skill("dodge", 10);
        set("inquiry", ([
            "�ƻ���"    :       "��˵�ƻ�����һɫ��Ů�ˣ������Ǹ�������������!",
            "��Ů"      :       "�����ˣ��Ƚɵ�Ǯ���Ҽ�Ů�ɡ�",
            "������"    :       "���ˣ������ү����ã��Ź���һ����",
            "�ɵ�Ǯ"    :       "��Ǯ? ֱ�Ӹ��Ҿͺ����",
            "��Ǯ"      :       "��Ǯ? ֱ�Ӹ��Ҿͺ����",
            "���˹�"    :       "����ֻ��������ֵ����������Ͳ��ö�֪�ˡ�",
            "���"      :       "�����Ҵ��ͷ���������Ҳֻ�����ձ����Ѱ��ˡ�",
            "ˮ�ɹ���"  :       "����ɶ��ˣ�����������һ�ۡ�",
            "�����"    :       "˭����ĸ���ǰ����ٳ����ˡ�",
            "Ӣ���ĸ����":     "˭˭˭? ��������˵����?",
        ]) );

        setup();
        add_money("silver", 3);
        carry_object(CENTER_OBJ"club1")->wield();
        carry_object(CENTER_OBJ"belt1")->wear();
}