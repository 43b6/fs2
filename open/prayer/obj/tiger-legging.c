inherit EQUIP;

void create()
{
        set_name("���ǻ�ϥ",({"tiger legging","legging"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","��а������Ϊ��, ����Ƥ���ƳɵĻ�ϥ , ����ǿ˫ϥ�ķ����� .\n");
        set("unit","��");
        set("value",6000);
        set("material","leather");
        set("armor_type","leggings");
        set("armor_prop/armor", 2);
        }
        setup();
}                        