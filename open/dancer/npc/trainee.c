// trainee.c
// ��ϰ��
inherit NPC;
void create()
{
        set_name("��ϰ��", ({ "trainee" }) );
        set("gender", "Ů��" );
        set("age", 20);
        set("long", "����������ҹ��С������ϰ��\n");
        set("combat_exp",60000);
        set_temp("apply/attack",100);
        set_temp("apply/dodge",90);
        setup();
}
