inherit EQUIP;

void create()
{
        set_name("[32mǬ��ս��ѥ[0m",({"boris boots","boots"}) );
        set_weight(600);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","[31mʥ���[0m����ר�õ�ս��ѥ���Թ����ۼ׾�����֯���ɡ�\n");
        set("unit","˫");
        set("value", 50000);
        set("material","leather");
        set("armor_type","boots");
        set("wear_msg","[36m����$n֮��$N�������ʱ�ܵ�����֮����ǣ������������[0m\n");
        set("armor_prop/move", 5);
        set("armor_prop/dodge", 5);
        set("armor_prop/armor", 5);
        }
        setup();
}        