//open/prayer/room/youkoun/26.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�̷�");
        set("long",@LONG

        �ߵ��ܵ��ľ�ͷ֮��, ����ͻȻ������������, ����۾�
        һʱ�޷���Ӧ, ���㽥�����Կ���������, �㻳���Լ���
        ��������??�����ʬ�ױ��, ���кö��Ǹ���ȥû��õ�
        ����ʬ��. �������϶����ǿֲ��ı���!!Ż~~~~���̲�ס
        ����һ��!!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"27",    
        "west":__DIR__"25",     
 
        ]) );
        set("no_fight", 0);
                
  setup();
}

void init()
{
 add_action("search_here", "search");
}

int search_here(string str)
{
    write("����ϸһ��, ����ǽ�����и����С����!!\n");
    set("exits/down",__DIR__"29");
    call_out("do_close",10);
    return 1;
}

void do_close()
{
        if(!query("exits/down"))
                return;
        delete("exits/down");
        tell_room(this_object(),"��~~~~ǽ�����Զ��������ˡ�\n");
}
