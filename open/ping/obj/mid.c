inherit ITEM;

void create()
{
        set_name("��������", ({ "maiu_id" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","�ִ�����,��ɲμ�����.\n");
                set("value", 0);
        }
}

