inherit ITEM;
void create()
{
        set_name("��õ���ͷ",({"fu_head"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 0);
        }
}
