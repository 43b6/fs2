inherit NPC;

void create()
{
        set_name("�ɺ�", ({ "holy crane","crane" }) );
        set("race", "Ұ��");
        set("age", 3);
        set("long", "
һ��ѩ�׵�������̬������飬�������ģ�����֮���Ե��׳���Ⱦ����
��֮�ʷ����鶯�ɽݣ���Ȼ����������Ȼ�������ֻ�չ����裬�޲���
��������");
        set("str", 20);
        set("cor", 25);
        set("verbs", ({ "bite"}));
                set("limbs", ({ "ͷ��", "����",  }) );
        set("combat_exp",1000);
        set_temp("apply/armor", 15);
        set_temp("apply/attack", 10);
        set_skill("dodge",20);
        setup();

}
