inherit ITEM;
void create()
{
        set_name("���պ��ҵ���ͷ", ({ "hou_head" }) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 0);
        }
}