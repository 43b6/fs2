inherit NPC;
#include </open/open.h>
#include <ansi.h>
string do_key();
void create()
{
    set_name("С��ʿ",({"find tod","tod"}) );
    set("gender", "����");
    set("age",45);
    set("attitude", "peaceful");
    set("long","һ��׷��z���{�����壬�Ĵ����е�С��ʿ\n");
    set("kee",20000);
    set("max_kee",20000);
    set("combat_exp",3200);
  set("chat_chance",10);
    set("chat_msg", ({
"С��ʿ���ĵ�˵������!!!�������һ�����������Ͱ�ģ������ҾͿ��Խ���Ե�ˡ�\n"
    }));
    setup();
  carry_object("/open/center/obj/torch");
  add_money("silver",20);
}
