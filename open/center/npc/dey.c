//Room /u/l/lotus/dey.c

#include "/open/open.h"
inherit NPC;

void create()
{
  set_name("�ʵ�", ({ "Tsai-Dey", "dey"}));
  set("race", "����");
  set("gender", "Ů��");
  set("age", 20);
  set("long","�ʵ����ŵ����Ƶ���ɴ����, ���ֵ�ת������, ����Լ�����������������һֻ����ͷ׵ĺ���, ��������....\n");
  set("attitude", "peaceful");
  set("str", 15);
  set("cor", 20);
  set("per", 27);
  set_skill("dodge", 80);
  set("combat_exp",2433);
  set("chat_chance", 1);

  set("chat_msg",({
    (: this_object() :),
    (: this_object() :),

    "�ʵ���Ц��˵ : ����������� !\n",
    "�ʵ�Ц��˵ : ������ʹ������ ~~~ \n",
    }));

  set_temp("apply/attack", 15);
  set_temp("apply/damage", 3);
  set_temp("apply/armor", 2);
  setup();
  add_money("silver",10);
  carry_object(CENTER_OBJ"cloth2")->wear();
  carry_object(CENTER_OBJ"pant1")->wear();
}
