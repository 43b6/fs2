inherit EQUIP;

void create()
{
set_name("ɱ�ֻ�ϥ",({"killer legging","legging"}));
set_weight(1000);
        if( clonep() )
set_default_object(__FILE__);
else {
set("long","�����Ⲽ���ƳɵĻ�ϥ , �����˫�ŵ����ݶ� .\n");
        set("unit","��");
set("value",1500);
set("material","cloth");
        set("armor_type","leggings");
        set("armor_prop/armor",3);
        set("armor_prop/dodge",2);
}
        setup();
}