inherit ITEM;

void create()
{
        set_name("��������ͷ", ({ "maiu-head" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","��������ͷ,�����ֶ��ĵ�.\n");
                set("value", 0);
        }
}

