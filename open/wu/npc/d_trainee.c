// trainee.c
// ��ݵ���
inherit NPC;
void create()
{
        set_name("��ݵ���", ({ "trainee" }) );
        set("gender", "����" );
        set("age", 24);
        set("long", "�㿴��һλ��ĸߴ�ĺ��ӣ���������ز����š�\n");
        set("combat_exp",60000);
        set_temp("apply/attack",100);
        set_temp("apply/dodge",90);
        setup();
        carry_object(__DIR__"obj/linen")->wear();
}
