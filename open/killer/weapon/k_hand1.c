inherit EQUIP;
void create()
{
set_name("רҵɱ������",({"killer hands","hands"}));
set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�ر��Ƴɵ����� , �ܴ�����߱������ս����");
        set("unit", "˫");
set("value",4000);
        set("material","cloth");
set("armor_type", "hands");
        set("armor_prop/throwing",2);
        set("armor_prop/parry",2);
        set("armor_prop/armor",4);
        }
        setup();
}