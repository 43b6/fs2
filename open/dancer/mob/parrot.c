inherit NPC;

void create()
{
        set_name("���ƾŹ���", ({ "parrot", "bird" }) );
        set("race", "Ұ��");
        set("age", 1);
        set("long", "��Ѱ���ʺ�������, ����һֻ��β���߲ʻ��ƵľŹ���.\n");
        set("str", 20);
        set("cor", 15);
        set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set("chat_chance", 8);
        set("chat_msg", ({
                "�Ź��� �ɵ���ļ�����еĶ���˵����ӭ���١���\n",
                "�Ź��� ����������˵��С�㶼���� С�硯��\n",
                "�Ź��� ͻȻ�ſ������˳�ȥ, ����һ������Խ����ǰ��\n",
                "�Ź��� �˷ܵĶ���˵����������, �������ม���\n" }) );

        set_temp("apply/attack", 1000);
        set_skill("dodge",100);
        set_skill("unarmed",70);
        set("combat_exp",10000);
        set_temp("apply/armor", 3000);
        setup();
}
