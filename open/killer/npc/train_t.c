#include </open/open.h>
inherit NPC;
void create()
{
    set_name("��λ��",({"trainee"}) );
    set("title", "��������Ա");
    set("gender", "����");
    set("age",25);
    set("attitude", "killer");
    set("long", "����������ɱ����ϰ��NPC \n");
    set("max_force",300);
    set("force",300);
    set("max_kee",1500);
    set("kee",1500);
    set("combat_exp",75000);
    setup();
}