inherit ROOM;
#include <ansi.h>
void create()
{
set("short","��������ʮ¥");
set("long",@LONG

��������������������Ҳ���κδ򶷵ĺۼ������㿪ʼ����
������������������һ�����𣿹�û��ã�һ�ɼ��������
ͻȻ��ס���㣬��������һ������Σ���ˣ���

LONG);
set("exits",([
"up":__DIR__"up50-1",
"south":__DIR__"busy_room50",
]));
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("objects",([
__DIR__"obj/robot50":1,
]));
setup();
}
int valid_leave(object me,string dir)
{
if(dir=="up")
{
int check=me->query("quest/start_game");
if(check<51)
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