#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIR"Ѫ���ܵĴ���"NOR, ({ "brain" }));
        set_weight(5000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long","Ѫħת������Ҫ�Ĵ��ԡ�\n");
   set("no_drop", 1);
   set("no_auc", 1);
        set("value", 0);
        }
}
