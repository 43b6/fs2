// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIB"�߲����צ"NOR,({"seven claw","claw"}));
set_weight(5000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","���������������ʦ������ʮ�꾫������,����������ֻ�б�������ȫ���ӡ�\n");

                set("value",10000);
            set("rigidity",100);
                set("material", "crimsonsteel");
set("wield_msg","$Nװ����$n����ͻȻ�伤��$N�߰���־!!");
        }
        init_unarmed(30);
        setup();
}
