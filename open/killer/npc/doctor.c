#include <room.h>
#include <ansi.h>
inherit NPC;

string do_heal();

void create()
{
set_name("ɱ��ҽ��",({"doctor"}) );
set("long","����һ����������ɱ�֣�����ҽ�����߻����ƶ��ˣ����Բ�û�б�ɱ��\n
            ���������Ҫ�Ļ��������Ƿ�Ը������(heal)�ɡ�\n");
set("gender","����");
set("age",55);
set("combat_exp",200000);

set("inquiry",([ 
    "heal" : (: do_heal :),]));
setup();
}

int accept_fight(object me)
{
   return notify_fail("�Ź��Ұɣ����Ҷȹ������ɣ��һ�����(heal)������\n");
}

string do_heal()
{
  object who;

  who = this_player();
  message_vision("����Ѹ�ٵ���$N���ϸ���Ѩ�����룬˫��������ס��ı���\n",who);
  message_vision("����˫�ۣ���������� �� �� �� ��-- ��������\n",who);
  message_vision("�е���һ��ǿ�ҵ��������澭��������������첻��\n",who);
  who->clear_condition();
  return "�����������ų�������\n";
}
