#include </open/open.h>
inherit NPC;
void create()
{
    set_name("��λ��",({"trainee"}) );
    set("title", "��������Ա");
    set("gender", "����");
    set("age",26);
    set("attitude", "killer");
    set("long", "����������ɱ����ϰ��NPC \n");
    set("max_force",500);
    set("force",500);
    set("max_kee",2000);
    set("kee",2000);
    set("combat_exp",150000);
    setup();
}