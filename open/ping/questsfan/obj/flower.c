//������С��------by dhk 2000.5.7
#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""HIB"������"HIM"С��"NOR"", ({ "small flower","flower" }) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "��ô������������������С���ֵֹģ����ſ��zsmell_flower�{��֪����������\n");
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
  add_action("do_smell","smell_flower");
}
int do_smell()
{
  object me = this_player();
  if(me->query_temp("meetgod_3") != 1)
  {
  write(""HIM"��Ȼ��һ�����ѣ��"NOR"\n");
  write(""HIR"����һ�ڣ�ʲôҲ��֪���ˡ�"NOR"\n");
  me->set_temp("meetgod_1",0);
  me->set_temp("meetgod_2",0);
  }
  else
  if(me->query_temp("meetgod_3") == 1)
  {
  write(""HIM"��Ȼ��һ�����ѣ��"NOR"\n");
  write(""HIR"����һ�ڣ�ʲôҲ��֪���ˡ�"NOR"\n\n\n\n\n\n\n");
  write(""HIY"�������Ļָ�֪���ˡ�"NOR"\n");
  write(""HIC"��Ȼ����ߴ�����������"HIG"���ɹȣ������ɣ���Ե����������"HIC"��"NOR"\n");
  me->set_temp("meetgod_4",1);
  }
  return 1;
}

