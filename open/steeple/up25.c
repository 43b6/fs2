inherit ROOM;
#include <ansi.h>
void create()
{
set("short","��������ʮ��¥");
set("long",@LONG

������ת������¡¡���죬ÿһ��ת�������춼�������Ĳ�������
�Ķ����������������ǿ���Ѿ�������һ������������ͨ���ˣ�û
��һ����ǿ�����ϣ�����ֻ�����⸽���ǻ������ɡ�

LONG);
set("exits",([
"up":__DIR__"busy_room26",
"south":__DIR__"busy_room25",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/robot25":1,
]));
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<26)
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