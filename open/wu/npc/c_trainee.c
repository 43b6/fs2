// trainee.c
// ��ݵ���
inherit NPC;
void create()
{
        set_name("��ݵ���", ({ "trainee" }) );
        set("gender", "����" );
        set("age", 22);
        set("long", "�㿴��һλ��ĸߴ�ĺ��ӣ���������ز����š�\n");
        set("combat_exp",27000);
        set_temp("apply/attack",40);
        set_temp("apply/dodge",60);
        setup();
        carry_object(__DIR__"obj/linen")->wear();
}
