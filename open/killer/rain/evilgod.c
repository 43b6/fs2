inherit ITEM;
void create()
{
        set_name("��ħ�����", ({ "evil_god" }) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
set("long","������ħ����󷨣�����д���㿴����������\n");
                set("value", 0);
        }
}