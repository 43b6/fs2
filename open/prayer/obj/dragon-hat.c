inherit EQUIP;

void create()
{
        set_name("��֮ͷ��", ({ "dragon_hat", "hat" }) );
        set_weight(3000);
                if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "�Ƽ׽�����Ƥ�Ƴɵ�ͷ��ר�÷����þߡ�\n");
                set("unit", "��");
                set("value",20000);
                set("material", "fur");
                set("armor_type", "head");
                set("armor_prop/armor", 7);
                
        }
        setup();
}                 