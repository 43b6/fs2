#include <ansi.h>
inherit EQUIP;

void create()
{
        set_name("[32mǬ��ͷ��[0m", ({ "boris hat", "hat" }) );
        set_weight(4000);
                if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "ʥ��̽���ר�õ�ͷ�������þߡ�\n");
                set("unit", "��");
                set("value",150000);
                set("material", "fur");
            set("wear_msg","[36m$Nһ������$n��[35mǬ������[36mӿ�֣�����ٿ���������ࡣ[0m\n");
                set("armor_type", "head");
                set("armor_prop/armor", 10);
                
        }
        setup();
}                 
