inherit ROOM;
#include <ansi.h>
void create()
{
set("short","��������ʮ��¥");
set("long",@LONG

ǿ�����ѹ����ס�������䣬һ�ɼ���������ڷ������Ĵ����ܣ�
Ҫ��û�����õ������ֵ��ţ������Ѿ�����ѹ��ѹ���ˣ���������
�Ķ��ֱض���������Ҫ�ѶԸ���

LONG);
set("exits",([
"up":__DIR__"busy_room40",
"south":__DIR__"busy_room39",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/robot39":1,
]));
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<40)
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