//moon dagger by bss (����Ů����)
#include <weapon.h>
#include <ansi.h>
inherit DAGGER;

void create()
{
        set_name(HIC "���" NOR,({"moon dagger","dagger"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","���ǻ��ҵ��洫�������ܹ�����ȫȫ����ϻ��Ҿ�ѧ\n
                �����ҡ�����һ�����ɶ�õĺñ�����\n");
                set("value",1000);
                set("material", "steel");
        }
        init_dagger(100);
        set("wield_msg", HIY"$N˫�ֺ�Ȼһ����$n�����ħ����ĳ�����$N���ϡ�\n"NOR);
        set("unwield_msg",HIY"$N����һ����$n����ʧ�ˡ�\n"NOR);
        setup();
}

