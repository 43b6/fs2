#include "/open/open.h"

inherit NPC;

void create()
{
  set_name("���Ĺ���", ({ "chou hsin", "hsin" }));
  set("race", "����");
  set("gender", "Ů��");
  set("age", 18);
  set("long",@LONG
���Ĺ����С��ͨ����, �������Թ����������ǡ���˵ÿ
��������Ҵ��Ĺ���ʱ, ��������˷���, С��������ζ�,
ũ��Ĳ�������˳��ݡ�
LONG);
  set("attitude", "friendly");
  set("str", 17);
  set("cor", 23);
  set("combat_exp",1348);

  set_temp("apply/attack", 25);
  set_temp("apply/damage", 10);
  set_temp("apply/armor", 10);
  setup();
  carry_object(CENTER_OBJ"amulet1")->wear();
  carry_object(CENTER_OBJ"pant2")->wear();
  carry_object(CENTER_OBJ"cloth3")->wear();
  carry_object(CENTER_OBJ"goo_zheng")->wield();
}
