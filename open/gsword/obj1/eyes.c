#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIR"Ѫħ��"NOR, ({ "eyes" }));
        set_weight(5000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
   set("no_drop", 1);
   set("no_auc", 1);
        set("long","Ѫħת������Ҫ���۾���\n");
        set("value", 0);
        }
}
