//room:/u/e/eva/village/room/room-17.c    made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ��嶫���");
    set("long","
    ������ħ���Ķ����, ħ���λ��ħ���������, �����ڴ���
�Թ�����, �и����ڴ�����������֮��, ƾ��������������˵�����
, ���������ʹħ���޷�����, ʹ������ħ����Ψһ������, ����
�����Լ��͵�ħ����Խ���.\n\n");
    set ("exits",([
        "west" : __DIR__"room-16",
       "east" : "/open/mogi/castle/h",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);  
    setup();
}

int valid_leave(object me,string dir)
{
    if ( me==this_player() && dir=="east" )
        {
        tell_object(me,HIM"���������ɵĴ�������, ����ħ���!\n"NOR);
        }
    return ::valid_leave(me,dir);
}
