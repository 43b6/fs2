#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          set("short","������");
                    set("long",@LONG

���Ѿ��������а�������������У�ֻ�����ܶ�����ʯ���Լ�һ
Щ�����ڴ˵��˵ĺ��ǣ��ڴ������޷��������򡣸��õĶ��������
���޷����ܡ��ټ��ϵ����϶������࣬�������ߣ������߸߰˵ͣ���
��������һ�ţ����˾���һ��ɭ�ֲ���
LONG);
        set("exits", ([
		"west":__DIR__"room2",
		"south":__DIR__"room2d",
		"north":__DIR__"room2c",
		"east":__DIR__"room2b",
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



