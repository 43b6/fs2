// mask.c

inherit EQUIP;

void create()
{
        set_name("��������", ({"cloak"}) );
        set_weight(1);
        if(clonep())
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 0);
                set("material","steel");
                set("armor_type","cape");
                set("armor_prop/id", ({"evil stone"}) );
                set("armor_prop/name", ({"ħʯ����"}) );
                set("armor_prop/short", ({"ħɭ���ػ���"}) );
        }
        set("no_drop",1);
        set("no_give",1);
        set("no_get",1);
        set("no_sell",1);
        setup();
}