#include <ansi.h>

inherit ITEM;
inherit F_LIQUID;

int extra_func();
int drink_func();

void create()
{
        set_name(HIC"ǧ���"NOR, ({ "thousand year's ice","ice" }) );
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else
	{
                set( "long", "һ��ȡ����а����������׼���֮���ı��飬ʮ�ֽ�ʡ�\n" );
                set( "unit", "��" );
                set( "value", 20000 );
                set( "����", 30 );
        }
        set("Һ��", ([
                "����"          : "��",
                "����"          : HIW"�����ˮ"NOR,
                "ʣ"            : 3,
                "ֹ��"          : 300,
                "����ѶϢ"      : (: drink_func :),
                "���⺯��"      : (: extra_func :)
        ]) );
        setup();
}

int extra_func()
{
        if( !query("Һ��/ʣ") )
	{
                write( HIW"ǧ����Ѿ�������������ڻ����ˡ�\n"NOR );
                destruct( this_object() );
                return 1;
        }
        return 0;
}

int drink_func()
{
        object me = this_player();
        message_vision( HIC"$N����������������֮���ܻ�ǧ���������˱���ڻ�֮ˮ��\n"NOR, me );
	me->add("force",-100);
	me->add("food",-300);
        return 1;
}
