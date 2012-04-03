//open/prayer/room/garden19.c
#include <room.h>
#include "/open/open.h"
inherit ROOM;

int have = 1;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

            ����������Լ�ĳߵ�����ʯ�񣬸ղ���Ũ
        ���������ĵ���һ��������!!��������ԶԶ��
        ȥ����һ�ɷǳ���͵ĸо�!!�����д��㲻��
        ���ַ������!!

LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "south":"/open/prayer/room/garden15",             
        "east":"/open/prayer/room/garden18",              
        "west":"/open/prayer/room/garden20",              
        ]) );
         set("item_desc", ([
         "statue": "����ʯ������Գ��������ƿ���\n"
        ]));
   setup();
}

void init()
{
            add_action("search_here", "search");
        add_action("do_push","push");
}

int search_here(string str)
{
    if( (this_player()->query("quests/white-crystal",1) )  )
      write("�㳢������һ��ʯ��,������ʯ���ƺ��е�����.\n"+
            "����������ƶ���(push statue).\n");
    else
      write("Ҳ�����㾭�鲻��,��ʲôҲû����...\n");
    return 1;
}
int do_push(string str)
{
        object ob;
        ob = this_player();

        if(!str || str != "statue")
                return notify_fail("������ʲô��?\n");
        else {
        set("exits/down","/open/prayer/room/hole/2");
message_vision("$N�����İ�ʯ���ƿ�����ŷ���ԭ���е�����һ�����ݡ�������ͨ���δ���??\n", ob);
        call_out("do_close",10);
        }
        return 1;
}

void do_close()
{
        if(!query("exits/down"))
                return;
        delete("exits/down");
        tell_room(this_object(),"�����ƿ���ʯ���ֻ������Զ��ص���ԭλ��\n");
}
