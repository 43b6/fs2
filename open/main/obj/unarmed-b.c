// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
         set_name(HIR"Ѫ"+HIB"Ӱ��"+HIR"��"NOR,({"blood figring","figring"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","��֪��������������ɱ���������գ�Ũ���Ѫ��ζ���ƺ���������Թ�飮\n");

                set("value",10000);
                set("material", "steel");
                  set("armor_prop/unarmed",10);
     set("wield_msg", "$N������ɹ�������$n������΢΢¶����������ס� \n");
      set("unwield_msg", "$N�㽫���ϵ�$nж���������������³�һ��������\n");
        }
        init_unarmed(80);
        setup();
}
