#include <ansi.h>
inherit ITEM;
void create()
{
    set_name("����", ({ "corpse"}) );
    set_weight(1000000);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "ʬ�ǲ�ȱ��ȫ��������ǰ�ܵ�������˺���\n");
       set("unit", "��");
       set("value", 0);
       set("no_sell",1);
       set("no_auc",1);
       set("no_give",1);
       set("no_get",1);
      }
    setup();
}
