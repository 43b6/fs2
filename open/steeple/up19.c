inherit ROOM;
#include <ansi.h>
void create()
{
set("short","������ʮ��¥");
set("long",@LONG

�����ǿ����Ȼ��������¥������ǿ��࣬�Ѿ���һ�㼶��ˮ׼��
�������û�С�����ʦ����ʦ������ˮ׼���ƺ��޷�˳����ͨ����
�顣

LONG);
set("exits",([
"up":__DIR__"busy_room20",
"south":__DIR__"busy_room19",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/robot19":1,
]));
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<20)
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