#include </open/open.h>
inherit NPC;
void create()
{
    set_name("һ����ϰ��",({"trainee"}) );
    set("title", "��������Ա");
    set("gender", "����");
    set("age",20);
    set("attitude", "killer");
    set("long", "����������ɱ����ϰ��NPC \n");
    set("force",200);
    set("max_force",200);
    set("kee",1000);
    set("max_kee",1000);
    set("combat_exp",10000);
    setup();
}