// goufu.c

#include "/open/open.h"

inherit NPC;

void create()
{
  set_name("�η�", ({ "Gou-Fu", "goufu", "fu" }));
  set("race", "����");
  set("gender", "����");
  set("age", 25);
  set("long","��ֻ��һ���η�, ûɶ�ÿ���, �ٿ�С���������� !\n");
  set("attitude", "peaceful");
  set("str", 26);
  set("cor", 22);
  set("combat_exp",273);

  set_temp("apply/attack", 15);
  set_temp("apply/damage", 3);
  set_temp("apply/armor", 2);
  setup();
}
