#include <ansi.h>
inherit NPC;
void create ()
{
  set_name("����",({"death"}));
  set("long","    һ��ڲ���ס���������壬Լ�Կ��Կ�������ͷ���µ�ͷ­
���ֳ����������ϵĻ��裬�ն����ۿ�����ʱ��¶����⡣\n");
  setup();
  carry_object("/open/killer/island/obj/head");
}
