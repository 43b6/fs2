#include <weapon.h>
#include <ansi.h>

inherit	UNARMED;

void create()
{
        seteuid(getuid());
        set_name(YEL"��ɫ��צ"NOR,({"soil claw","claw"}));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","��������ʹ�õı�צ��������������΢΢��â����������������\n");
                set("value",1000000);
                set("material", "gold");
                set("wield_msg", "����$n,$N������һ�����ע����������\n");
                set("unwield_msg", "$N�����е�$nС�ĵ�����\n");
        }
        init_unarmed(100);

        setup();
}
