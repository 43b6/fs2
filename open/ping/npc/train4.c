#include </open/open.h>
inherit NPC;
void create()
{
    set_name("�μ��ϼ�����ϰ��",({"trainee"}) );
    set("gender", "����");
    set("age",18);
    set("attitude", "peaceful");
    set("long", "��μҵ�����ϰ��ѧ�� \n");
    set("kee",1200);
    set("max_kee",1200);
    set("combat_exp",15000);
    setup();
}
