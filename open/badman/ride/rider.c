#include </open/open.h>
#include <ansi.h>

inherit NPC;

string do_want();
void create()
{
  set_name("����",({ "elder shi","elder","shi"}) );
  set("title","����");
  set("gender", "����");
  set("age",68);
  set("attitude", "peaceful");
  set("no_kill",1);
  set("no_fight",1);
  set("long","һ����ò���Ƶ����ˣ��Ǹ����ˡ�������׼����Ⱥ��ʳ�\n");
  set("chat_chance",6);
  set("chat_msg", ({
  "�Ƕ��԰��ԣ��óԵľ�Ҫ����\n",
  }) );

  set("inquiry", ([
  "����" : "����ɶ�͸���Ҫ��want���ͺ��ˣ��ʶ�����������\n",
  ]));

setup();
}
