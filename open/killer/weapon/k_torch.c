#include <armor.h>

inherit EQUIP;
void create()
{
set_name("��Ч�ͻ�ߡ��",({"fire torch","torch"}));
set("long","ɱ����ִ������ʱ�����õĳ�ʱ�������豸\n");
set_weight(500);
set("armor_type","finger");
set("light_up",-1);  
if( clonep() )
         set_default_object(__FILE__);
else {
                set("unit", "��");
set("value",3000);
set("material","gold");
set("armor_prop/armor",3);
set("light",-1);
        }
        setup();
}