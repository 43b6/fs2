inherit ITEM;

void create()
{
        set_name("��˰����", ({ "no_tax" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","��ͥ���������˰�Ľ���.\n");
                set("value", 10000);
        }
}

