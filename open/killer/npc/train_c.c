#include </open/open.h>
inherit NPC;
void create()
{
    set_name("������ϰ��",({"trainee"}) );
    set("title", "��������Ա");
    set("gender", "����");
    set("age",19);
    set("attitude", "killer");
    set("long", "����������ɱ����ϰ��NPC \n");
    set("max_force",100);
    set("force",100);
    set("kee",1000);
    set("max_kee",1000);
    set("combat_exp",4000);
    setup();
}