#include <ansi.h>
inherit EQUIP;

void create()
{
 set_name("�ǻû�ϥ",({"starlegging","starlegging"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�������ƳɵĻ�ϥ , �����˫�ŵ����ݶ� .\n");
        set("unit","��");
        set("value",1000);
        set("material","cloth");
        set("armor_type","leggings");
	set("armor_prop/armor",6);
        set("armor_prop/move",2);
        set("armor_prop/dodge",2); 
       }
        setup();
}
