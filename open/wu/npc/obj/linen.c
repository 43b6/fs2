#include <ansi.h>
#include <armor.h>

inherit CLOTH;

void create()
{
   set_name("ϰ���",({"gonfu cloth","cloth"}));
       set_weight(250);
	if( clonep() )
		set_default_object(__FILE__);
	else {
          set("unit","��");
          set("value",2000);
		set("material", "cloth");
     set("long","����һ����ɽ����ݵ���ר������,�ƺ����ر�ķ�������\n");

             set("armor_prop/armor",2);
               set("armor_prop/dodge",-1);
               set("armor_prop/unarmed",2);
}
	setup();
}
