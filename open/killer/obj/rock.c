inherit ITEM;
void create()
{
        set_name("ʯͷ", ({ "rock" }) );
        set_weight(6000);
        if( clonep() )
            set_default_object(__FILE__);
        else 
        {
            set("unit", "��");
        set("long","·�ߵ�ʯͷ������ѹ��put)�����պ�.\n");
        set("value", 1);
        }
}