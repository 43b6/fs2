#include <ansi.h>
inherit EQUIP;

void create()
{
set_name("大红彩带",({"red cape","cape"}) );
set_weight(3000);
if ( clonep())
set_default_object(__FILE__);
else {
set("unit","条");
set("material","silk");
set("value", 320);
set("armor_type", "cape");
set("armor_prop/armor", 4);
set("armor_prop/dodge", 4);
set("long","
以东瀛运来之纯黑丝织成的彩带，在黑暗中移动，令人难以分清楚来人。\n");

}
setup();

}