#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name("��צ",({"monkey claw","claw"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","���Ǻ����İ������� !\n");

set("value",80000);
set("material", "steel");
        }
init_unarmed(80);
        setup();
}
