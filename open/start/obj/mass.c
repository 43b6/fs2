 
inherit ITEM;
 
void create()
{
        set_name("�������", ({ "little mass" , "mass" }) );
        set_weight( 90 );
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "СС��һ�Ų���, ͨ�����, ���������«��, ����, ��ǵ�ˬ�ڵĲ���, ������������Ϊ������һ��������\n");
                set("unit", "��");
                set("value", 75);
                set("ʳ��", ([
                        "ʣ" : 5,
                        "��Ӧ": 45,
                ]) );
        }
        setup();
}
