#include </open/open.h>
inherit NPC;
void create()
{
    set_name("������ϰ��",({"trainee"}) );
    set("title", "��������Ա");
    set("gender", "����");
    set("age",18);
    set("attitude", "killer");
    set("long", "����������ɱ����ϰ��NPC \n");
    set("kee",500);
    set("max_kee",500);
    set("combat_exp",1000);
    setup();
}