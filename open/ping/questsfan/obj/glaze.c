//˫���������------by dhk 2000.4.9
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""HIC"˫����"HIR"������"NOR"", ({ "fire colored glaze","glaze" }) );
    set_weight(100);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "����һ�������ڣ�"HIB"���������ȫ"NOR"����"WHT"����ƪ"HIC"��"NOR"�Ĵ�����֮һ��\n");
       set("unit", "��");
       set("value", 1500000000);
       set("no_auc",1);
       set("no_get",1);
       set("no_drop",1);
       set("no_sell",1);
      }
    setup();
}
