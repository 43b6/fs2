 inherit EQUIP;
void create()
{
        set_name("Ǭ������",({"boris hands","hands"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
ʥ��̽���ר�õĻ���, �ܴ�����߱���Ĺ�������˫�ֵļ���!!
");
        set("unit", "˫");
        set("value",100000);
        set("material","leather");
        set("armor_type", "hands");
        set("armor_prop/armor",5);
        set("armor_prop/attack",5);
        }
        setup();
}                    