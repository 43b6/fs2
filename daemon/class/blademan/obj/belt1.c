inherit EQUIP;

void create()
{
          set_name("丝带", ({ "belt" }) );
        set_weight(500);
        set("long", "一条仅能系住衣裳的丝质带子");
        set("unit", "件");
         set("value",1000);
        set("material", "leather");
        set("armor_type", "waist");
 set("armor_prop/armor", 5);
                set("armor_prop/move",3);
        setup();
}
