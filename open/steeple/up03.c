inherit ROOM;
#include <ansi.h>
void create()
{
set("short","��������¥");
set("long",@LONG

��������֮������򵥵�һ��¥�����治�����һ�Ѱ�è������
����Ӧ���Ǻܼ򵥾���ͨ���ˡ�

LONG);
set("exits",([
"up":__DIR__"busy_room04",
"south":__DIR__"busy_room03",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/robot04":1,
]));
setup();
}

int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<=4)
{
tell_object(me,HIR"ϵͳ����ľ�Ƭ���ϲ�����ͨ��¥�ϡ�\n"NOR);
return 0;
}
{
message_vision(HIW"ϵͳ����ȡ"+me->query("name")+"����Ƭ��ͨ����\n"NOR,me);
return 1;
}
}
if(dir=="south")
return 1;
}