#include </open/open.h>
inherit NPC;
void create()
{
    set_name("�μҸ߼���ϰ��",({"trainee"}) );
    set("gender", "����");
    set("age",18);
    set("attitude", "peaceful");
    set("long", "��μҵ�����ϰ��ѧ�� \n");
    set("kee",1000);
    set("max_kee",1000);
    set("combat_exp",8000);
    setup();
}
