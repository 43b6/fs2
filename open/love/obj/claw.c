//Qc by Anmy /98/7/6
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
          set_name("����",({"thunder claw","claw"}));
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("long","����һ��צ�ӣ����Ϻ���к�ǿ��������\n");
                set("value",1000);
                set("material", "crimsonsteel");

        set("wield_msg", "$N��$n�������ϣ�ȫ���Ѩ������ͨ�ˣ������սʿһ����\n");
        set("unwield_msg", "$N�����ϵ�$nж��������������ʧ�ˣ�ȫ����ԭ�������ӡ�\n");
        }
        init_unarmed(35);

        setup();
}
