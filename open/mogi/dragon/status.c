//����ħ�� armor
#include <ansi.h>
inherit ITEM;
void create()
{
set_name("���������λ",({"liu"}));
        set_weight(5000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("long","
        һ����ľ�ĵ�̳ɵ�����
\n");
        set("unit", "��");
        set("value",200000);
}
        setup();
}
