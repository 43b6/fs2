#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        seteuid(getuid());
        set_name("��ͷ��",({"ghost-head blade","blade"}));
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","����һ�ֽ������ͳ��õĵ� ,��������Ϊ���� .\n");
                set("value",10000);
                set("material", "gold");
                set("wield_msg", "����$n,$N���û��������ɱ��.\n");
                set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
        }
        init_blade(40);

        setup();
}

