inherit ITEM;
void create()
{
        set_name("��õ����", ({ "fu_page" }) );
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 0);
        }
}