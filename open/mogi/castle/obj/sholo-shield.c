// �����armor��mob exp:180��
//mob skill:badforce+badstruke+evil-blade 
#include <armor.h>
#include <ansi.h>
inherit SHIELD;


void create()
{
        set_name(MAG"��������"NOR,({"sholo shield","shield"}) );
	set_weight(4700);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
���������۱��������������ɵĶܣ���ǹ���롣
\n");
        set("unit", "��");
        set("value",100000);
        set("material","crimsonsteel");
	set("armor_prop/armor",17);
        }
        setup();
}
