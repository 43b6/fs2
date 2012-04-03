// made by ccat
#include <ansi.h>
#include <armor.h>
inherit CLOTH;

void create()
{
        set_name(HIW"冰霜寒丝袍"NOR, ({ "cold cloth","cloth"}) );
        set("long",
                   "此为传说中历经冰霜而成的的神袍，\n"
                   "如此罕见的奇物轻如天羽、坚如星煌，同时不断地散\n"
                   "发苍色之光辉，照耀人间。\n");
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","件");
                set("material","crimsonsteel");
                set("value",100000);
                  set("armor_prop/armor",30);
                set("armor_prop/dodge",7);
                set("armor_prop/unarmed",5);
                set("armor/type","cloth");
              }

        setup();
}
// 以下是穿着时会发光，脱卸时便黯淡的程式
/*
void init()
{
        add_action("do_wear","wear");
        add_action("do_remove","remove");
}
int do_wear(string str)
{
        this_player()->set_temp("light_up",1);
        wear();
        set("wear_msg","$N穿起$n时，散发出阵阵的寒光！\n");
        return 1;
}
int do_remove(string str)
{
        this_player()->delete_temp("light_up");
        unequip();
        set("unequip_msg","$N脱下$n之后，$n的寒光逐渐消失。\n");
        return 1;
} 


*/
