// fung.c

#include "/open/open.h"

inherit NPC;

void create()
{
  set_name("����", ({ "Fung", "fung" }));
  set("race", "����");
  set("gender", "Ů��");
  set("age", 17);
  set("long","����������, ���ȵ�������.\n");
  set("attitude", "peace");
  set("cor", 15);
  set("combat_exp",238);
  set("chat_chance", 2);

  set("chat_msg",({
    (: this_object() :),
    "������С� �� ~~~~~\n",
    }));

  set_temp("apply/attack", 15);
  set_temp("apply/damage", 3);
  set_temp("apply/armor", 3);
  setup();
}
