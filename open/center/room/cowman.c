// cowman

#include "/open/open.h"

inherit NPC;

void create()
{
  set_name("ţ�ⷷ��", ({ "Cowman", "cowman" }));
  set("race", "����");
  set("gender", "����");
  set("age", 35);
  set("long","���ϴ�һ��, ƽʱ��ţΪҵ, ɱ���ڵĿ�����\n");
  set("attitude", "killer");
  set("str", 25);
  set("cor", 25);
  set("combat_exp", 1000);
  set("chat_chance", 3);

  set("chat_msg",({
    (: this_object() :),
    "��С��, �һ����ӵĺ���, ���ӷ������㲻�� !\n",
    }));

  set_temp("apply/attack", 15);
  set_temp("apply/damage", 10);
  set_temp("apply/armor", 10);
  setup();
  carry_object(CENTER_OBJ"blad")->wear();
}
