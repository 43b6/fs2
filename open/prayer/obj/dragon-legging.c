inherit EQUIP;

void create()
{
        set_name("���׻�ϥ",({"dragon legging","legging"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�û����ۼ��ƳɵĻ�ϥ , ����ǿ˫�ŵķ����� .\n");
        set("unit","��");
        set("value",30000);
        set("material","leather");
        set("armor_type","leggings");
        set("armor_prop/armor", 3);
        set("armor_prop/move",-1);
        }
        setup();
}                        