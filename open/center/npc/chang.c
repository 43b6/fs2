// chang.c

#include "/open/open.h"

inherit NPC;

void create()
{
  set_name("�ȶ�", ({ "Chang", "chang" }));
  set("race", "����");
  set("gender", "Ů��");
  set("age", 15);
  set("long", "һ�������ĵ�Ѿͷ, ��������¥�ݿ�, ȰѰ���Ͳ�Ҫ����С����Ϣ.\n");
  set("attitude", "friendly");
  set("cor", 20);
  set("combat_exp",490);
  set("chat_chance", 2);

  set("chat_msg",({
    (: this_object() :),
    (: this_object() :),

    "�ȶ�˵����С���Ƕ�����, ��Ҫ��ȥ�������Ǻ��� ?\n",
    "�ȶ�˵�� : �������й����ڳ�С����, ȥ������ !\n",
    }));

  set_temp("apply/attack", 15);
  set_temp("apply/damage", 5);
  set_temp("apply/armor", 5);
  setup();
  carry_object(CENTER_OBJ"cloth2")->wear();
}
