#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("���ǻ���ͷ", ({ "tiger-head" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","�����ײеĶ��ǻ���ͷ.\n");
                set("value", 0);
        }
}
