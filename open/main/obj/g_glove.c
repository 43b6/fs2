inherit EQUIP;
#include <ansi.h>
void create()
{
    set_name(HIY"��"+HIW"��"+NOR"����",({"gold gloves","gloves"}));
	set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
ǧ����˿���Ƴɵ����ף������������ȼ���ǿ��������
");
        set("unit", "˫");
	set("value",4000);
        set("material","cloth");
	set("armor_type", "hands");
	set("armor_prop/armor",10);
      set("armor_prop/attack",8);
      set("armor_prop/parry",8);
        }
        setup();
}
