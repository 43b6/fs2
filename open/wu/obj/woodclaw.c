#include <weapon.h>
inherit UNARMED;
void create()
{
set_name("ľצ",({"wood claws","claws"}));
set_weight(10000);
if(clonep())
      set_default_object(__FILE__);
else
{
set("long","����һ����ľͷ���ɵ�צ��\n");
set("unit","��");
set("value",1000);
set("material","wood");
}
init_unarmed(10);
setup();
}
