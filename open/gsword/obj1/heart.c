#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIR"Ѫ���ܵ�����"NOR, ({ "heart" }));
        set_weight(5000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long","Ѫħת������Ҫ�����ࡣ\n");
   set("no_drop", 1);
   set("no_auc", 1);
        set("value", 0);
        }
}
