#include <armor.h>
#include <ansi.h>
inherit SHIELD;
object user;
void create()
{
        set_name( HIB "修罗战斗盾" NOR ,({"fiend shield","shield"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
  set("long", "冥殿修罗专用的防护用具。\n");
                set("unit", "个");
                set("value",10000);
                set("material","gem");
                set("armor_prop/armor",10);
                set("armor_prop/parry",3);
        }
        setup();
}

