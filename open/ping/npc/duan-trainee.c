inherit NPC;

void create()
{
        set_name("�μҳ�ϰ����", ({ "trainee" }) );
        set("gender", "����" );
        set("age", 19);
        set("long", "�㿴��һλ�����ʵ��������, ���ں�ͬ����С�\n");
        set("combat_exp",5000);
        set_temp("apply/attack",10);
        set_temp("apply/dodge",15);
        setup();
}

