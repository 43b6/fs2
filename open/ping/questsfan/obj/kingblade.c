//̫�ʵ�������------by dhk 2000.4.22
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""HIY"̫�ʵ�"NOR"��"HIB"����"NOR"", ({ "kingblade bluetooth","kingblade","bluetooth" }) );
    set_weight(1000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "����һ�����ɱ���ԯ�ʵ�ʱ�������̫�ʵ�����������ഫ\n"
                  +"�˱�������ʹ���߷��񣬶��һ���֮ʱ������Ʋ�������֮\n"
                  +"�����Ĺ�Ӱ��ֻҪ�����������ཻ�棬������ᱻ��������\n");
       set("unit", "��");
       set("value", 150000);
       set("no_get",1);
       set("no_auc",1);
       set("no_sell",1);
       set("no_drop",1);
       
      }
    setup();
}
