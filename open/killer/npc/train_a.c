#include </open/open.h>
inherit NPC;
void create()
{
    set_name("ĩλ��",({"trainee"}) );
    set("title", "��������Ա");
    set("gender", "����");
    set("age",21);
    set("attitude", "killer");
    set("long", "����������ɱ����ϰ��NPC \n");
    set("max_force",200);
    set("force",200);
    set("max_kee",1200);
    set("kee",1200);
    set("combat_exp",25000);
    setup();
}