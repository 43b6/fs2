//ƽ����ʯͷ------by dhk 2000.5.7
#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""HIY"ƽ���Ĵ�ʯͷ"NOR"", ({ "big stone","stone" }) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "��ô����������Ŵ�ʯͷ�ֵֹģ����ƿ��zpush_stone�{��֪����������\n");
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
  add_action("do_push","push_stone");
}
int do_push()
{
  object me = this_player();
  if(me->query_temp("meetgod_2") != 1)
{
  write(""HIC"��Ȼ��...�ض�ɽҡ...վ��վ���ȣ�"NOR"\n");
  me->set_temp("meetgod_1",0);
}
  else
  if(me->query_temp("meetgod_2") == 1)
  {
  write(""HIC"��Ȼ��...�ض�ɽҡ...վ��վ���ȣ�"NOR"\n");
  write(""HIY"��ȻԶԶ�Ĵ���һ����������"HIG"���ɹȣ������ɣ���Ե����������"HIY"��"NOR"\n");
  me->set_temp("meetgod_3",1);
  }
  return 1;
}

