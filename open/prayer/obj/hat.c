inherit EQUIP;

void create()
{
        set_name("�д�", ({ "head-belt", "belt" }) );
        set_weight(1000);
                if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "ϵ��ͷ�ϵķ����þߡ�\n");
                set("unit", "��");
                set("value",10000);
                set("material", "fur");
                set("armor_type", "head");
                set("armor_prop/armor", 5);
                
        }
        setup();
}                 