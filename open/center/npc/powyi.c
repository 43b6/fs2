// powyi.c

#include "/open/open.h"
inherit NPC;

void create()
{
  set_name("����", ({ "Powyi", "powyi" }));
  set("race", "����");
  set("gender", "Ů��");
  set("age", 40);
  set("long", "Ӻ�ݻ���, �����̴�, ����ض����쵱���ľ�ɫ����\n");
  set("attitude", "friendly");
  set("cor", 23);
        set("combat_exp",640);
  set("chat_chance", 2);
  set("chat_msg",({
    (: this_object() :),
    (: this_object() :),
    (: this_object() :),
    (: this_object() :),

    "����Ц��˵�������� ! ������ !\n",
    "����Ц��˵ : ��һ���� ?\n",
    "����Ц��˵ : û��ϵ ! һ����, ��������. \n"
    "����Ц��˵ : ���Ǹո��ҵ�һ��С����, ���ú�Ư��, �������������������.\n",
    }));

  set_temp("apply/attack", 20);
  set_temp("apply/damage", 10);
  set_temp("apply/armor", 10);
  setup();
  carry_object(CENTER_OBJ"cloth2")->wear();
}
