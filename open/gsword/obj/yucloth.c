inherit EQUIP;
void create()
{
       set_name( "���������" , ({ "yucloth" }) );
        set_weight(0);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 70000);
                set("material", "cloth");
                set("armor_type", "cloth");
		set("armor_prop/armor", 15);
		set("armor_prop/dodge", 3);



}



        }
