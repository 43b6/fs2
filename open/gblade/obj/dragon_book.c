#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIC"��������"NOR,({"dragon-blade book","book"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","����д�ſ���������ʽ��һ���顣\n");
                set("value",800);
                set("material", "paper");
        }
        setup();
}
