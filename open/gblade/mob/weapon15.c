#include <weapon.h>

inherit STAFF;

void create()
{
        set_name("邪杖", ({ "evil staff","staff" }));
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "根");
                set("long", "
由邪气凝聚成形的钢杖，隐约间可感觉到邪灵嗜杀的呼唤。
\n");
                set("value", 1000);
                set("material", "steel");
                set("wield_msg", "$N从腰际抽出$n握在手中.\n");
                set("unwield_msg", "$N将手中的$n插回腰际.\n");
        }
        init_staff(30);
        setup();
}
