#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
           set("short","������");
          set("long",@LONG
����������а������е��������ˣ��ڴ˴��㿴����һ���Ź��
��������ɭɭ�ģ����ֲ�����ָ��ԶԶ����ȥ��ֻ�����������ڣ���
�������̷ɱ���ȥ��ֻ��һ��������������������ʱ�ŷ��������
��ħ�����ⱼ����

LONG);
        set("exits", ([
		"south":__DIR__"room4e",
		"east":__DIR__"room4",
		"north":__DIR__"room4c",
		"east":__DIR__"room4e",
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


