//open/prayer/room/youkoun/3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�����Ŵ���");
        set("long",@LONG

        �ڴ���������վ��һλ�󻤷�, ���һ���һ�𱣻�����.
        �������ܾ�������ֵֹ�, ������˵���������ָо�..
        �����õ������Ķ����Ծ�..

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "southeast":__DIR__"4",         //����
        "east":__DIR__"2",                      //����
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/left7" : 1,           //�󻤷�
]));
  setup();
}

void init()
{
 add_action("search_here", "search");
}

int search_here(string str)
{
    write("����ϸһ��, ����ǽ���ǿ��Ի��!!\n");
    set("exits/west",__DIR__"22");
    call_out("do_close",10);
    return 1;
}

void do_close()
{
        if(!query("exits/west"))
                return;
        delete("exits/west");
        tell_room(this_object(),"��~~~~ǽ�����Զ��������ˡ�\n");
}
