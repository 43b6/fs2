#include <ansi.h>

inherit EQUIP;
void create()
{
set_name("ɱ�ֲ�Ь",({"killer shoes","shoes"}));
set_weight(1000);
if ( clonep() )
set_default_object(__FILE__);
else{
set("long","����С���Ͽ���������ԣ�����·���ž�������ʮ�ֺ��á�\n");
set("unit","��");
set("value",1000);
                set("armor_prop/armor",2);
                set("armor_prop/dodge",2);
                 set("armor_prop/parry",1);
set("material","cloth");
set("armor_type","boots");
setup();
}
}