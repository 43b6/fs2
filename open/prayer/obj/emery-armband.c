inherit EQUIP;

void create()
{
        set_name("金刚臂环",({"emery armband","armband"}));

        set_weight(1300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","金刚砂与精刚混制而成的臂环, 上头镶嵌邪兽的眼珠, 藉以吸收外界中的邪气, 引为己用 .\n");
        set("unit","只");
        set("value",10000);
        set("material","steel");
        set("armor_type","armbands");
        set("armor_prop/armor", 4);
        }
        setup();
}                        
