#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          set("short","������");
          set("long",@LONG
����������а�����İ������ˣ��ڴ˴��㿴�������ص�������
���������ҹ�����ֲ�����ָ��ԶԶ��ȥ��һ������ӭ�����������
�����̷ɱ���ȥ��ֻ��һ��������������������ʱ�ŷ���������
Ӱ�����ⱼ����

LONG);
        set("exits", ([
		"west":__DIR__"room6c",
		"south":__DIR__"room6",
		"north":__DIR__"room6c",
		"east":__DIR__"room6b",
        ]) );
	set("objects",([
]));
              set("no_transmit",1);
        setup();
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 3,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"����Ӱ���������������һ�󷭹�����Ȼһ��Ѫ��������������˳�����\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 3,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}





