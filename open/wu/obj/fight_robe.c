
// fighter_robe.c

#include <armor.h>
 
inherit CLOTH;
 
void create()
{
        set_name( "�䶷��", ({ "fighter robe","robe"}) );
        set("long",
                     "����һ������������·����ڼ粿���ز��ر�����ǿ\n"
                       "������ս�����裬�����ϻ���һ��""��""�֣���һ����\n"
                       "����ʮ��ϲ���ķ�װ\n");
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit"              , "��");
                set("material"          , "cloth");
                set("armor_prop/armor"  ,  5);
                set("armor_prop/unarmed",  2);
        }

        setup();
}
