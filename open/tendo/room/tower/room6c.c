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
		"east":__DIR__"room6d",
		"south":__DIR__"room6c",
		"west":__DIR__"room6d",
		"north":__DIR__"room6a",
        ]) );
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
           set("no_transmit",1);  
        setup();
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 6,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"����Ӱ���������������һ�󷭹�����Ȼһ��Ѫ��������������˳�����\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 6,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}



