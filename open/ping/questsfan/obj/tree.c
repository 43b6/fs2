//��ֵĴ���------by dhk 2000.5.7
#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""GRN"�ߴ����"NOR"", ({ "tall tree","tree" }) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "��ô����������ô����ֵֹģ�ҡҡ���zshaking_tree�{��֪����������\n");
       set("unit", "��");
       set("value", 150);
       set("no_sell",1);
       set("no_auc",1);
       set("no_give",1);
       set("no_get",1);
      }
    setup();
}
void init()
{
  add_action("do_shake","shaking_tree");
}
int do_shake()
{
  object me = this_player();
  if(me->query_temp("meetgod_1") != 1)
{
  write(""HIR"��Ȼ����һ����ɫ����ӰѸ���ӹ���"NOR"\n");
  me->set_temp("meetgod_1",1);
}
  else
  if(me->query_temp("meetgod_1") == 1)
  {
  write(""HIR"��Ȼ����һ����ɫ����ӰѸ���ӹ���"NOR"\n");
  write(""HIC"��Ȼ�������������ƣ���"HIG"���ɹȣ������ɣ���Ե����������"HIC"��"NOR"\n");
  me->set_temp("meetgod_2",1);
  }
  return 1;
}

