 
inherit ITEM;
 
void create()
{
        set_name("С��������",({"pyramid mass","mass"}) );
        set_weight(180);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","�ۣ��ô��һ�����ӣ�������һ���أ���������˵����㹽����Ϻ���أ������̲�ʥƷ�����˳��˻����ٳԡ� ");
                set("unit", "��");
                set("value", 150);
                set("ʳ��", ([
                        "ʣ" : 10,
                        "��Ӧ": 90,
                ]) );
        }
        setup();
}
