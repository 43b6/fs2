//һ�Ű���------by dhk 2000.5.7
#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name("һ�Ű���", ({ "duan's letter","letter" }) );
    set_weight(100);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "����һ�Ŷ����ױ�Ҫ��������İ�����\n");
       set("unit", "��");
       set("value", 100);
       set("no_sell",1);
       set("no_drop",1);
       set("no_auc",1);
       set("no_get",1);
      }
    setup();
}


