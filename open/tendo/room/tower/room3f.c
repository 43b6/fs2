#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          set("short","������");
          set("long",@LONG

�������������а������е��������ڴ˴��㿴�������صĿݹǣ�
���ܺ��޹��ߣ����ֲ�����ָ, ԶԶ����ȥ��ֻ����һ�����⣬������
���̷ɱ���ȥ��ֻ��һ��������������������ʱ�ŷ�������������
������ɱ�������
LONG);

        set("exits", ([
		"south":__DIR__"room3",
		"west":__DIR__"room3g",
		"north":__DIR__"room3c",
	        "east":__DIR__"room3g",
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



