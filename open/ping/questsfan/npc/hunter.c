inherit NPC;
#include </open/open.h>
#include <ansi.h>
string do_key();
void create()
{
    set_name("��õ�����",({"hunter"}) );
    set("gender", "����");
    set("age",45);
    set("attitude", "peaceful");
    set("long","�μҵ��帺���������ڵ����ˡ�\n");
    set("kee",20000);
    set("max_kee",20000);
    set("combat_exp",3200000);
    setup();
  carry_object("/open/center/obj/torch");
  add_money("silver",20);
}
