#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIR"�����ӵ���ͷ"NOR, ({ "sa-head" }));
        set_weight(5000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long","������ʥ�������ӡ�����ͷ��\n");
        set("value", 0);
        }
}

