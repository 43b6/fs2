#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          set("short","������");
        set("outdoors", 1);
       set("long", @LONG
���Ѿ��������������ֻ�����ܶ�����ʯ���Լ�һЩ�����ڴ�
���˵ĺ��ǣ��ڴ������޷����������Ĵ���ɭɭ�ģ�������������
һ�ɲ�Ѱ������Ϣ��������������Ļ��Ҳ�Ե�ʮ�ֵİ�����������
����ʹ���Ӳ�������һ�ɺ��ⲻ����Ȼ������������һֱ�ڽ����
ͷ����Ҫ������ǰ����....
LONG);          
        set("exits", ([
		"north":__DIR__"room5",
		"south":__DIR__"room5b",
		"west":__DIR__"room5c",
		"east":__DIR__"room5b",
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



